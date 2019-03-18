using UnityEngine;

public sealed class FloatEffect : MonoBehaviour
{
    //This script gives a floating effect to any object it's attached to. You can set how fast and how high
    //the object floats from the component inspector

    float height = 0.2f;    //How high the object floats
    float speed = 5f;       //How fast the object floats

    private float originalPosition; //holds the original position of the object
    private float Phase; //Holds the phase of the floating animation cycle. When giving it a random number we make different objects in the scene float a little differently.

    //We set the original position of the object once at the start of the game
    private void Start()
    {
        Phase = Random.value; //Set a random value for the floating phase

        originalPosition = transform.position.y; //The object's original position
    }

    //We animate the floating effect using a Sine function offset by Phase and multiplied by Speed
    private void Update()
    {
        //Move the object in a Sine arc to give it a floating effect
        transform.position = new Vector3(
            transform.position.x,
            originalPosition + (Mathf.Sin((Time.time + Phase) * speed)) * height / 2,
            transform.position.z
        );
    }
}