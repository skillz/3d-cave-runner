using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;
using System.Collections.Generic;

public sealed class TutorialController : MonoBehaviour
{
    //Scaling vars...
    private const float originalWidth = 600.0f;  // define here the original resolution
    private const float originalHeight = 1024.0f; // you used to create the GUI contents
    private Vector3 scale;
    private const int ButtonHeight = 85;
    private const int ButtonWidth = 180;

    //GUI.BOX Rect size: 600*600
    private const int boxWidth = 600;
    private const int boxHeight = 600;

    private const int smallBoxHeight = 200;
    private const int smallBoxWidth = 600;

    private Rect bigTextRect = new Rect((originalWidth - boxWidth * 0.85f) / 2, (originalHeight - boxHeight * 0.85f) / 2, boxWidth * 0.85f, boxHeight * 0.85f);
    private static readonly Rect lowerTextRect = new Rect((originalWidth - smallBoxWidth * 0.85f) / 2, originalHeight - smallBoxHeight * 0.85f - 10, smallBoxWidth * 0.85f, smallBoxHeight * 0.85f);
    private Rect leftButtonRect = new Rect((originalWidth - 2 * ButtonWidth) / 4, (originalHeight - ButtonHeight) / 2 + boxHeight * 0.5f, ButtonWidth, ButtonHeight);
    private Rect rightButtonRect = new Rect((originalWidth - 2 * ButtonWidth) * 3 / 4 + ButtonWidth, (originalHeight - ButtonHeight) / 2 + boxHeight * 0.5f, ButtonWidth, ButtonHeight);
    private Rect goButtonRect = new Rect((originalWidth - ButtonWidth) * 0.5f, (originalHeight - smallBoxHeight - 15), ButtonWidth, ButtonHeight);
    private Rect okButtonRect = new Rect((originalWidth - ButtonWidth) * 0.5f, (originalHeight - ButtonHeight) / 2 + boxHeight * 0.5f, ButtonWidth, ButtonHeight);
    private Rect gemScoreRect = new Rect((originalWidth - 300) * 0.5f, 0, 300, 80); //only text
    private Rect obstacleDescRect = new Rect(lowerTextRect.x, lowerTextRect.y + 35, lowerTextRect.width, lowerTextRect.height);

    //PARAMETERS FOR TUTORIAL
    public GUISkin GUIskin; //The skin gui we'll use
    public GUISkin GUISkin2;

    public float deltaPosX = 1.5f;           //x meters from center. (Movement Tutorial)
    public int obstaclesCount = 5;               //total obstacles in the game (Obstacles Tutorial)
    public int gemsNeeded = 20;              //number of gems required to end the tutorial (Scoring Tutorial)
    public float playerTutorialSpeed = 0.25f; //Character's initial speed

    public string initialTutorialText = "First time in the nunderground caves, huh? nWe suggest you take nthe guided tour to avoid... n you know... undesired deaths... n would you like to n take the guided tour?";
    public string jumpTutorialText = "JUMP INSTRUCTIONS nPress to jump, keep pressed to reach maximum height n press the screen twice to jump in the air";
    public string moveTutorialText = "MOVEMENT INSTRUCTIONS nTilt your device left or right to move the player";
    public string obstacleTutorialText = "OBSTACLES nWatch out for obstacles!n";
    public string scoringTutorialText = "SCORING nTry to retrieve as many gems as you can!n";
    public string exitTutorialText = "Uh... We're pretty sure you know what your doing n and...well, we're actually not sure n of what you are going to do but good luck anyway! ";
    public string finishedTutorialText = "Ok, it seems that you are ready to find the n treasures of the cave, and face the dangers n that await you there. n n Good Luck!";
    public string[] obstacleInfo; //Lava(0) //Rock(1) //Snow(2) //Bush //RockTall //KillerPlant // Mud //Bats



    //Current step the tutorial is in...
    private int tutorialState = -1;
    private bool activateElements = false;

