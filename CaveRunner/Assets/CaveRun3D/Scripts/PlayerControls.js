//This script controls the player movement. The player follows the mouse position. Holding the left mouse button will make him jump, double clicking will make him double jump.
//THe script also handles all teh animations and sound for various actions ( running , running fast, jumping, falling, hitting lava etc ).

private var PlatformCreator:GameObject; //Used to hold the Platform Creator object, if it's in the scene
private var GameController:GameObject; //Used to hold the Game Controller object, if it's in the scene
private var gController: GameController;
private var pCreator:PlatformCreator;

var Speed:float = 0.2; //The player's current speed
var MaxSpeed:float = 0.4; //The players maximum speed
var Acceleration:float = 0.004; //How quickly the player can get to maximum speed
var SpeedEffect:Transform; //The Speed effect that is displayed when running very fast

var JumpPower:float = 10; //The player's jump power

var TurningSpeed:float = 0.5; //The player's turning speed, how quickly he moves left and right
var TurnDamping:float = 0; //A slowdown value for the turning speed. At 1, it doesn't affect his speed, lower than that will make him rotate slowly

var HitAnimation:String = "Lava"; //The player's hit animation, which plays when the palyer hits an obstacle
var HitAnimationTime:float = 0; //How long the player's hit aniamtion should be player

var MovementLimits:float = 12; //movement limits for the palyer which prevent him from going to far left or right

var PuffEffect:Transform; //The effect created when the player lands on a platform
var PuffEffectCopy:Object; //A copy of the PuffEffect

var TrailEffect:Transform; //The effect created when the player flies up from hitting lava
var TrailEffectCopy:Object; //A copy of the TrailEffect

private var InitPos:Vector3; //The player's initial position
private var PlayerPos:Vector3 = Vector3.zero; //The player's current position

private var FellOff:boolean = false; //Did we fall off? This means the end of the game, you can't jump back after after falling off a platform
private var FellOffTime : float = 0;

var JumpState:int = 4; //0-on the floor, 1-jump, 2-fall after jump, 3-double jump, 4-fall after double jump

var CustomCursor:Transform; //Put your custom cusor here. This is the orange glowing circle that shows where the player is going

//SOUNDS
var JumpSound:AudioClip;
var FallSound:AudioClip;
var StepSound:AudioClip;
var CrashSound:AudioClip;

var CameraFollowSpeed:float = 0.2; //How quickly the camera follows the player's position

var JumpChange:float = 1; //How much the jump power is affected. 1 means jumping is normal. less than 1 means jumps are much weaker
var JumpChangeTime:float = 0; //How long to keep the jump change, in seconds

private var calibrationQuaternion : Quaternion;
private var currentAcc : Vector3;
private var accSpeed : float = 0.5;

private var lastTouchedPlatform:GameObject;
private var playedFallSound:boolean = false;

//Ad Module
private var showAdScreen:boolean = false;
private var originalWidth:float = 600.0;  // define here the original resolution
private var originalHeight:float = 1024.0; // you used to create the GUI contents
public  var GUIskin:GUISkin; //The skin gui we'll use
private var image:Texture2D; //a 2D image that is palced beside the gems score count
public  var adImageURL:String;
public var adWebServiceURL:String;
public var isDead:boolean = false;
private var useImageIntoTexture:boolean = false;
public var adImage:Texture2D;
private var imgUrl:String = "http://d28zxvxhwlv2wk.cloudfront.net/ad.jpg";

function CalibrateAccelerometer () {
    var accelerationSnapshot : Vector3 = new Vector3(0.0,0.0,-1.0);

    var fromVector = new Vector3 (0.0, 0.0, -1.0);

    var rotateQuaternion : Quaternion = Quaternion.FromToRotation (fromVector, accelerationSnapshot);
    calibrationQuaternion = Quaternion.Inverse (rotateQuaternion);
}

function FixAcceleration (acceleration : Vector3) {
    var fixedAcceleration : Vector3 = calibrationQuaternion * acceleration;
    return fixedAcceleration;
}

function Start()
{
#if UNITY_ANDROID
	MovementLimits = 16;
	TurningSpeed = 0.06;
#elif UNITY_IOS
	MovementLimits = 18;
	TurningSpeed = 0.07;
#endif

	PlatformCreator = GameObject.FindWithTag("PlatformCreator"); //Find the Platform Creator in the scene and put it in a variable, for later use
	GameController = GameObject.FindWithTag("GameController"); //Find the Game Controller in the scene and put it in a variable, for later use
	gController = GameController.GetComponent("GameController") as GameController;
	pCreator = PlatformCreator.GetComponent("PlatformCreator") as PlatformCreator;

	InitPos = transform.position; //Set the initial position of the player

	GetComponent.<Animation>().CrossFade("Fall"); //Start playing the fall animation

	(Camera.main.GetComponent("Shake") as Shake).Shake = (GameController.GetComponent("GameController") as GameController).LevelUpRumble; //shake the camera
	CalibrateAccelerometer();
}

