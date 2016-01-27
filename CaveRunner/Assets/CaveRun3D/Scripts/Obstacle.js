//This script handles the obstacles. These are the objects that the played crashes into, affecting his speed, jump power, and pushing him back
//There are many different obstacle types you can create using this script, you can set a special animation to be played, or a sound, or make the obstacles
//stick to the player fro a while. Play around with the different values to see what new obstacles you can come up with

private var Player:GameObject; //Used to hold the player object, if it's in the scene

var SpeedChange:float = 0.8; //How much rhe player's speed is affected. A value below 1 will slow the player down, while a value above 1 will speed him up
private var SpeedChangeModifier : float = 0.5f;
var TurnSpeedChange:float = 0.1; //How much the Turning speed is affected. A value lower than 1 will make rotation slower
var Bounce:Vector3 = Vector3(0,10,0); //How much to bounce the player and in what direction

var JumpChange:float = 1; //How much the jump power is affected. Lower than 1 means his jump is weaker
var JumpChangeTime:float = 0; //How long to keep this change

var HitAnimation:String = "Lava"; //What player animation to run when hitting this obstacle
var HitAnimationTime:float = 0; //How long to keep this animation

var AnimateObstacle:boolean = false; //Should we animate the obstacle itself when hitting the player. If the obstacle has an animation, it will be played if this value is set to true

private var HitPlayer:boolean = false; //Did we hit the player?
var HitSound:AudioClip; //The sound to be played when hitting the player

var StickToPlayer:boolean = false; //Do we stick to the player? If set to true, the obstacle will stick to the player for some time and then disappear, creating a Disperse effect in its position
private var StuckToPlayer:boolean = false; //Are we stuck to the player now?
var StickTime:float = 0; //How long should the obstacle stick to the player
var DisperseEffect:Transform; //The effect to be created after the stick time has passed

var LookAtPlayer:boolean = false; //Should the obstacle look at the player

var Rotation:Vector3 = Vector3(270,0,0); //Set an initial rotation for the obstacle, in case it turns out to be wrongly rotated
var Offset:Vector3 = Vector3(0,0,0); //Offset the object in any direction at when created

var kPlayerControls : PlayerControls;

function Start()
{
	if (SpeedChange < 1) SpeedChange += (SpeedChangeModifier * (1 - SpeedChange));
	Player = GameObject.FindWithTag("Player"); //Find the player in the scene and put it in a variable, for later use

	transform.Translate(Offset, Space.Self); //Move the object based on the value of Offset
	transform.eulerAngles = Rotation; //Rotate the object based on Rotation
	
	transform.eulerAngles.y = Random.value * 360; //Give the obstacle a random Up axis rotation, so they don't all look the same in terms of orientation
	kPlayerControls = Player.GetComponent("PlayerControls");
}

function Update()
{
	if ( StickToPlayer == true ) //If StickToPlayer is true...
	{
		if ( StickTime > 0 && StuckToPlayer == true ) //...and while the stick time is more than 0 and we are actually stuck to the player... 
		{
			StickTime -= Time.deltaTime; //Decrease stick time
			
			if ( Player )    transform.position = Player.transform.position; //Move the obstacle to the position of the player
		}
		else if ( StuckToPlayer == true ) //If the time has passed and we are still stuck to the player...
		{
			StuckToPlayer = false; //Stop being stuck
		
			if ( DisperseEffect )    Instantiate(DisperseEffect, transform.position, Quaternion.identity); //Create a disperse effect at the position of this obstacle
			
			Destroy(gameObject); //remove this obstacle
		}
	}
	
	if ( LookAtPlayer == true && Player ) //If look at player is set to true, look at the player
	{
		transform.LookAt(Player.transform.position); //Look at the player
		
		transform.eulerAngles.x = 0; //Keep the x rotation to 0, so the obstacle doesn't potentially look straight up or straight to the ground
		transform.eulerAngles.z = 0; //Keep the y rotation to 0, so the obstacle doesn't potentially look straight up or straight to the ground
	}
	
	//FP: Test for null parent, destroy obstacles not attached to a platform
	
	if (transform.parent == null && !StuckToPlayer )
	{
		//Debug.Log("destroying obstacle with no parent");
		Destroy(gameObject);
		
	}
}

function OnTriggerEnter(collision : Collider) 
{
	//If we hit either the player do the following...
	if ( collision.tag  == "Player" && HitPlayer == false && Player )
	{
		HitPlayer = true; //Set hit player to true, so we hit him only once per obstacle
			
		if ( StickToPlayer == false )    audio.PlayOneShot(HitSound); //If we don;t stick to the player, play the hit sound defined in the inspector
		else    audio.Play(); //Otherwise, if we do stick to the player, play the sound that is currently in the obstacle's audio source. I do this because I want a sound loop to play from the obstacle while stuck
		//to the player. A good example would be the bats obstacle which plays a bat sound loop while stuck to the player
		
		kPlayerControls.Speed *= SpeedChange; //Affect the player's speed
		kPlayerControls.rigidbody.velocity = Bounce; //Bounce the player
		kPlayerControls.TurnDamping *= TurnSpeedChange; //Affect the player's turning speed
		kPlayerControls.HitAnimation = HitAnimation; //Set the player's hit animation
		kPlayerControls.HitAnimationTime = HitAnimationTime; //Set the player's hit animation time
		
		if ( kPlayerControls.JumpChangeTime <= 0 ) //If the player's jump power hasn't been affected yet...
		{
			kPlayerControls.JumpChange = JumpChange; //Affect the player's jump power
			kPlayerControls.JumpChangeTime = JumpChangeTime; //Set the player's JumpChange time
		}
		
		if ( StickToPlayer == true )  
		{
			StuckToPlayer = true; 
			transform.parent = Player.transform.parent; //Attach the obstacle to the player
			//Debug.Log("obstacle attached");
		}
		
		if ( AnimateObstacle == true )
		{
			transform.animation.Play(); //Play the obstacle animation
		}
	}
}

function OnTriggerExit(collision : Collider) 
{
	if ( Player )
	{
		if (HitSound.name != "Ice") // don't trip on ice
			kPlayerControls.JumpState = 4; //If we finished hitting an obstacle, assuming he was bounce some distance. Automatically set the jump state to "falling after a double jump"
	}
}
