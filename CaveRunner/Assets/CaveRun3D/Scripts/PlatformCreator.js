//This script creates a platform made up of an edge section, middle sections, and capped with another rotated edge section. Plus, gems and obstacels are created on the platform.
//There are many things you can customize here, like the types of gems and obstacels to be created and their rates. You can set the length/width/height/rotation/shift ranges for a new platform.

private var Player:GameObject; //Used to hold the player object, if it's in the scene

var NumberOfPlatforms:int = 1; //The number of platforms to be created initially, these will be created just once, and then they will recreate themselves in the horizon when they pass the palyer's position
private var PlatformIndex:int; //Index number used to go through all the platforms

var NewPlatform:Transform; //A new empty platform which will hold all the edge and middle sections, as well as the gems and obstacles
var NewPlatformCopy:Transform; //A copy of the new platform

var SectionLength:int = 3;

var SectionEdge:Transform[]; //An array holding all the edge sections that comprise a platform
var SectionMiddle:Transform[]; //An array holding all teh middle sections that comprise a platform
private var SectionIndex:int; //Index number used to setup the middle sections in a platform
private var SectionCopy:GameObject; //A copy of a section

var PlatformWidthRange:Vector2 = Vector2(1.5,2); //The minimum and maximum width ( scale.x ) of a platform
private var PlatformWidth:float; //The current width of a platform

var PlatformLengthRange:Vector2 = Vector2(20,30); //The minimum and maximum length ( number of sections ) of a platform
var PlatformLength:int = 0; //The current length of a platform
private var PlatformOldLength:int; //The previous length of a platform, used to check wether this is the first platform we create and also to sum up the total length of all the platforms created

var PlatformHeightRange:Vector2 = Vector2(-2,1); //The minimum and maximum height ( position.y ) of a platform
private var PlatformHeight:int; //The current height of a platform

var PlatformGapRange:Vector2 = Vector2(5,10); //The minimum and maximum gap height between two platforms
private var PlatformGap:int; //The current gap between two platforms

var PlatformRotateRange:Vector2 = Vector2(-4,4); //The minimum and maximum rotation ( Up axis ) of the platform
private var PlatformRotate:int; //The current rotation of the platform

var PlatformShiftRange:Vector2 = Vector2(0,0);  //The minimum and maximum shift ( position.x ) of the platform
private var PlatformShift:float = 0; //The current shift of the platform

var Gem:Transform[]; //An array that holds all the gems objects
private var GemCopy:GameObject; //A copy of the gem object
private var GemIndex:int = 0; //An index used to setup the gems on the platform
private var GemShift:int = 0; //Shifting ( position.x ) of the gem trail
var GemRate:float = 0.5; //what is the chance of creating a gem on a section of the platform

var Obstacle:Transform[]; //An array that holds all the obstacle objects
private var ObstacleCopy:GameObject; //A copy of the obstacle object
var ObstacleRate:float = 0.5; //what is the chance of creating an obstacle on a section of the platform

private var TotalPlatformLength:int = 0; //The total length of all platforms created at the beginning of the game, including gaps

private var GemTrail:int = 0; //The length of a gem trail. Trails are a set of gems created one after the other in the same staright line
var GemTrailRange:Vector2 = Vector2(3,5); //The range of gems in a single trail

var collector : Collector;

function Start()
{
	Player = GameObject.FindWithTag("Player"); //Find the player in the scene and put it in a variable, for later use
	collector = GameObject.FindWithTag("Collector").GetComponent("Collector");

	//Create the initial set of platforms
	for ( PlatformIndex = 0 ; PlatformIndex < NumberOfPlatforms ; PlatformIndex++ )
	{
		//This function creates a platform, and then moves it forward by the value of TotalPlatformLength.
		//We do this at the start so that the first set of platforms are placed correctly one after the other, and not on top of each other.
		CreatePlatform(TotalPlatformLength);

		//Add the length og the latest created platform to the total length, so we place the new platform right after the old one ( taking platform gap in consideration of course )
		TotalPlatformLength += (PlatformLength + 2 ) * SectionLength + PlatformGap;
	}
}