function Update()
{
	if (Time.timeScale>0)
	{
		//Make the camera follow the player
		GetComponent.<Camera>().main.transform.position.x -= (GetComponent.<Camera>().main.transform.position.x - transform.position.x) * CameraFollowSpeed;

		if ( FellOff == false ) //If we haven't fallen off yet, keep running
		{
			//Increase speed based on acceleration
			if ( Speed < MaxSpeed )
			{
				Speed += Acceleration * Time.deltaTime;
			}
			//Debug.Log("Speed: " + Speed);
			//Add to the distance value in the game controller
			gController.TotalDistance += Speed* Time.deltaTime;

			//If turning speed is being damped by the value of TurnDamping, gradually taking it back to normal ( 1 )
			if ( TurnDamping < 1 )    TurnDamping += 0.5 * Time.deltaTime;

			if ( JumpChangeTime > 0 ) //As long as the value of JumpChangeTime is larger than 0, keep the change
			{
				JumpChangeTime -= Time.deltaTime; //reduce the change time
			}
			else if ( JumpChange != 1 ) //Otherwise, reset the jump change back to 1, which means it doesn't affect jump power anymore
			{
				JumpChange = 1;
			}

			if ( Input.GetButtonDown("Jump") && JumpState == 0 ) //If we press the jump button, give the player a velocity up
			{
				JumpState = 1; //Set the jump state to 1, Jumping
				GetComponent.<Rigidbody>().velocity.y = JumpPower * JumpChange; //Give the player an up velocity
				GetComponent.<AudioSource>().PlayOneShot(JumpSound); //Play a jump sound
			}
			else if ( Input.GetButtonUp("Jump") && GetComponent.<Rigidbody>().velocity.y > 0 && JumpState == 1 ) //If we release the jump button while jumping, reduce the up velocity to third of its power, making the player fall quickly
			{
				JumpState = 2; //fall after jump
				GetComponent.<Rigidbody>().velocity.y *= 0.3; //Reduce the up velocity to third its power
			}

			if ( GetComponent.<Rigidbody>().velocity.y < 0 && JumpState == 1 ) //If we've fallen after jumping, change the animation to falling
			{
				JumpState = 2; //fall after jump
			}

			if ( Input.GetButtonDown("Jump") && JumpState == 2 ) //If we press the jump button while falling the first time, perform a double jump
			{
				JumpState = 3; //double jump
				GetComponent.<Rigidbody>().velocity.y = JumpPower * 0.7 * JumpChange; //Give the player an up velocity, which is a little weaker than the first jump
				GetComponent.<AudioSource>().PlayOneShot(JumpSound); //Play a jump sound
			}
			else if ( Input.GetButtonUp("Jump") && GetComponent.<Rigidbody>().velocity.y > -1 && JumpState == 3 ) //If we release the jump button while double jumping, reduce the up velocity to third of its power, making the player fall quickly
			{
				GetComponent.<Rigidbody>().velocity.y *= 0.3; //Reduce the up velocity to third its power
				JumpState = 4; //fall after double jump
			}

			if ( GetComponent.<Rigidbody>().velocity.y < 0 && JumpState == 3 ) //If we've fallen after double jumping, change the animation to falling
			{
				JumpState = 4; //fall after double jump
			}

			playerRotate();

		}
		else //If we've fallen off the platform...
		{
			FellOffTime += Time.deltaTime;

			//Decrease speed based on acceleration
			if ( Speed > 0.01 )
			{
				Speed *= 0.9; //reduce the player's speed
				if (!playedFallSound)
				{
					GetComponent.<AudioSource>().PlayOneShot(FallSound);
					playedFallSound = true;
				}

			}
			else if ( Speed != 0 && (transform.position.y < -3 || FellOffTime > 2) ) //if we fell low enough and our speed is not yet 0
			{
				Speed = 0; //set the speed to 0
				(Camera.main.GetComponent("Shake") as Shake).Shake = 200; //shake the camera

				GetComponent.<AudioSource>().PlayOneShot(CrashSound); //play a crash sound
				isDead = true;
				//gController.showScoreOnScreen = true;
				EndGameRun();
			}
		}

		//Player falls off a platform
		if ( transform.position.y < pCreator.PlatformHeightRange.x - 0.5 && FellOff == false ) {
			FellOff = true;
			//Debug.LogWarning("Player fell!!!!!!!!");
		}

		//High speed effect
		//if ( Speed > 22 )
		//{
		//	SpeedEffect.GetComponent.<ParticleEmitter>().emit = true; //turn on the high speed effect
		//}
		//else
		//{
		//	SpeedEffect.GetComponent.<ParticleEmitter>().emit = false; //turn off the high speed effect
		//}

		//Lava, walk, run, jump, and fall animations
		if ( HitAnimation != "" && HitAnimationTime > 0 ) //If we have a hit animation set, play it
		{
			GetComponent.<Animation>().CrossFade(HitAnimation); //play the hti animation

			HitAnimationTime -= Time.deltaTime; //reduce from the hit animation time

			if ( HitAnimation == "Lava" ) //If the hit animation happens to be lava, create a trail effect at the player's position
			{
				Instantiate(TrailEffect , transform.position + Vector3.up * 0.5, Quaternion.identity);
			}
		}
		else //all the other animations
		{
			if ( JumpState == 0 ) //if we haven't jumped, play the run animations
			{
				if ( Speed > 22 ) //if speed is above 0.5, play the fast run animation
				{
					GetComponent.<Animation>().CrossFade("Run");
					//animation["Run"].speed = Speed * 3; //set animation speed be based on the player's actual speed
				}
				else //otherwise, play the normal run animation
				{
					GetComponent.<Animation>().CrossFade("Walk");
					//animation["Walk"].speed = Speed * 4; //set animation speed be based on the player's actual speed
				}
			}
			else if ( JumpState == 1 || JumpState == 3 )
			{
				GetComponent.<Animation>().CrossFade("Jump");
				//animation["Jump"].speed = Speed * 4; //set animation speed be based on the player's actual speed
			}
			else if ( JumpState == 2 || JumpState == 4 )
			{
				GetComponent.<Animation>().CrossFade("Fall");
				//animation["Fall"].speed = Speed * 4; //set animation speed be based on the player's actual speed
			}
		}
	}
}

