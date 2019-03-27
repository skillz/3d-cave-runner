using System;
using UnityEngine;

public sealed class PlayerControls : MonoBehaviour
{
    //This script controls the player movement. The player follows the mouse position. Holding the left mouse button will make him jump, double clicking will make him double jump.
    //THe script also handles all teh animations and sound for various actions ( running , running fast, jumping, falling, hitting lava etc ).

    private GameObject PlatformCreator; //Used to hold the Platform Creator object, if it's in the scene
    private GameObject GameController; //Used to hold the Game Controller object, if it's in the scene
    private GameController gController;
    private PlatformCreator pCreator;

    public float Speed = 0.2f; //The player's current speed
    public float MaxSpeed = 0.4f; //The players maximum speed
    public float Acceleration = 0.004f; //How quickly the player can get to maximum speed
    public Transform SpeedEffect; //The Speed effect that is displayed when running very fast

    public float JumpPower = 10; //The player's jump power

    public float TurningSpeed = 0.5f; //The player's turning speed, how quickly he moves left and right
    public float TurnDamping = 0; //A slowdown value for the turning speed. At 1, it doesn't affect his speed, lower than that will make him rotate slowly

    public string HitAnimation = "Lava"; //The player's hit animation, which plays when the palyer hits an obstacle
    public float HitAnimationTime = 0; //How long the player's hit aniamtion should be player

    public float MovementLimits = 12; //movement limits for the palyer which prevent him from going to far left or right

    public Transform PuffEffect; //The effect created when the player lands on a platform
    UnityEngine.Object PuffEffectCopy; //A copy of the PuffEffect

    public Transform TrailEffect; //The effect created when the player flies up from hitting lava
    UnityEngine.Object TrailEffectCopy; //A copy of the TrailEffect

    private Vector3 InitPos; //The player's initial position
    private Vector3 PlayerPos = Vector3.zero; //The player's current position

    private bool FellOff = false; //Did we fall off? This means the end of the game, you can't jump back after after falling off a platform
    private float FellOffTime = 0;

    public int JumpState = 4; //0-on the floor, 1-jump, 2-fall after jump, 3-double jump, 4-fall after double jump

    public Transform CustomCursor; //Put your custom cusor here. This is the orange glowing circle that shows where the player is going

    //SOUNDS
    public AudioClip JumpSound;
    public AudioClip FallSound;
    public AudioClip StepSound;
    public AudioClip CrashSound;

    float CameraFollowSpeed = 0.2f; //How quickly the camera follows the player's position

    public float JumpChange = 1; //How much the jump power is affected. 1 means jumping is normal. less than 1 means jumps are much weaker
    public float JumpChangeTime = 0; //How long to keep the jump change, in seconds

    private Quaternion calibrationQuaternion;
    private Vector3 currentAcc;
    private float accSpeed = 0.5f;

    private GameObject lastTouchedPlatform;
    private bool playedFallSound = false;

    //Ad Module
    private bool showAdScreen = false;
    private float originalWidth = 600.0f;  // define here the original resolution
    private float originalHeight = 1024.0f; // you used to create the GUI contents
    public GUISkin GUIskin; //The skin gui we'll use
    private Texture2D image; //a 2D image that is palced beside the gems score count
    public string adImageURL;
    public string adWebServiceURL;
    public bool isDead = false;
    private bool useImageIntoTexture = false;
    public Texture2D adImage;
    private string imgUrl = "http://d28zxvxhwlv2wk.cloudfront.net/ad.jpg";

    private void CalibrateAccelerometer()
    {
        Vector3 accelerationSnapshot = new Vector3(0.0f, 0.0f, -1.0f);

        var fromVector = new Vector3(0.0f, 0.0f, -1.0f);

        Quaternion rotateQuaternion = Quaternion.FromToRotation(fromVector, accelerationSnapshot);
        calibrationQuaternion = Quaternion.Inverse(rotateQuaternion);
    }

    Vector3 FixAcceleration(Vector3 acceleration)
    {
        Vector3 fixedAcceleration = calibrationQuaternion * acceleration;
        return fixedAcceleration;
    }

