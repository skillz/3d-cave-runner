using UnityEngine;

public sealed class Step : MonoBehaviour
{
    //This script is used to make a sound when an object collides with another, and it also creates an effect at the colission point
    //And shakes the camera. It's used both in the footsteps of the player to make foot step sounds and dust come out, and also
    //In the Title animation texts to make them throw debris and shake the camera when colliding.

    public AudioClip StepSound; //The sound to be played when the object collides with another

    public Transform TrailEffect; //The effect to be created at the point of collision with another object
    private Transform TrailEffectCopy; //A copy of the effect to be created at the point of collision with another object

    public bool OneShot = false; //If true, the step code happens only once, at the first collision
    private bool OneShotState = false; //Check if OneShot is true or false

    public bool AbsolutePosition = false; //Set an absolute position for the TrailEffect instead of craeting it at the collision point
    public Vector3 EffectPosition = new Vector3(0, 0, 0); //The absolute position of the TrailEffect

    private bool StepState = false; //checks if we made a new step

    public int CameraShake = 0; //How much to shae the camera

    private void OnTriggerEnter(Collider other)
    {
        if (OneShotState == false)
        {
            if (StepState == false)
            {
                GetComponent<AudioSource>().PlayOneShot(StepSound); //Play a step sound

                //If AbsolutePosition is true, create the TrailEffect at a pset position, otherwise create the effect at the collision point
                if (AbsolutePosition == true) TrailEffectCopy = Instantiate(TrailEffect, EffectPosition, Quaternion.identity);
                else TrailEffectCopy = Instantiate(TrailEffect, transform.position, Quaternion.identity);

                //Move the effect a little up and forward
                TrailEffectCopy.Translate(Vector3.up * 0.1f, Space.World);
                TrailEffectCopy.Translate(Vector3.forward * -0.8f, Space.World);

                //If the camera is not shaking at all, set the new shake value. This is made to prevent shake values overwriting each other.
                //For example you may hiot something with a 100 shake value, and then hit something else with a 0 shake value which would normally overwrite the previous value and result in the camera not shaking at all
                Shake kShake = Camera.main.GetComponent<Shake>();
                if (kShake.ShakeFactor == 0)
                {
                    if (kShake) kShake.ShakeFactor = CameraShake; //If a shake scripts exists in the camera, add the shake value to it
                }

                StepState = true; //We made a step!
            }
        }

        if (OneShot == true) //If we have one shot set to true, the step effect will happen only once, at the first collision
        {
            OneShotState = true; //Set the one shot state to true
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (StepState == true)
        {
            StepState = false; //We finished a step, ready to make another!
        }
    }
}