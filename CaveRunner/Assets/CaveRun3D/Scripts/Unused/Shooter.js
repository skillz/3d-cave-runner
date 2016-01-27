//This script was intended to created shooter type of obstacle, one that shoots objects at the player
//I chose to exclude it from the game wither because it didn't work correctly or I didn't find a useful use for it.
//I might include it in the game in a later update. You can still try to make use of it if you want

var Player:GameObject;

var ShotObject:Transform;
private var ShotObjectCopy:Transform;

var HitEffect:Transform;

var ShotSpeed:float = 0.2;

var ShotRate:float = 1;
private var ShotTime:float = 0;

var ShotOffset:Vector3 = Vector3(0,0,0);

var DestroyAfter:float = 10;

function Start()
{
	Player = GameObject.FindWithTag("Player");
	
	Destroy(gameObject, DestroyAfter);
}


function Update () 
{
	if ( Player )
	{
		if ( ShotTime < ShotRate )
		{
			ShotTime += Time.deltaTime;
		}
		else
		{
			ShotTime = 0;
			
			ShotObjectCopy = Instantiate(ShotObject , transform.position, Quaternion.identity);
			ShotObjectCopy.parent = null;
			Destroy(ShotObjectCopy.gameObject, 4);
			ShotObjectCopy.Translate(ShotOffset, Space.Self);
			ShotObjectCopy.transform.LookAt(Player.transform.position);
			//ShotObjectCopy.rigidbody.AddForce(transform.forward * ShotSpeed, ForceMode.Impulse);
			ShotObjectCopy.rigidbody.AddForce(transform.forward * ShotSpeed, ForceMode.Impulse);
		
		}
	}

}