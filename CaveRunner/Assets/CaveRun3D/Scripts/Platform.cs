using System;
using UnityEngine;

public sealed class Platform : MonoBehaviour
{
    //This script handles the movement of a platform based on the player's speed. It moves straight only, and then recreates itself at the start position while destroying itself

    private GameObject Player; //Used to hold the player object, if it's in the scene
    private GameObject PlatformCreator; //Used to hold the Platform Creator object, if it's in the scene

    private float PlatformSpeed; //Current platform speed, set by the player's speed
    private int obstacleIndex = -1; //used for tutorial only

    private bool CreatedPlatform = false; //Have we created a platform yet? This is used to make sure we create the platform again at the start position only once per platform
    private int SectionLength = 3; //The section length. In my case both middle and edge sections are 3 in length. You have to check your custom made sections and make sure you set them right.
                                   //In 3DS max for example 100 = 1 in Unity edit.

    public int PlatformLength = 0; //The entire platform length with all the sections in it.
    private PlatformCreator kPlatformCreator;
    private PlayerControls kPlayerControls;

    private void Start()
    {
        Player = GameObject.FindWithTag("Player"); //Find the player in the scene and put it in a variable, for later use
        PlatformCreator = GameObject.FindWithTag("PlatformCreator"); //Find the Platform Creator in the scene and put it in a variable, for later use
        kPlatformCreator = PlatformCreator.GetComponent<PlatformCreator>();
        kPlayerControls = Player.transform.GetComponent<PlayerControls>();
    }

    private void Update()
    {
        if (Time.timeScale > 0)
        {
            if (Player) PlatformSpeed = -1 * kPlayerControls.Speed; //If a player object exists, set the platform's speed to be the exact opposite of the player's speed

            transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z - kPlayerControls.Speed * Time.deltaTime);
            //rigidbody.velocity.x = PlatformSpeed;
            //transform.Translate(Vector3.forward * PlatformSpeed, Space.World); //move the paltforms based their speed

            //create another platform at the start position
            if (transform.position.z < PlatformCreator.transform.position.z - (kPlatformCreator.PlatformLength + 2) * SectionLength && CreatedPlatform == false)
            {
                //The platform is created at the end of the last section of the last platform, plus a gap
                kPlatformCreator.CreatePlatform((int)Math.Round(kPlatformCreator.NewPlatformCopy.position.z + (kPlatformCreator.PlatformLength + 2) * SectionLength));

                CreatedPlatform = true;
            }

            //Remove the current platform after it passed well beyond the player
            if (transform.position.z < PlatformCreator.transform.position.z - (kPlatformCreator.PlatformLength + 2) * SectionLength - 100)
            {
                kPlatformCreator.collector.DisposeChildren(gameObject);
            }
        }
    }

    public void setObstacleIndex(int val)
    {
        obstacleIndex = val;
    }

    public int getObstacleIndex()
    {
        return obstacleIndex;
    }
}