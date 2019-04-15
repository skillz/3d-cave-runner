using UnityEngine;

public sealed class GameController : MonoBehaviour
{
    private float originalWidth = 600.0f;  // define here the original resolution
    private float originalHeight = 1024.0f; // you used to create the GUI contents
    private Vector3 scale;
    //This script handles the leveling up in the game and the score and distance records. In each level up the value ranges for platforms are changed ( platform length/height/width/rotate etc )

    private GameObject Player; //Used to hold the player object, if it's in the scene
    private GameObject PlatformCreator; //Used to hold the Platform Creator object, if it's in the scene
    private PlayerControls pControls;
    private PlatformCreator pCreator;
    private GameObject pauseMenu;

    public GUISkin GUIskin; //The skin gui we'll use
    public GUISkin GUIskinLarge;
    public Texture2D Gems; //a 2D image that is placed beside the gems score count
    public Texture2D PauseImage;

    public int CurrentLevel = 1; //The current level we are at
    public int DistanceToLevelUp = 100; //How much more distance do we have to pass to get to the next level. This value is added up to the previous value in each level, meaning that to pass level 1 you need
                                 //to get to 100m, and to pass level 2 you have to get to 300 ( Distance To Level Up multiplied by the Current Level plus the distance passed so far ), to pass level 3 you need to get to 600 ( 100 * 3 + 300 ), and so on

    public string[] LevelUpText; //An array holding several texts that will be randomly displayed when you pass a level
    private string CurrentLevelUpText; //The current level up text
    private bool LevelUp = false; //Are we leveling up? Used to know when to animate the level up text passing across the screen

    public int LevelUpRumble = 200; //How much to shake the screen when you level up

    public float MaxSpeedChange = 0.1f; //How much to change the value of MaxSpeed, which is in the PlayerControls script
    public float PlatformWidthChange = 0.05f; //How much to change the value of PlatformWidthRange, which is in the PlatformCreator script
    public float PlatformLengthChange = 0.05f; //How much to change the value of PlatformLengthRange, which is in the PlatformCreator script
    public float PlatformHeightChange = 0.05f; //How much to change the value of PlatformHeightRange, which is in the PlatformCreator script
    public float PlatformGapChange = 0.05f; //How much to change the value of PlatformGapRange, which is in the PlatformCreator script
    public float PlatformRotateChange = 0.05f; //How much to change the value of PlatformRotateRange, which is in the PlatformCreator script
    public float PlatformShiftChange = 0.05f; //How much to change the value of PlatformShiftRange, which is in the PlatformCreator script
    public float ObstacleRateChange = 0.05f; //How much to change the value of ObstacleRate, which is in the PlatformCreator script
    public float GemRateChange = 0.05f; //How much to change the value of GemRate, which is in the PlatformCreator script

    private float LevelUpPosX = -Screen.width; //The horizontal position of the level up text, currently placed beyond teh screen to the left

    public float TotalDistance = 0; //The total distance passed by the player
    private float LastLevelDistance = 0; //The total distance passed at the start of the current level. For example the value of LastLevelDistance when getting to level 2 is 100, and on level 3 is 300
    public int TotalGems = 0; //total gems collected so far

    bool Paused = false;

    void Start ()
    {
        Debug.Log ("Start Game Controller");
        Player = GameObject.FindWithTag ("Player"); //Find the player in the scene and put it in a variable, for later use
        PlatformCreator = GameObject.FindWithTag ("PlatformCreator"); //Find the Platform Creator in the scene and put it in a variable, for later use
        pControls = Player.GetComponent<PlayerControls>();
        pCreator = PlatformCreator.GetComponent<PlatformCreator>();
        pauseMenu = Instantiate(Resources.Load("PauseMenu")) as GameObject;
        pauseMenu.SetActive (false);
    }

    private void Update()
    {
        if (Input.GetKeyUp("escape"))
        {
            // Ignore back button
        }

        UpdatePaused();

        //If we haven't already leveled up and we passed the target distance for the next level, LEVEL UP!
        if (Time.timeScale > 0)
            if (LevelUp == false && TotalDistance >= DistanceToLevelUp * CurrentLevel + LastLevelDistance)
            {
                LevelUp = true; //we are leveling up right now!

                LastLevelDistance = TotalDistance; //Set the value of LastLevelDistance to the total distance

                CurrentLevel++; //Increase the cuttent level
                LevelUpPosX = Screen.width; //Put the level up text off the screen to the right
                CurrentLevelUpText = LevelUpText[Random.Range(0, LevelUpText.Length)]; //Choose a random text from the level up text array to be displayed

                Camera.main.GetComponent<Shake>().ShakeFactor = LevelUpRumble; //Shake the camera by teh value of LevelUpRumble

                //Here we are changing level values when leveling up, like the platform length/width etc
                pControls.MaxSpeed += MaxSpeedChange; //Change the player's maximum speed

                pCreator.PlatformWidthRange.x += PlatformWidthChange; //change the minimum value of PlatformWidthRange
                pCreator.PlatformWidthRange.y += PlatformWidthChange; //change the maximum value of PlatformWidthRange

                pCreator.PlatformLengthRange.x += PlatformLengthChange; //change the minimum value of PlatformLengthRange
                pCreator.PlatformLengthRange.y += PlatformLengthChange; //change the maximum value of PlatformLengthRange

                pCreator.PlatformHeightRange.x -= PlatformHeightChange; //change the minimum value of PlatformHeightRange
                pCreator.PlatformHeightRange.y += PlatformHeightChange; //change the maximum value of PlatformHeightRange

                pCreator.PlatformGapRange.x += PlatformGapChange; //change the minimum value of PlatformGapRange
                pCreator.PlatformGapRange.y += PlatformGapChange; //change the maximum value of PlatformGapRange

                pCreator.PlatformRotateRange.x -= PlatformRotateChange; //change the minimum value of PlatformRotateRange
                pCreator.PlatformRotateRange.y += PlatformRotateChange; //change the maximum value of PlatformRotateRange

                pCreator.PlatformShiftRange.x -= PlatformShiftChange; //change the minimum value of PlatformShiftRange
                pCreator.PlatformShiftRange.y += PlatformShiftChange; //change the maximum value of PlatformShiftRange

                pCreator.ObstacleRate += ObstacleRateChange; //Change the value of the ObstacleRate
                pCreator.GemRate += GemRateChange; //Change the value of the GemRate
            }
    }

