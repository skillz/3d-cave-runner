//This script throws objects chosen randomly from an array, in a certain direction, at a certain rate and speed.
//It's basically a simple particle emitter that throws gameobjects instead of 2D particles. Could be useful for many things
//It use it mostly to make gems fall down at the end of the game, when the score screen is displayed

var Objects:Transform[]; //Holds all the objects that will be created
private var ObjectCopy:Transform; //A copy of the currently created object

var FallSpeed:Vector3 = Vector3(0,0,0); //The falling speed of the object

var CreationRate:Vector2 = Vector2(0,0); //Used to set a minial and maximal creation rate for new objects. (How long to wait until creating a new object)
private var CurrentCreationRate:float = 0; //Holds the current creation rate
private var CreationTime:float = 0; //Use to calculate the time passed since the last created object

var DestroyAfter:Vector2 = Vector2(1,1); //A minimum maximum range of time for destroying a created object (how long to wait before destroying a created object)
private var CurrentDestroyAfter:float = 0; //Holds the current destruction rate

var CreationArea:Vector3 = Vector3(10,10,10); //The creation are of the gems, it's a cube area, and it can be set from the inspector with the help of a gizmo to show you where the cube exactly is

function Update () 
{
	if ( CreationTime < CurrentCreationRate )
	{
		CreationTime += Time.deltaTime; //Add to the CreationTime up to the value of CurrentCreationRate, then move on to creating a gem
	}
	else
	{
		CreationTime = 0; //reset creation time for the next count
		CurrentCreationRate = Random.Range(CreationRate.x,CreationRate.y); //choose a random value for the next creation rate
		CurrentDestroyAfter = Random.Range(DestroyAfter.x,DestroyAfter.y); //choose a random time value for this object to be destroyed after
		
		//Create a copy of a random object chosen from the array of objects, and put it at a random position within the boundaries CreationArea. FInally give it a random rotation
		ObjectCopy = Instantiate(Objects[Random.Range(0,Objects.length)], transform.position + Vector3(Random.Range(-CreationArea.x,CreationArea.x),Random.Range(-CreationArea.y,CreationArea.y),Random.Range(-CreationArea.z,CreationArea.z)), Random.rotation);
		
		//If there is a float script attached to the gems disable it. This is a unique case for the gems they were being preventing from falling due to this script's nature (making them float in a Sine loop)
		if ( ObjectCopy.GetComponent("Float") )    (ObjectCopy.GetComponent("Float") as Float).enabled = false;
		
		ObjectCopy.gameObject.AddComponent(Rigidbody); //Give the object a rigidbody, so we can affect it with physical forces 
		ObjectCopy.rigidbody.useGravity = false; //Prevent it from falling naturally with gravity
		ObjectCopy.rigidbody.velocity = FallSpeed; //Give it a velocity set by the value of FallSpeed, which can be set in the inspector
		
		Destroy(ObjectCopy.gameObject, CurrentDestroyAfter); //Destroy the object after a feew seconds
	}

}

function OnDrawGizmos()
{
	//This gizmo draws a yellow cube in the area where the gems are created, this only appears in the editor and not in the game. THe purpose is to make editing values easier for users
	Gizmos.color = Color (1,1,0,1); //1 Red and 1 Green produce Yellow. the forth digit is the alpha value
	Gizmos.DrawWireCube (transform.position, CreationArea); //Draw a cube based on the value of CreationArea, which can be set from the inspector
}