    //Main References to other Control Objects of importance
    private PlayerControls player;
    private PlatformCreator platformCreator;
    private GameController gameController;
    private GameObject collector;
    private GameObject[] tunnel;

    //Containers for switching values
    private float originalGemRate;
    private float originalObstacleRate;
    private float originalGemRateChange;
    private float originalObstacleRateChange;
    private float originalPlayerSpeed;

    private Transform obstaclePlatform;
    private int obstacleIndex = -1;
    private List<GameObject> platformObstacleList;
    private int deferredIndex = -1;

    private bool firstMoveScreenStep = true;
    private bool firstObstacleScreenStep = true;
    private bool firstScoreScreenStep = true;
    private bool lastFinishScreenStep = false;
    private GameObject[] inactivePlatforms;

    //tutorialState
    // 1: Ask user if he wants to go through the tutorial
    // 2: Jump and DoubleJump screen
    // 3: Movement screen
    // 4: Obstacles Screen
    // 5: Scoring Screen
    // 6: exit tutorial, go to game...
    // 7: User says NO in (1) therefore...end of tutorial popup2
    // 8: Tutorial Finished
    // 9: player dead...

    private void Start()
    {
        player = GameObject.FindWithTag("Player").GetComponent<PlayerControls>();
        platformCreator = GameObject.FindWithTag("PlatformCreator").GetComponent<PlatformCreator>();
        gameController = GameObject.FindWithTag("GameController").GetComponent<GameController>();
        collector = GameObject.FindWithTag("Collector");
        tunnel = GameObject.FindGameObjectsWithTag("Tunnel");

        //Completely disable the Tutorial
        tutorialState = -1;
        activateElements = true;
        Time.timeScale = 1;
    }

    private void Update()
    {
        //PlayerPrefs.DeleteAll();
        activateGamePlayElements(activateElements);
        if (player.isDead)
        {
            tutorialState = 9;
            //Debug.Log("player dead..tutorial...");
        }
    }

    private void OnGUI()
    {
        scale.x = Screen.width / originalWidth; // calculate hor scale
        scale.y = Screen.height / originalHeight; // calculate vert scale
        scale.z = 1;
        var svMat = GUI.matrix; // save current matrix
                                // substitute matrix - only scale is altered from standard
        GUI.matrix = Matrix4x4.TRS(Vector3.zero, Quaternion.identity, scale);

        GUI.skin = GUIskin; //The skin gui we'll use

        if (!player.isDead)
            switch (tutorialState)
            {
                case 1: ShowInitialTutorialScreen(); break;
                case 2: ShowJumpScreen(); break;
                case 3: ShowMoveScreen(); break;
                case 4: ShowObstaclesScreen(); break;
                case 5: ShowScoringScreen(); break;
                case 6: Debug.Log("Loading Game - Tutorial"); SceneManager.LoadScene("game"); break;
                //restart the level
                case 7: ShowLeaveTutorialScreen(); break;
                case 8: ShowFinishScreen(); break;
                case 9: /*Player is dead, show nothing...*/ break;
            }

        // restore matrix before returning
        GUI.matrix = svMat; // restore matrix

    }
    private void ShowInitialTutorialScreen()
    {
        //Create a box with the instructions text in it
        GUI.Box(bigTextRect, initialTutorialText);

        if (GUI.Button(leftButtonRect, "YES"))
        {
            //continue with tutorial
            tutorialState = 2;
            activateElements = true;
        }
        if (GUI.Button(rightButtonRect, "NO"))
        {
            //NO: Decides to skip the tutorial
            tutorialState = 7;
        }
    }
    private void ShowJumpScreen()
    {
        //Create a box with the instructions text in it
        GUI.skin = GUISkin2; //The skin gui we'll use
        GUI.Box(lowerTextRect, jumpTutorialText);

        if (player.JumpState > 0) //player has jumped
        {
            StartCoroutine(Wait(2, 3));
        }
    }

