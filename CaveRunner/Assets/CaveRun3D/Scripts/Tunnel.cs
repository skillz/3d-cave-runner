using UnityEngine;

public sealed class Tunnel : MonoBehaviour
{
    //This script is used to make an object move straight to a certain distance, and then restart at the initial position
    //I use it to make a tunnel effect. Note that the speed of the tunnel can be either constant and set directly by us
    //in the inspector, or it can be controlled by the speed of the player, if he exists in teh scene

    public float InitialSpeed = 1; //Initial constant speed
    public int TunnelLength = 30; //How long is the tunnel, this is used to know when to reset the tunnel back to its initial position

    private GameObject Player; //THe player object, it's always tagger Player
    private PlayerControls pControls;

    private float TunnelSpeed; //The current speed of the tunnel
    private Vector3 InitPos; //The tunnel's initial position
    private float DistancePassed = 0; //Used to check how much distance has passed

    private void Start()
    {
        InitPos = transform.position; //Set the current position of the tunnel to be its initial position

        Player = GameObject.FindWithTag("Player"); //Put the player object in a variable for easier use later
        if (Player != null)
        { 
            pControls = Player.transform.GetComponent<PlayerControls>(); 
        }
    }

    private void Update()
    {
        if (Time.timeScale > 0)
        {
            //If the player exists in the scene, set the tunnel's speed based on its speed, otherwise keep it constant
            if (Player != null)
            {
                TunnelSpeed = pControls.Speed;
            }
            else
            {
                TunnelSpeed = InitialSpeed;
            }

            transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z - TunnelSpeed * Time.deltaTime);
            //transform.Translate(Vector3.forward * -TunnelSpeed, Space.Self); //move the tunnel forward based on speed

            DistancePassed += TunnelSpeed * Time.deltaTime; //calculate distance passed

            if (DistancePassed > TunnelLength) //if we reached the set distance, reset to initial position
            {
                transform.position = InitPos; //reset to initial position

                DistancePassed = 0; //reset distance passed
            }
        }
    }
}