    private void Start()
    {
#if UNITY_ANDROID
    MovementLimits = 16;
    TurningSpeed = 0.06f;
#elif UNITY_IOS
    MovementLimits = 18;
    TurningSpeed = 0.07f;
#endif

        PlatformCreator = GameObject.FindWithTag("PlatformCreator"); //Find the Platform Creator in the scene and put it in a variable, for later use
        GameController = GameObject.FindWithTag("GameController"); //Find the Game Controller in the scene and put it in a variable, for later use
        gController = GameController.GetComponent<GameController>();
        pCreator = PlatformCreator.GetComponent<PlatformCreator>();

        InitPos = transform.position; //Set the initial position of the player

        GetComponent<Animation>().CrossFade("Fall"); //Start playing the fall animation

        (Camera.main.GetComponent<Shake>()).ShakeFactor = (GameController.GetComponent<GameController>()).LevelUpRumble; //shake the camera
        CalibrateAccelerometer();
    }

    private void Update()
    {
        if (Time.timeScale > 0)
        {
            //Make the camera follow the player
            // GetComponent<Camera>().main.transform.position.x -= (GetComponent<Camera>().main.transform.position.x - transform.position.x) * CameraFollowSpeed;
            var mainCameraPos = Camera.main.transform.position;
            Camera.main.transform.position = new Vector3(
                mainCameraPos.x - (mainCameraPos.x - transform.position.x) * CameraFollowSpeed,
                mainCameraPos.y,
                mainCameraPos.z
            );


            if (FellOff == false) //If we haven't fallen off yet, keep running
            {
                //Increase speed based on acceleration
                if (Speed < MaxSpeed)
                {
                    Speed += Acceleration * Time.deltaTime;
                }
                //Debug.Log("Speed: " + Speed);
                //Add to the distance value in the game controller
                gController.TotalDistance += Speed * Time.deltaTime;

                //If turning speed is being damped by the value of TurnDamping, gradually taking it back to normal ( 1 )
                if (TurnDamping < 1) TurnDamping += 0.5f * Time.deltaTime;

                if (JumpChangeTime > 0) //As long as the value of JumpChangeTime is larger than 0, keep the change
                {
                    JumpChangeTime -= Time.deltaTime; //reduce the change time
                }
                else if (Math.Abs(JumpChange - 1) > float.Epsilon) //Otherwise, reset the jump change back to 1, which means it doesn't affect jump power anymore
                {
                    JumpChange = 1;
                }

                if (Input.GetButtonDown("Jump") && JumpState == 0) //If we press the jump button, give the player a velocity up
                {
                    JumpState = 1; //Set the jump state to 1, Jumping
                    GetComponent<Rigidbody>().velocity = new Vector3(
                        GetComponent<Rigidbody>().velocity.x,
                        JumpPower * JumpChange,
                        GetComponent<Rigidbody>().velocity.z
                    ); //Give the player an up velocity

                    GetComponent<AudioSource>().PlayOneShot(JumpSound); //Play a jump sound
                }
                else if (Input.GetButtonUp("Jump") && GetComponent<Rigidbody>().velocity.y > 0 && JumpState == 1) //If we release the jump button while jumping, reduce the up velocity to third of its power, making the player fall quickly
                {
                    JumpState = 2; //fall after jump
                    //Reduce the up velocity to third its power
                    GetComponent<Rigidbody>().velocity = new Vector3(
                        GetComponent<Rigidbody>().velocity.x,
                        GetComponent<Rigidbody>().velocity.y * 0.3f,
                        GetComponent<Rigidbody>().velocity.z
                    );
                }

                if (GetComponent<Rigidbody>().velocity.y < 0 && JumpState == 1) //If we've fallen after jumping, change the animation to falling
                {
                    JumpState = 2; //fall after jump
                }

                if (Input.GetButtonDown("Jump") && JumpState == 2) //If we press the jump button while falling the first time, perform a double jump
                {
                    JumpState = 3; //double jump
                    GetComponent<Rigidbody>().velocity = new Vector3(
                        GetComponent<Rigidbody>().velocity.x,
                        JumpPower * 0.7f * JumpChange,
                        GetComponent<Rigidbody>().velocity.z
                    );

                    GetComponent<AudioSource> ().PlayOneShot(JumpSound); //Play a jump sound
                }
                else if (Input.GetButtonUp("Jump") && GetComponent<Rigidbody>().velocity.y > -1 && JumpState == 3) //If we release the jump button while double jumping, reduce the up velocity to third of its power, making the player fall quickly
                {
                    GetComponent<Rigidbody>().velocity = new Vector3(
                        GetComponent<Rigidbody>().velocity.x,
                        GetComponent<Rigidbody>().velocity.y * 0.3f, //Reduce the up velocity to third its power
                        GetComponent<Rigidbody>().velocity.z
                    );

                    JumpState = 4; //fall after double jump
                }

                if (GetComponent<Rigidbody>().velocity.y < 0 && JumpState == 3) //If we've fallen after double jumping, change the animation to falling
                {
                    JumpState = 4; //fall after double jump
                }

                playerRotate();

            }
            else //If we've fallen off the platform...
            {
                FellOffTime += Time.deltaTime;

                //Decrease speed based on acceleration
                if (Speed > 0.01f)
                {
                    Speed *= 0.9f; //reduce the player's speed
                    if (!playedFallSound)
                    {
                        GetComponent<AudioSource>().PlayOneShot(FallSound);
                        playedFallSound = true;
                    }

                }
                else if (Speed != 0 && (transform.position.y < -3 || FellOffTime > 2)) //if we fell low enough and our speed is not yet 0
                {
                    Speed = 0; //set the speed to 0
                    (Camera.main.GetComponent<Shake>()).ShakeFactor = 200; //shake the camera

                    GetComponent<AudioSource> ().PlayOneShot(CrashSound); //play a crash sound
                    isDead = true;
                    //gController.showScoreOnScreen = true;
                    EndGameRun();
                }
            }

            //Player falls off a platform
            if (transform.position.y < pCreator.PlatformHeightRange.x - 0.5f && FellOff == false)
            {
                FellOff = true;
                //Debug.LogWarning("Player fell!!!!!!!!");
            }

            //High speed effect
            var particles = SpeedEffect.GetComponent<ParticleSystem>();
            if (Speed > 22)
            {
                if (particles.isStopped)
                {
                    particles.Play();
                }
            }
            else
            {
                if (particles.isPlaying)
                {
                    particles.Stop();
                }
            }

            //Lava, walk, run, jump, and fall animations
            if (HitAnimation != "" && HitAnimationTime > 0) //If we have a hit animation set, play it
            {
                GetComponent< Animation > ().CrossFade(HitAnimation); //play the hti animation

                HitAnimationTime -= Time.deltaTime; //reduce from the hit animation time

                if (HitAnimation == "Lava") //If the hit animation happens to be lava, create a trail effect at the player's position
                {
                    Instantiate(TrailEffect, transform.position + Vector3.up * 0.5f, Quaternion.identity);
                }
            }
            else //all the other animations
            {
                if (JumpState == 0) //if we haven't jumped, play the run animations
                {
                    if (Speed > 22) //if speed is above 0.5f, play the fast run animation
                    {
                        GetComponent<Animation> ().CrossFade("Run");
                        //animation["Run"].speed = Speed * 3; //set animation speed be based on the player's actual speed
                    }
                    else //otherwise, play the normal run animation
                    {
                        GetComponent<Animation> ().CrossFade("Walk");
                        //animation["Walk"].speed = Speed * 4; //set animation speed be based on the player's actual speed
                    }
                }
                else if (JumpState == 1 || JumpState == 3)
                {
                    GetComponent<Animation> ().CrossFade("Jump");
                    //animation["Jump"].speed = Speed * 4; //set animation speed be based on the player's actual speed
                }
                else if (JumpState == 2 || JumpState == 4)
                {
                    GetComponent<Animation> ().CrossFade("Fall");
                    //animation["Fall"].speed = Speed * 4; //set animation speed be based on the player's actual speed
                }
            }
        }
    }

