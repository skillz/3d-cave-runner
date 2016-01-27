//This script gives a floating effect to any object it's attached to. You can set how fast and how high
//the object floats from the component inspector

var height = 0.2; //How high the object floats
var speed = 5;//How fast the object floats

private var originalPosition:float; //holds the original position of the object
private var Phase: float; //Holds the phase of the floating animation cycle. When giving it a random number we make different objects in the scene float a little differently.

//We set the original position of the object once at the start of the game
function Start ()
{
	Phase = Random.value; //Set a random value for the floating phase
	
	originalPosition = transform.position.y; //The object's original position
}

//We animate the floating effect using a Sine function offset by Phase and multiplied by Speed
function Update ()
{
	//Move the object in a Sine arc to give it a floating effect
	transform.position.y = originalPosition + (Mathf.Sin((Time.time + Phase) * speed)) * height / 2;
}