    private void ShowMoveScreen()
    {
        //Create a box with the instructions text in it
        GUI.skin = GUISkin2; //The skin gui we'll use
        GUI.Box(lowerTextRect, moveTutorialText);

        //Pause
        if (firstMoveScreenStep)
        {
            activateElements = false;
            if (GUI.Button(goButtonRect, "GO"))
            {
                firstMoveScreenStep = false;
                activateElements = true;
            }
        }

        var playerPosition = player.getPlayerPos();

        if ((playerPosition.x > deltaPosX) || (playerPosition.x < -deltaPosX)) //player has moved left or right
        {
            StartCoroutine(Wait(3, 4));
            obstacleIndex = 0;//deferredIndex = 0;
            platformObstacleList = new List<GameObject>();
        }
    }

    private void ShowObstaclesScreen()
    {
        //Create a box with the instructions text in it
        Rect rect = lowerTextRect;
        GUI.skin = GUISkin2; //The skin gui we'll use
        GUI.Box(rect, obstacleTutorialText);

        //Pause
        if (firstObstacleScreenStep)
        {
            activateElements = false;
            if (GUI.Button(goButtonRect, "GO"))
            {
                firstObstacleScreenStep = false;
                activateElements = true;
            }
        }
        else
        {
            GameObject lastPlatform = player.getLastTouchedPlatform();
            if (lastPlatform)
            {
                var lastIndex = (lastPlatform.GetComponent<Platform>()).getObstacleIndex();
                if (platformObstacleList.Count > 0)
                {
                    GameObject nextPlatform = platformObstacleList[platformObstacleList.Count - 1];
                    platformObstacleList.RemoveAt(platformObstacleList.Count - 1);
                    int nextIndex = (nextPlatform.GetComponent<Platform>()).getObstacleIndex();

                    StartCoroutine(SetDeferred(2, nextIndex));
                }
            }
            ShowObstacleInfo(deferredIndex);

            if (obstacleIndex <= obstaclesCount - 1)
            {
                GameObject[] platforms = GameObject.FindGameObjectsWithTag("Platform");
                if (platforms.Length >= 2)
                    if (obstaclePlatform != platforms[platforms.Length - 2].transform)
                    {
                        platformCreator.AddObstacle(platforms[platforms.Length - 2], obstacleIndex);
                        obstaclePlatform = platforms[platforms.Length - 2].transform;

                        platformObstacleList.Add(platforms[platforms.Length - 2]);

                        switch (obstacleIndex)
                        {
                            case 0: obstacleIndex += 2; break; //lava
                            case 2: obstacleIndex++; break;  //ice
                            case 3: obstacleIndex += 3; break; //bush
                            case 6: obstacleIndex++; break;  //mud
                            case 7: obstacleIndex++; break;  //bats
                        }

                    }
                if (obstacleIndex >= obstaclesCount)
                {
                    StartCoroutine(Wait(6, 5));
                    //reset original values for creating gems
                    platformCreator.ObstacleRate = 0;
                    platformCreator.GemRate = originalGemRate;
                    gameController.GemRateChange = originalGemRateChange;
                }
            }
        }
    }

    private void ShowScoringScreen()
    {
        if (firstScoreScreenStep)
        {
            //Create a box with the instructions text in it
            GUI.skin = GUISkin2; //The skin gui we'll use
            GUI.Box(lowerTextRect, scoringTutorialText);

            activateElements = false;
            if (GUI.Button(goButtonRect, "GO"))
            {
                firstScoreScreenStep = false;
                activateElements = true;
            }
        }
        else
        {
            int gemsSoFar = gameController.TotalGems;
            int val = gemsNeeded - gemsSoFar;
            if (val <= 0) val = 0;
            string scoringTutorialGemText = "nCollectn" + val.ToString() + " gems!n";

            GUI.skin = GUISkin2; //The skin gui we'll use
            GUI.Box(lowerTextRect, scoringTutorialGemText);
            if (gemsSoFar >= gemsNeeded)
                StartCoroutine(Wait(2, 8));
        }
    }

