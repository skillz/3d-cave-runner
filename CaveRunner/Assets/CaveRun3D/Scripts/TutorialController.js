#pragma strict
import UnityEngine.SceneManagement;
//Scaling vars...
private var originalWidth:float = 600.0;  // define here the original resolution
private var originalHeight:float = 1024.0; // you used to create the GUI contents
private var scale: Vector3;
private var ButtonHeight:int = 85;
private var ButtonWidth: int = 180;

//GUI.BOX Rect size: 600*600
private var boxWidth = 600;
private var boxHeight = 600;

private var smallBoxHeight = 200;
private var smallBoxWidth = 600;

private var bigTextRect     = Rect((originalWidth - boxWidth*0.85)/2 ,(originalHeight-boxHeight*0.85)/2 ,boxWidth*0.85,boxHeight*0.85);
private var lowerTextRect   = Rect((originalWidth- smallBoxWidth*0.85)/2 ,originalHeight-smallBoxHeight*0.85-10 ,smallBoxWidth*0.85,smallBoxHeight*0.85);
private var leftButtonRect  = Rect((originalWidth-2*ButtonWidth)/4 , (originalHeight-ButtonHeight)/2 + boxHeight*0.5, ButtonWidth,ButtonHeight);
private var rightButtonRect = Rect((originalWidth-2*ButtonWidth)*3/4+ButtonWidth, (originalHeight-ButtonHeight)/2 + boxHeight*0.5, ButtonWidth, ButtonHeight);
private var goButtonRect    = Rect((originalWidth-ButtonWidth) * 0.5  ,(originalHeight-smallBoxHeight-15) , ButtonWidth,ButtonHeight);
private var okButtonRect    = Rect((originalWidth-ButtonWidth) * 0.5  ,(originalHeight-ButtonHeight)/2 + boxHeight*0.5 , ButtonWidth, ButtonHeight);
private var gemScoreRect    = Rect((originalWidth-300) * 0.5 ,0,300,80); //only text
private var obstacleDescRect:Rect = Rect(lowerTextRect.x,lowerTextRect.y+35,lowerTextRect.width,lowerTextRect.height);

//PARAMETERS FOR TUTORIAL
public var GUIskin:GUISkin; //The skin gui we'll use
public var GUISkin2:GUISkin;

public var deltaPosX: float = 1.5;           //x meters from center. (Movement Tutorial)
public var obstaclesCount = 5;               //total obstacles in the game (Obstacles Tutorial)
public var gemsNeeded:int = 20;              //number of gems required to end the tutorial (Scoring Tutorial)
public var playerTutorialSpeed:float = 0.25; //Character's initial speed

public var initialTutorialText:String  = "First time in the \nunderground caves, huh? \nWe suggest you take \nthe guided tour to avoid... \n you know... undesired deaths... \n would you like to \n take the guided tour?";
public var jumpTutorialText:String     = "JUMP INSTRUCTIONS \nPress to jump, keep pressed to reach maximum height \n press the screen twice to jump in the air";
public var moveTutorialText:String     = "MOVEMENT INSTRUCTIONS \nTilt your device left or right to move the player";
public var obstacleTutorialText:String = "OBSTACLES \nWatch out for obstacles!\n";
public var scoringTutorialText:String  = "SCORING \nTry to retrieve as many gems as you can!\n";
public var exitTutorialText:String     = "Uh... We're pretty sure you know what your doing \n and...well, we're actually not sure \n of what you are going to do but good luck anyway! ";
public var finishedTutorialText:String = "Ok, it seems that you are ready to find the \n treasures of the cave, and face the dangers \n that await you there. \n \n Good Luck!";
public var obstacleInfo:String[]; //Lava(0) //Rock(1) //Snow(2) //Bush //RockTall //KillerPlant // Mud //Bats



//Current step the tutorial is in...
private var tutorialState:int = -1;
private var activateElements:boolean = false;

//Main References to other Control Objects of importance
private var player: PlayerControls;
private var platformCreator: PlatformCreator;
private var gameController: GameController;
private var collector: GameObject;
private var tunnel: GameObject[];

//Containers for switching values
private var originalGemRate: float;
private var originalObstacleRate:float;
private var originalGemRateChange:float;
private var originalObstacleRateChange:float;
private var originalPlayerSpeed:float;

private var obstaclePlatform:Transform;
private var obstacleIndex:int = -1;
private var platformObstacleList:Array;
private var deferredIndex:int = -1;

private var firstMoveScreenStep:boolean = true;
private var firstObstacleScreenStep:boolean = true;
private var firstScoreScreenStep:boolean = true;
private var lastFinishScreenStep:boolean = false;
private var inactivePlatforms:GameObject[];

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