private function playerRotate()
{
	if (Time.timeScale != 0)
	{
		var acceleration : Vector3 = Input.acceleration;
		var fixedAcceleration : Vector3 = FixAcceleration (acceleration);
		currentAcc = Vector3.Lerp(currentAcc, fixedAcceleration, accSpeed);

		var rawThrust : float = currentAcc.x;

		// Generate a plane that intersects the transform's position. We use this to make the aiming cursor so the player can run in the direction of the cursor
		var playerPlane = new Plane(Vector3.forward, InitPos + Vector3(0,0,6)); //Create an invisible "wall" we can then intersect the mouse with
		var RayCast = Camera.main.ScreenPointToRay (Input.mousePosition);	// Generate a ray from the mouse cursor position
		var HitDist:float = 0; // Determine the point where the cursor ray intersects the plane.

		//Check if we hit the plane
		if ( playerPlane.Raycast (RayCast, HitDist) ) //&& DisableMouse == false )
		{
			var TargetPoint = RayCast.GetPoint(HitDist); // Get the point along the ray that hits the calculated distance.
		}

		//Limit player movement, so he doesn't go too far left or right
		if ( TargetPoint.x > MovementLimits )    TargetPoint.x = MovementLimits;
		if ( TargetPoint.x < -MovementLimits )    TargetPoint.x = -MovementLimits;

		if (Application.platform != RuntimePlatform.WindowsEditor) TargetPoint.x = MovementLimits * rawThrust;

		transform.LookAt(TargetPoint); //Make the player look in the direction of the cursor

		PlayerPos.x = TargetPoint.x; //Set the desired horizontal player position to be the same as TargetPoint
		PlayerPos.z = InitPos.z; //Keep the player at his initial forward position

		if ( CustomCursor ) //If we have a custom cursor defined
		{
			CustomCursor.LookAt(transform.position); //make the cursor look at the player

			CustomCursor.position = TargetPoint; //move the cursor to the position of intersection with the plane
			CustomCursor.position.y = transform.position.y; //keep the cursor at the vertical position of the player
		}

		//Move the player towards the value of player position based on TurningSpeed, and taking into account TurnDamping which will make turning slower
		transform.position.x -= (transform.position.x - PlayerPos.x) * TurningSpeed * TurnDamping;
		transform.position.z -= (transform.position.z - InitPos.z) * 0.1;

		//Rotate in the direction of movement
		transform.rotation.x = transform.rotation.z = 0;
	}
}

function OnCollisionEnter(collision : Collision)
{
	//If the player falls on a platform, while either jumping or double jumping, se him back to running state
	if ( JumpState == 2 || JumpState == 4 )
	{
		JumpState = 0;
		if (collision.gameObject.transform.parent.GetComponent("Platform") as Platform != null)
			lastTouchedPlatform = collision.gameObject.transform.parent.gameObject;

		GetComponent.<AudioSource>().PlayOneShot(StepSound); //play a step sound

		if ( PuffEffect )
			Instantiate(PuffEffect, transform.position, Quaternion.identity); //if there is a puff effect, create it at the player's feet
	}
}

public function getPlayerPos():Vector3
{
	return PlayerPos;
}

public function getLastTouchedPlatform():GameObject
{
	return lastTouchedPlatform;
}

//this gizmo shows the movement limits for the player
function OnDrawGizmos()
{
//Right limit of movement
	Gizmos.color = Color.blue;
	Gizmos.DrawLine (Vector3(MovementLimits,0,0), Vector3(MovementLimits,10,0));

//Left limit of movement
	Gizmos.color = Color.blue;
	Gizmos.DrawLine (Vector3(-MovementLimits,0,0), Vector3(-MovementLimits,10,0));
}

private function EndGameRun()
{
	gController.EndLevel(); //Run the end level function which is inside the GameController script
	Destroy(gameObject); //remove the player
}