    private void playerRotate()
    {
        if (Time.timeScale != 0)
        {
            Vector3 acceleration = Input.acceleration;
            Vector3 fixedAcceleration = FixAcceleration(acceleration);
            currentAcc = Vector3.Lerp(currentAcc, fixedAcceleration, accSpeed);

            float rawThrust = currentAcc.x;

            // Generate a plane that intersects the transform's position. We use this to make the aiming cursor so the player can run in the direction of the cursor
            var playerPlane = new Plane(Vector3.forward, InitPos + new Vector3(0, 0, 6)); //Create an invisible "wall" we can then intersect the mouse with
            var RayCast = Camera.main.ScreenPointToRay(Input.mousePosition); // Generate a ray from the mouse cursor position
            float HitDist = 0; // Determine the point where the cursor ray intersects the plane.

            //Check if we hit the plane
            Vector3 TargetPoint = new Vector3();
            if (playerPlane.Raycast(RayCast, out HitDist)) //&& DisableMouse == false )
            {
                TargetPoint = RayCast.GetPoint(HitDist); // Get the point along the ray that hits the calculated distance.
            }

            //Limit player movement, so he doesn't go too far left or right
            if (TargetPoint.x > MovementLimits) TargetPoint.x = MovementLimits;
            if (TargetPoint.x < -MovementLimits) TargetPoint.x = -MovementLimits;

            if (Application.platform != RuntimePlatform.WindowsEditor) TargetPoint.x = MovementLimits * rawThrust;

            transform.LookAt(TargetPoint); //Make the player look in the direction of the cursor

            PlayerPos.x = TargetPoint.x; //Set the desired horizontal player position to be the same as TargetPoint
            PlayerPos.z = InitPos.z; //Keep the player at his initial forward position

            if (CustomCursor != null) //If we have a custom cursor defined
            {
                CustomCursor.LookAt(transform.position); //make the cursor look at the player
                  
                CustomCursor.position = TargetPoint; //move the cursor to the position of intersection with the plane
                CustomCursor.position = new Vector3(CustomCursor.position.x, transform.position.y, CustomCursor.position.z); //keep the cursor at the vertical position of the player
            }

            //Move the player towards the value of player position based on TurningSpeed, and taking into account TurnDamping which will make turning slower
            transform.position = new Vector3(
                transform.position.x - (transform.position.x - PlayerPos.x) * TurningSpeed * TurnDamping,
                transform.position.y,
                transform.position.z - (transform.position.z - InitPos.z) * 0.1f
            );

            //Rotate in the direction of movement
            transform.rotation = new Quaternion(0, transform.rotation.y, 0, transform.rotation.w);
        }
    }