function Start () {
  player 			   = GameObject.FindWithTag("Player").GetComponent("PlayerControls") as PlayerControls;
  platformCreator    = GameObject.FindWithTag("PlatformCreator").GetComponent("PlatformCreator") as PlatformCreator;
  gameController 	   = GameObject.FindWithTag("GameController").GetComponent("GameController") as GameController;
  collector          = GameObject.FindWithTag("Collector");
  tunnel             = GameObject.FindGameObjectsWithTag("Tunnel");

  //Check to see if this is the first run of the game...
  var finishedTutorial = PlayerPrefs.GetInt("FinishedTutorial");
  if (finishedTutorial != 1 && PlayerPrefs.GetInt("SkillzGame") != 1)
  {
    //show welcome popup, ask if he wants to go through the tutorial...
    tutorialState = 1;
    setGemAndObstacleRates();//set specific instantiation rates so that gems or obstacles dont get in the way of certain tutorial step.
    activateElements = false;
  }
  else
  {
    tutorialState = -1;
    activateElements = true;
    Time.timeScale = 1;
  }
}

function Update () {
  //PlayerPrefs.DeleteAll();
  activateGamePlayElements(activateElements);
  if (player.isDead)
  {
    tutorialState = 9;
    //Debug.Log("player dead..tutorial...");
  }
}

function OnGUI()
{
  scale.x = Screen.width/originalWidth; // calculate hor scale
  scale.y = Screen.height/originalHeight; // calculate vert scale
  scale.z = 1;
  var svMat = GUI.matrix; // save current matrix
  // substitute matrix - only scale is altered from standard
  GUI.matrix = Matrix4x4.TRS(Vector3.zero, Quaternion.identity, scale);

  GUI.skin = GUIskin; //The skin gui we'll use

  if (!player.isDead)
  switch (tutorialState)
  {
    case 1: ShowInitialTutorialScreen();   break;
    case 2: ShowJumpScreen();              break;
    case 3: ShowMoveScreen();              break;
    case 4: ShowObstaclesScreen();         break;
    case 5: ShowScoringScreen();           break;
    case 6: Debug.Log("Loading Game - Tutorial"); SceneManager.LoadScene("game"); break;
     //restart the level
    case 7: ShowLeaveTutorialScreen();     break;
    case 8: ShowFinishScreen();            break;
    case 9: /*Player is dead, show nothing...*/ break;
  }

  // restore matrix before returning
  GUI.matrix = svMat; // restore matrix

}

private function ShowInitialTutorialScreen()
{
  //Create a box with the instructions text in it
  GUI.Box(bigTextRect, initialTutorialText);

  if ( GUI.Button ( leftButtonRect, "YES" ) )
  {
    //continue with tutorial
    tutorialState = 2;
    activateElements = true;
  }
  if ( GUI.Button ( rightButtonRect, "NO" ) )
  {
    //NO: Decides to skip the tutorial
    tutorialState = 7;
  }
}

private function ShowJumpScreen()
{
  //Create a box with the instructions text in it
  GUI.skin = GUISkin2; //The skin gui we'll use
  GUI.Box(lowerTextRect, jumpTutorialText);

  if (player.JumpState >0 ) //player has jumped
  {
    StartCoroutine(Wait(2,3));
  }
}

private function ShowMoveScreen()
{
  //Create a box with the instructions text in it
  GUI.skin = GUISkin2; //The skin gui we'll use
  GUI.Box(lowerTextRect, moveTutorialText);

  //Pause
  if (firstMoveScreenStep)
  {
    activateElements = false;
    if ( GUI.Button (goButtonRect, "GO" ) )
    {
      firstMoveScreenStep = false;
      activateElements = true;
    }
  }

  var playerPosition = player.getPlayerPos();

  if ((playerPosition.x > deltaPosX) || (playerPosition.x < -deltaPosX)) //player has moved left or right
  {
    StartCoroutine(Wait(3,4));
    obstacleIndex = 0;//deferredIndex = 0;
    platformObstacleList = new Array();
  }
}