    private void ShowFinishScreen()
    {
        if (lastFinishScreenStep == false)
        {
            //Create a box with the instructions text in it
            GUI.Box(bigTextRect, finishedTutorialText);

            activateElements = false;
            if (GUI.Button(okButtonRect, "Ok"))
            {
                lastFinishScreenStep = true;
                PlayerPrefs.SetInt("FinishedTutorial", 1);
                tutorialState = 6;
            }
        }
        else
        {
            PlayerPrefs.SetInt("FinishedTutorial", 1);
            tutorialState = 6;
        }
    }

    private void ShowLeaveTutorialScreen()
    {
        //Create a box with the instructions text in it
        GUI.Box(bigTextRect, exitTutorialText);

        if (GUI.Button(okButtonRect, "Ok"))
        {
            PlayerPrefs.SetInt("FinishedTutorial", 1);
            tutorialState = 6;
        }
    }


    private void ShowObstacleInfo(int obstacleIndex)
    {
        //Debug.Log("Obstacle index: " + obstacleIndex);
        if (obstacleIndex >= 0)
        {
            int arrayIndex = 0;
            switch (obstacleIndex)
            {
                case 0: arrayIndex = 0; break; //lava
                case 2: arrayIndex = 1; break;  //ice
                case 3: arrayIndex = 2; break; //bush
                case 6: arrayIndex = 3; break;  //mud
                case 7: arrayIndex = 4; break;  //bats
            }
            string obstacleText = obstacleInfo[arrayIndex];

            GUI.Label(obstacleDescRect, obstacleText);
        }
    }

    //TIME HELPERS
    private IEnumerator Wait(int time, int nextState)
    {
        if (!player.isDead)
        {
            yield return new WaitForSeconds(time);
            tutorialState = nextState;
        }
    }

    private IEnumerator SetDeferred(int time, int index)
    {
        yield return new WaitForSeconds(time);
        deferredIndex = index;
    }

    //Gameplay enable/disable
    private void activateGamePlayElements(bool activate)
    {
        /*if (player)
       player.gameObject.SetActive(activate);
       if (platformCreator)
       platformCreator.gameObject.SetActive(activate);
       if (gameController)
       gameController.gameObject.SetActive(activate);
       if (collector)
       collector.SetActive(activate);
       if (tunnel && tunnel.Length==3)
       {
       tunnel[0].SetActive(activate);
       tunnel[1].SetActive(activate);
       tunnel[2].SetActive(activate);
     }

     GameObject[] platforms = GameObject.FindGameObjectsWithTag("Platform");
     for (int x = 0; x < platforms.length; x++)
     {
     platforms[x].SetActive(activate);
     }
     if (inactivePlatforms!= null && inactivePlatforms.Length >0 )
     {
     for (int m = 0; m < inactivePlatforms.length; m++)
     {
     if (inactivePlatforms[m] != null)
     inactivePlatforms[m].SetActive(activate);
     }
     }
     if (platforms.Length > 0)
     inactivePlatforms = platforms;*/

        if (activate)
            Time.timeScale = 1;
        else
            Time.timeScale = 0;

    }

    //Gameplay rates
    private void setGemAndObstacleRates()
    {
        originalGemRate = platformCreator.GemRate;
        originalObstacleRate = platformCreator.ObstacleRate;

        platformCreator.GemRate = 0;
        platformCreator.ObstacleRate = 0;

        originalGemRateChange = gameController.GemRateChange;
        originalObstacleRateChange = gameController.ObstacleRateChange;

        gameController.GemRateChange = 0;
        gameController.ObstacleRateChange = 0;

        originalPlayerSpeed = player.Speed;
        player.Speed = playerTutorialSpeed;
    }

}