   private void OnCollisionEnter(Collision collision)
    {
        //If the player falls on a platform, while either jumping or double jumping, se him back to running state
        if (JumpState == 2 || JumpState == 4)
        {
            JumpState = 0;
            if (collision.gameObject.transform.parent.GetComponent<Platform>() != null)
                lastTouchedPlatform = collision.gameObject.transform.parent.gameObject;

            GetComponent<AudioSource>().PlayOneShot(StepSound); //play a step sound

            if (PuffEffect)
                Instantiate(PuffEffect, transform.position, Quaternion.identity); //if there is a puff effect, create it at the player's feet
        }
    }

    public Vector3 getPlayerPos()
    { 
        return PlayerPos;
    }

    public GameObject getLastTouchedPlatform()
    {
        return lastTouchedPlatform;
    }

    //this gizmo shows the movement limits for the player
    private void OnDrawGizmos()
    {
        //Right limit of movement
        Gizmos.color = Color.blue;
        Gizmos.DrawLine(new Vector3(MovementLimits, 0, 0), new Vector3(MovementLimits, 10, 0));

        //Left limit of movement
        Gizmos.color = Color.blue;
        Gizmos.DrawLine(new Vector3(-MovementLimits, 0, 0), new Vector3(-MovementLimits, 10, 0));
    }

    private void EndGameRun()
    {
        gController.EndLevel(); //Run the end level function which is inside the GameController script
        Destroy(gameObject); //remove the player
    }
}