private function ShowObstaclesScreen()
{
  //Create a box with the instructions text in it
  var rect:Rect = lowerTextRect;
  GUI.skin = GUISkin2; //The skin gui we'll use
  GUI.Box(rect, obstacleTutorialText);

  //Pause
  if (firstObstacleScreenStep)
  {
    activateElements = false;
    if ( GUI.Button (goButtonRect, "GO" ) )
    {
      firstObstacleScreenStep = false;
      activateElements = true;
    }
  }
  else
  {
    var lastPlatform:GameObject = player.getLastTouchedPlatform();
    if (lastPlatform)
    {
      var lastIndex = (lastPlatform.GetComponent("Platform") as Platform).getObstacleIndex();
      if (platformObstacleList.length > 0)
      {
        var nextPlatform:GameObject = platformObstacleList.pop();
        var nextIndex:int = (nextPlatform.GetComponent("Platform") as Platform).getObstacleIndex();

        StartCoroutine(SetDeferred(2,nextIndex));
      }
    }
    ShowObstacleInfo(deferredIndex);

    if (obstacleIndex <= obstaclesCount-1)
    {
      var platforms: GameObject[] = GameObject.FindGameObjectsWithTag("Platform");
      if (platforms.Length >= 2)
      if (obstaclePlatform != platforms[platforms.Length-2].transform)
      {
        platformCreator.AddObstacle(platforms[platforms.Length-2],obstacleIndex);
        obstaclePlatform = platforms[platforms.Length-2].transform;

        platformObstacleList.Add(platforms[platforms.Length-2]);

        switch (obstacleIndex)
        {
          case 0: obstacleIndex+=2; break; //lava
          case 2: obstacleIndex++; break;  //ice
          case 3: obstacleIndex+=3; break; //bush
          case 6: obstacleIndex++; break;  //mud
          case 7: obstacleIndex++; break;  //bats
        }

      }
      if (obstacleIndex >= obstaclesCount)
      {
        StartCoroutine(Wait(6,5));
        //reset original values for creating gems
        platformCreator.ObstacleRate = 0;
        platformCreator.GemRate= originalGemRate;
        gameController.GemRateChange = originalGemRateChange;
      }
    }
  }
}

private function ShowScoringScreen()
{
  if (firstScoreScreenStep)
  {
    //Create a box with the instructions text in it
    GUI.skin = GUISkin2; //The skin gui we'll use
    GUI.Box(lowerTextRect, scoringTutorialText);

    activateElements = false;
    if ( GUI.Button (goButtonRect, "GO" ) )
    {
      firstScoreScreenStep = false;
      activateElements = true;
    }
  }
  else
  {
    var gemsSoFar:int = gameController.TotalGems;
    var val:int = gemsNeeded - gemsSoFar;
    if (val <= 0) val = 0;
    var scoringTutorialGemText:String = "\nCollect\n" + val.ToString() + " gems!\n";

    GUI.skin = GUISkin2; //The skin gui we'll use
    GUI.Box(lowerTextRect,scoringTutorialGemText);
    if (gemsSoFar >= gemsNeeded)
    StartCoroutine(Wait(2,8));
  }
}

private function ShowFinishScreen()
{
  if (lastFinishScreenStep==false)
  {
    //Create a box with the instructions text in it
    GUI.Box(bigTextRect, finishedTutorialText);

    activateElements = false;
    if ( GUI.Button ( okButtonRect, "Ok" ) )
    {
      lastFinishScreenStep = true;
      PlayerPrefs.SetInt("FinishedTutorial",1);
      tutorialState = 6;
    }
  }
  else
  {
    PlayerPrefs.SetInt("FinishedTutorial",1);
    tutorialState = 6;
  }
}

private function ShowLeaveTutorialScreen()
{
  //Create a box with the instructions text in it
  GUI.Box(bigTextRect, exitTutorialText);

  if ( GUI.Button ( okButtonRect , "Ok" ) )
  {
    PlayerPrefs.SetInt("FinishedTutorial",1);
    tutorialState = 6;
  }
}


private function ShowObstacleInfo(obstacleIndex:int)
{
  //Debug.Log("Obstacle index: " + obstacleIndex);
  if (obstacleIndex >=0)
  {
    var arrayIndex:int = 0;
    switch (obstacleIndex)
    {
      case 0: arrayIndex=0; break; //lava
      case 2: arrayIndex=1; break;  //ice
      case 3: arrayIndex=2; break; //bush
      case 6: arrayIndex=3; break;  //mud
      case 7: arrayIndex=4; break;  //bats
    }
    var obstacleText:String = obstacleInfo[arrayIndex];

    GUI.Label(obstacleDescRect,obstacleText);
  }
}

//TIME HELPERS
private function Wait(time:int, nextState:int)
{
  if (!player.isDead)
  {
    yield WaitForSeconds(time);
    tutorialState=nextState;
  }

}

private function SetDeferred(time:int,index:int)
{
  yield WaitForSeconds(time);
  deferredIndex = index;
}

//Gameplay enable/disable
private function activateGamePlayElements(activate:boolean)
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

var platforms: GameObject[] = GameObject.FindGameObjectsWithTag("Platform");
for (var x:int = 0; x < platforms.length; x++)
{
platforms[x].SetActive(activate);
}
if (inactivePlatforms!= null && inactivePlatforms.Length >0 )
{
for (var m:int = 0; m < inactivePlatforms.length; m++)
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
private function setGemAndObstacleRates()
{
  originalGemRate = platformCreator.GemRate;
  originalObstacleRate = platformCreator.ObstacleRate;

  platformCreator.GemRate= 0;
  platformCreator.ObstacleRate = 0;

  originalGemRateChange = gameController.GemRateChange;
  originalObstacleRateChange = gameController.ObstacleRateChange;

  gameController.GemRateChange = 0;
  gameController.ObstacleRateChange=0;

  originalPlayerSpeed = player.Speed;
  player.Speed = playerTutorialSpeed;
}