function CreatePlatform(Offset:int)
{
	//CREATE A NEW PLATFORM
	//Create a new empty platform, so we can put all the platform sections inside it
	NewPlatformCopy = Instantiate(NewPlatform, transform.position, Quaternion.identity);
	NewPlatformCopy.tag = "Platform";

	//Create the start edge of the platform
	SectionCopy = collector.GetSection(0); //Create a section, choosing randomly from an array of sections, and place it at the Plaform Creator's position
	SectionCopy.transform.position = transform.position;
	SectionCopy.transform.rotation = Quaternion.identity;

	SectionCopy.transform.parent = NewPlatformCopy.transform; //Attach the section to the New Platform created earlier
	SectionCopy.transform.Rotate(Vector3.right * -90, Space.World); //Fix the section's orientation. This proved to be the solution to aproblem when importing meshes from 3DS max, since they where always laid on the side and had to be rotated back to stand up straight. If it gives you trouble, either comment it off or contact me for help

	//Set platform Width to a random value between the minimum and maximum of PlatformWidthRange ( localScale.x )
	PlatformWidth = Random.Range(PlatformWidthRange.x,PlatformWidthRange.y);
	if ( PlatformWidth < 0.4 )	PlatformWidth = 0.4; //Limit the width to be no less than 0.4 in scale. We don't want the platforms to be too thin at higher level
	SectionCopy.transform.localScale.x = PlatformWidth; //Set the localScale.x based on the value of PlatformWidth

	PlatformOldLength = PlatformLength; //Record the old length for later use

	//Set platform Length to a random value between the minimum and maximum of PlatformWidthRange ( number of sections in platform )
	PlatformLength = Random.Range(PlatformLengthRange.x,PlatformLengthRange.y);
	if ( PlatformLength < 5 )	PlatformWidth = 5; //Limit the length to be no less than 5 sections long. We don't want the platforms to be too short at higher level
	(NewPlatformCopy.GetComponent("Platform") as Platform).PlatformLength = PlatformLength; //Set the length of the platform

	//Create the middle parts of the platform based on PlatformLength
	//for ( SectionIndex = 0 ; SectionIndex < PlatformLength ; SectionIndex++ )
	//{
		SectionCopy = collector.GetSection(1); //Create a new middle section chosen randomly from an array of middle sections, and place it at the position of Platform Creator
		SectionCopy.transform.position = transform.position;
		SectionCopy.transform.rotation = Quaternion.identity;

		SectionCopy.transform.Translate(Vector3.forward * (SectionIndex + 1) * SectionLength, Space.World); //Move the section forward so that it sits exactly at the end of the previous section
		SectionCopy.transform.localScale.x = PlatformWidth; //Set the localScale.x of the section based on PlatformWidth
		SectionCopy.transform.localScale.y = PlatformLength * 0.8; //Set the localScale.x of the section based on PlatformWidth
		SectionCopy.transform.position.z += (PlatformLength - 1) * SectionLength;
		SectionCopy.transform.parent = NewPlatformCopy.transform; //Attach the section to the New Platform
		SectionCopy.transform.Rotate(Vector3.right * -90, Space.World); //Fix the section's orientation. This proved to be the solution to aproblem when importing meshes from 3DS max, since they where always laid on the side and had to be rotated back to stand up straight. If it gives you trouble, either comment it off or contact me for help
	//}

	//Create the end edge of the platform
	SectionCopy = collector.GetSection(0); //Create a section, choosing randomly from an array of sections, and place it at the Plaform Creator's position
	SectionCopy.transform.position = transform.position;
	SectionCopy.transform.rotation = Quaternion.identity;

	SectionCopy.transform.Translate(Vector3.forward * (PlatformLength + 0) * SectionLength, Space.World); //Move the section forward so that it sits  at the end of the previous section
	SectionCopy.transform.localScale.x = PlatformWidth; //Set the localScale.x of the section based on PlatformWidth
	SectionCopy.transform.parent = NewPlatformCopy.transform; //Attach the section to the New Platform
	SectionCopy.transform.Rotate(Vector3.right * -90, Space.World); //Fix the section's orientation. This proved to be the solution to aproblem when importing meshes from 3DS max, since they where always laid on the side and had to be rotated back to stand up straight. If it gives you trouble, either comment it off or contact me for help
	SectionCopy.transform.Rotate(Vector3.up * 180, Space.World); //Rotate the edge section around so it caps the whole platform nicely.

	//After these actions the result is a complete paltform with a start section, middle sections, and an end section rotated to cap the platform nicely
	//Now we will put in obstacles and gems , and then rotate the platform and shift it, and set its height.

	//Here we set the paltform gap and shift, and create obstacles/gems, but only from the second platform and up
	if ( PlatformOldLength > 0 ) //If this is the first platform, don't create a gap/shift or put obstacles/gems
	{
		PlatformGap = Random.Range(PlatformGapRange.x,PlatformGapRange.y); //Choose a random value within the minimum and maximum of PlatformGapRange
		NewPlatformCopy.Translate(Vector3.forward * PlatformGap, Space.World); //Move the platform forward by the value of PlatformGap

		//Thsi function creates obstacles and gems within horizontal limits
		CreateGemOrObstacle(PlatformWidth * -5,PlatformWidth * 5);

		//Shift the platform some distance either left or right
		PlatformShift = Random.Range(PlatformShiftRange.x,PlatformShiftRange.y); //Choose a random value within the minimum and maximum of PlatformShiftRange
		NewPlatformCopy.Translate(Vector3.right * PlatformShift, Space.World); //Move the platform either left or right by the value of PlatformShift
	}

	//Set platform Height
	PlatformHeight = Random.Range(PlatformHeightRange.x,PlatformHeightRange.y); //Choose a random value within the minimum and maximum of PlatformHeightRange

	NewPlatformCopy.Translate(Vector3.up * PlatformHeight, Space.World); //Move the platform either up or down by the value of PlatformHeight

	//rotate the platform
	PlatformRotate = Random.Range(PlatformRotateRange.x,PlatformRotateRange.y); //Choose a random value within the minimum and maximum of PlatformRotateRange

	NewPlatformCopy.Rotate(Vector3.up * PlatformRotate, Space.World); //Rotate the platform either left or right by the value of PlatformRotate

	NewPlatformCopy.Translate(Vector3.forward * Offset, Space.World); //Move the platform forward based on teh value of Offset. This is the value we set when we run the function, and its used to make the initial platforms created place correctly one after the other
}

