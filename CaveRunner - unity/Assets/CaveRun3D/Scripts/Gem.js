//This script handles the objects that are picked up by the player and give him points, namely the gems
private var GameController:GameObject; //Used to hold the game controller object, if it's in the scene
private var Player:GameObject;         //Used to hold the player object, if it's in the scene
private var gController: GameController;
private var collector: Collector;

public var SpinSpeed:float = 90; //The spinning speed of the object. It rotates around the up axis 
public var Value:int = 1; //How much is added to the player's score when this object is picked up
public var PickupRange:float = 1; //The range from which the droppable is picked up by the Player
public var PickupEffect:Transform; //The effect displayed when the droppable is picked up
public var PickUpEffectCopy:Transform; //A copy of the pickup effect

function Start()
{
	GameController = GameObject.FindWithTag("GameController"); //Find the game controller in the scene and put it in a variable, for later use
	Player         = GameObject.FindWithTag("Player"); //Find the player in the scene and put it in a variable, for later use
	if (GameController)
		gController    = GameController.GetComponent("GameController") as GameController;
		
	var collectorGO:GameObject = GameObject.FindWithTag("Collector");
	if (collectorGO)
		collector = collectorGO.GetComponent("Collector") as Collector;
}

function Update() 
{
	//Rotate the object around the UP axis at a speed set by SpinSpeed
	transform.Rotate(Vector3.up, SpinSpeed * Time.deltaTime, Space.World);
	
	if ( Player ) //If the Player object exists, do the following
	{
		if ( DistanceSquared(transform.position, Player.transform.position) < PickupRange ) //If the Player is close enough to the object, pick it up
		{
			if ( PickupEffect ) //If a pickup effect is defined
			{
				PickUpEffectCopy = Instantiate(PickupEffect, transform.position, transform.rotation); //Create a nice pickup effect
				PickUpEffectCopy.transform.parent = transform.parent; //Attach the pickup effect to the player
			}
			
			//Add to the player's gem score
			gController.TotalGems += Value; 
			
			collector.Dispose(gameObject); //remove the object
		}
	}
}

private function DistanceSquared (a:Vector3,b:Vector3):float
{
	var vector:Vector3 = new Vector3 (a.x - b.x, a.y - b.y, a.z - b.z);
	return (vector.x * vector.x + vector.y * vector.y + vector.z * vector.z);
}
