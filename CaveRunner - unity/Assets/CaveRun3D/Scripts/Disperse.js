//This script is used to make the bats fly away, it basically takes all the objects within, adds a rigidbody
//to them, then throws them away in different directions

var RemoveAfter:float = 5; //destroy this gameObject after a few seconds

var ShouldUseGravity:boolean = false; //The useGravity setting. If it's on false the objects will not fall down with gravity. If it's on true , they will fall down with gravity

var DisperseRangeX:Vector2 = Vector2(-4,4); //x range of the disperse velocity
var DisperseRangeY:Vector2 = Vector2(3,6); //y range of the disperse velocity
var DisperseRangeZ:Vector2 = Vector2(10,12); //z range of the disperse velocity

function Start()
{
	//Go through all the objects within this group and perform the following actions on them
	for( var ObjectToDisperse:Transform in transform )
	{
		ObjectToDisperse.gameObject.AddComponent(Rigidbody); //Add a rigidbody to this object so it can be affected by forces
		ObjectToDisperse.GetComponent.<Rigidbody>().useGravity = ShouldUseGravity; //Change the useGravity setting. If it's on false the objects will not fall down with gravity. If it's on true , they will fall down with gravity
		ObjectToDisperse.GetComponent.<Rigidbody>().velocity.x = Random.Range(DisperseRangeX.x,DisperseRangeX.y); //Set the x velocity to a random value within DisperseRangeX
		ObjectToDisperse.GetComponent.<Rigidbody>().velocity.y = Random.Range(DisperseRangeY.x,DisperseRangeY.y); //Set the y velocity to a random value within DisperseRangeY
		ObjectToDisperse.GetComponent.<Rigidbody>().velocity.z = Random.Range(DisperseRangeZ.x,DisperseRangeZ.y); //Set the z velocity to a random value within DisperseRangeZ
	}
	
	Destroy(gameObject, RemoveAfter); //Destroy the gameobject after a few seconds
}