    //This function runs at the end of the game right after you fall off the platform. It's called from inside the player script when he falls
    public void EndLevel()
    {
        showScoreOnScreen = false;
        Debug.Log("End Level - Game Controller");
        PlayerPrefs.SetFloat("TotalDistance", TotalDistance); //Put the value of TotalDistance in a playerPref record which will keep this value even after going to a different level or even quitting the game
                                                              //Debug.Log("GameController:EndLevel TotalDistance:" + TotalDistance.ToString());

        PlayerPrefs.SetInt("TotalGems", TotalGems); //Put the value of TotalGems in a playerPref record which will keep this value even after going to a different level or even quitting the game

        var prefab = GameObject.Instantiate(Resources.Load("ScoreScreen")) as GameObject;
        prefab.transform.SetParent(this.transform, false);
    }

    void UpdatePaused ()
    {
        if (Paused)
        {
            Time.timeScale = 0;
            pauseMenu.SetActive (true);

            if (pControls != null)
            {
                pControls.enabled = false;
            }
        }
        else
        {
            Time.timeScale = 1.0f;
            pauseMenu.SetActive (false);

            if (pControls != null)
            {
                pControls.enabled = true;
            }
        }
    }

    public bool showScoreOnScreen = true;

    private void OnGUI()
    {
        if (showScoreOnScreen)
        {
            scale.x = Screen.width / originalWidth; // calculate hor scale
            scale.y = Screen.height / originalHeight; // calculate vert scale
            scale.z = 1;
            var svMat = GUI.matrix; // save current matrix
                                    // substitute matrix - only scale is altered from standard
            GUI.matrix = Matrix4x4.TRS(Vector3.zero, Quaternion.identity, scale);

            GUI.skin = GUIskin; //The skin gui we'll use

            var fontStyle = new GUIStyle(GUI.skin.label);
            fontStyle.alignment = TextAnchor.UpperLeft;

            GUI.skin = GUIskin; //Smaller font for gems
            GUI.Box(new Rect(0, Screen.height / scale.y - 110, 210, 85), "");

            GUI.Label(new Rect(32, Screen.height / scale.y - 90, Screen.width / scale.x - 52, 0), TotalGems.ToString() + " Gems", fontStyle); //Place the gems count on the bottom left of the screen
            GUI.DrawTexture(new Rect(10, Screen.height / scale.y - 87, 16, 16), Gems); //Place the gem image in front of the gems count on the bottom left of the screen

            GUI.skin = GUIskinLarge; //Large font for Score

            fontStyle = new GUIStyle(GUI.skin.label);
            fontStyle.alignment = TextAnchor.UpperLeft;

            float TotalScore = TotalDistance * 10 + TotalGems * 100;
            GUI.Label(new Rect(10, Screen.height / scale.y - 64, Screen.width / scale.x - 14, 0), TotalScore.ToString("F0") + " Score", fontStyle); //Place the distance count on the bottom left of the screen

            GUI.skin = GUIskin; //Smaller font for gems

            var pauseButtonWidth = 60;
            var pauseButtonHeight = 50;

            if (GUI.Button(new Rect (Screen.width / scale.x - pauseButtonWidth - 30, Screen.height / scale.y - pauseButtonHeight - 30, pauseButtonWidth, pauseButtonHeight), PauseImage))
            {
                Paused = !Paused;
            }

            //Animate the level up text by passing it from the right side of the screen to the left side
            if (LevelUp == false && LevelUpPosX > -originalWidth)
            {
                GUI.Label (new Rect (LevelUpPosX, originalWidth * 0.85f, 200, 50), CurrentLevelUpText, "LevelUp"); //Display the text
                LevelUpPosX -= 200 * Time.deltaTime; //move the text to the left
            }
            else if (LevelUp == true)
            {
                LevelUp = false; //We ended the level up animation
            }

            //Skillz heartbeat
            if (SkillzCrossPlatform.IsMatchInProgress())
            {
                SkillzCrossPlatform.UpdatePlayersCurrentScore(TotalScore);
            }

            GUI.matrix = svMat; // restore matrix
        }
    }
}