//This function creates either an obstacle or a gem
function CreateGemOrObstacle(LeftLimit:float, RightLimit:float)
{
	//We go through all the platform section
	for ( GemIndex = 1 ; GemIndex < PlatformLength * SectionLength; GemIndex += 2 )
	{
		if ( ObstacleRate > Random.Value() ) //Check the obstacle creation rate against a random value between 0 and 1. If the rate is larger, create an obstacle
		{
			//Choose one of the obstacle types from an array, and place it at the position of NewPlatformCopy
			var obstacleIndex = Random.Range(0,Obstacle.length);
			ObstacleCopy = collector.GetObstacle(obstacleIndex);


			ObstacleCopy.transform.position = NewPlatformCopy.transform.position;
			ObstacleCopy.transform.rotation = Quaternion.identity;

			ObstacleCopy.transform.Translate(Vector3.forward * GemIndex, Space.World); //move the obstacle forward based on GemIndex, so it is placed on the next section
			ObstacleCopy.transform.Translate(Vector3.right * Random.Range(LeftLimit,RightLimit), Space.World); //Shift the obstacle left or right within the limits of LeftLimit/RightLimit

			ObstacleCopy.transform.parent = NewPlatformCopy.transform; //Attach the obstacle to the platform
		}
		else if ( GemRate > Random.Value() ) //Check the gem creation rate against a random value between 0 and 1. If the rate is larger, create a gem
		{
			//Choose one of the gem types from an array, and place it at the position of NewPlatformCopy
			var gemIndex = Random.Range(0,Gem.length);

			GemCopy = collector.GetGem(gemIndex);

			GemCopy.transform.position = NewPlatformCopy.transform.position;
			GemCopy.transform.rotation = Random.Rotation();
			GemCopy.transform.Translate(Vector3.forward * GemIndex, Space.World); //move the gem forward based on GemIndex, so it is placed on the next section
			GemCopy.transform.Translate(Vector3.up * 0.7, Space.World); //Move the gem a bit up so it doesn't seem to be stuck unto the ground

			//This If condition is used to place the gems in trails rather than putting them raondomly like the obstacles. It chooses a random value for a trail, then keeps the gems in the same line for the length of
			//the trail, and then chooses another value and starts the trail from a different point within the limits of LeftLimit/RightLimit
			if ( GemTrail > 0 )
			{
				GemTrail--; //Reduce one from the trail count
			}
			else
			{
				GemShift = Random.Range(LeftLimit,RightLimit); //Choose a random point for the gem trail, within the limits of LeftLimit/RightLimit
				GemTrail = Random.Range(GemTrailRange.x,GemTrailRange.y); //Choose a random length of trail for the gems, within the limits of GemTrailRange
			}

			GemCopy.transform.Translate(Vector3.right * GemShift, Space.World); //Move the gem left or right based on the value set in GemShift
			GemCopy.transform.parent = NewPlatformCopy.transform; //Attach the gem to the paltform
		}
	}
}

//This gizmo is used to help us see where the platforms are created and in what direction. The gizmo is a yellow triangle.
function OnDrawGizmos()
{
	//The first edge of the triangle
	Gizmos.color = Color.yellow;
	Gizmos.DrawLine (Vector3(transform.position.x - 5,transform.position.y,transform.position.z), Vector3(transform.position.x + 5,transform.position.y,transform.position.z));

	//The second edge of the triangle
	Gizmos.color = Color.yellow;
	Gizmos.DrawLine (Vector3(transform.position.x + 5,transform.position.y,transform.position.z), Vector3(transform.position.x,transform.position.y,transform.position.z + 5));

	//The third edge of the triangle
	Gizmos.color = Color.yellow;
	Gizmos.DrawLine (Vector3(transform.position.x,transform.position.y,transform.position.z + 5), Vector3(transform.position.x - 5,transform.position.y,transform.position.z));
}

//Used for Tutorial
public function AddObstacle(platform:GameObject,obstacleIndex:int)
{
	ObstacleCopy = collector.GetObstacle(obstacleIndex);

	ObstacleCopy.transform.position = platform.transform.position;
	ObstacleCopy.transform.rotation = Quaternion.identity;

	ObstacleCopy.transform.Translate(Vector3.forward * 6, Space.World); //move the obstacle forward based on GemIndex, so it is placed on the next section
	ObstacleCopy.transform.Translate(Vector3.right * Random.Range(PlatformWidth * -1,PlatformWidth * 1), Space.World); //Shift the obstacle left or right within the limits of LeftLimit/RightLimit
	ObstacleCopy.transform.parent = platform.transform; //Attach the obstacle to the platform

	(platform.GetComponent("Platform")as Platform).setObstacleIndex(obstacleIndex);
}
