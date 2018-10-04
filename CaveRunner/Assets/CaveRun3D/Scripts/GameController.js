import System.Collections.Generic;
import UnityEngine.SceneManagement;

private var originalWidth:float = 600.0;  // define here the original resolution
private var originalHeight:float = 1024.0; // you used to create the GUI contents
private var scale: Vector3;
//This script handles the leveling up in the game and the score and distance records. In each level up the value ranges for platforms are changed ( platform length/height/width/rotate etc )

private var Player:GameObject; //Used to hold the player object, if it's in the scene
private var PlatformCreator:GameObject; //Used to hold the Platform Creator object, if it's in the scene
private var pControls:PlayerControls;
private var pCreator : PlatformCreator;

var GUIskin:GUISkin; //The skin gui we'll use
var GUIskinLarge:GUISkin;
var Gems:Texture2D; //a 2D image that is palced beside the gems score count

var CurrentLevel:int = 1; //The current level we are at
var DistanceToLevelUp:int = 100; //How much more distance do we have to pass to get to the next level. This value is added up to the previous value in each level, meaning that to pass level 1 you need
//to get to 100m, and to pass level 2 you have to get to 300 ( Distance To Level Up multiplied by the Current Level plus the distance passed so far ), to pass level 3 you need to get to 600 ( 100 * 3 + 300 ), and so on

var LevelUpText:String[]; //An array holding several texts that will be randomly displayed when you pass a level
private var CurrentLevelUpText:String; //The current level up text
private var LevelUp:boolean = false; //Are we leveling up? Used to know when to animate the level up text passing across the screen

var LevelUpRumble:int = 200; //How much to shake the screen when you level up

var MaxSpeedChange:float       = 0.1; //How much to change the value of MaxSpeed, which is in the PlayerControls script
var PlatformWidthChange:float  = 0.05; //How much to change the value of PlatformWidthRange, which is in the PlatformCreator script
var PlatformLengthChange:float = 0.05; //How much to change the value of PlatformLengthRange, which is in the PlatformCreator script
var PlatformHeightChange:float = 0.05; //How much to change the value of PlatformHeightRange, which is in the PlatformCreator script
var PlatformGapChange:float    = 0.05; //How much to change the value of PlatformGapRange, which is in the PlatformCreator script
var PlatformRotateChange:float = 0.05; //How much to change the value of PlatformRotateRange, which is in the PlatformCreator script
var PlatformShiftChange:float  = 0.05; //How much to change the value of PlatformShiftRange, which is in the PlatformCreator script
var ObstacleRateChange:float   = 0.05; //How much to change the value of ObstacleRate, which is in the PlatformCreator script
var GemRateChange:float        = 0.05; //How much to change the value of GemRate, which is in the PlatformCreator script

private var LevelUpPosX:float = -Screen.width; //The horizontal position of the level up text, currently placed beyond teh screen to the left

var TotalDistance:float = 0; //The total distance passed by the player
private var LastLevelDistance:float = 0; //The total distance passed at the start of the current level. For example the value of LastLevelDistance when getting to level 2 is 100, and on level 3 is 300
var TotalGems:float = 0; //total gems collected so far

function Start()
{
  Debug.Log('Start Game Controller');
  Player          = GameObject.FindWithTag("Player"); //Find the player in the scene and put it in a variable, for later use
  PlatformCreator = GameObject.FindWithTag("PlatformCreator"); //Find the Platform Creator in the scene and put it in a variable, for later use
  pControls       = Player.GetComponent("PlayerControls") as PlayerControls;
  pCreator        = PlatformCreator.GetComponent("PlatformCreator");
}

function Update ()
{
	if (Input.GetKeyUp("escape")){
 		// Ignore back button
 	}

  //If we haven't already leveled up and we passed the target distance for the next level, LEVEL UP!
  if (Time.timeScale>0)
  if ( LevelUp == false &&  TotalDistance >= DistanceToLevelUp * CurrentLevel + LastLevelDistance )
  {
    LevelUp = true; //we are leveling up right now!

    LastLevelDistance = TotalDistance; //Set the value of LastLevelDistance to the total distance

    CurrentLevel++; //Increase the cuttent level
    LevelUpPosX = Screen.width; //Put the level up text off the screen to the right
    CurrentLevelUpText = LevelUpText[Random.Range(0,LevelUpText.length)]; //Choose a random text from the level up text array to be displayed

    (Camera.main.GetComponent("Shake") as Shake).Shake = LevelUpRumble; //Shake the camera by teh value of LevelUpRumble

    //Here we are changing level values when leveling up, like the platform length/width etc
    pControls.MaxSpeed += MaxSpeedChange; //Change the player's maximum speed

    pCreator.PlatformWidthRange.x += PlatformWidthChange; //change the minimum value of PlatformWidthRange
    pCreator.PlatformWidthRange.y += PlatformWidthChange; //change the maximum value of PlatformWidthRange

    pCreator.PlatformLengthRange.x += PlatformLengthChange; //change the minimum value of PlatformLengthRange
    pCreator.PlatformLengthRange.y += PlatformLengthChange; //change the maximum value of PlatformLengthRange

    pCreator.PlatformHeightRange.x -=  PlatformHeightChange; //change the minimum value of PlatformHeightRange
    pCreator.PlatformHeightRange.y += PlatformHeightChange; //change the maximum value of PlatformHeightRange

    pCreator.PlatformGapRange.x +=  PlatformGapChange; //change the minimum value of PlatformGapRange
    pCreator.PlatformGapRange.y += PlatformGapChange; //change the maximum value of PlatformGapRange

    pCreator.PlatformRotateRange.x -=  PlatformRotateChange; //change the minimum value of PlatformRotateRange
    pCreator.PlatformRotateRange.y += PlatformRotateChange; //change the maximum value of PlatformRotateRange

    pCreator.PlatformShiftRange.x -=  PlatformShiftChange; //change the minimum value of PlatformShiftRange
    pCreator.PlatformShiftRange.y += PlatformShiftChange; //change the maximum value of PlatformShiftRange

    pCreator.ObstacleRate += ObstacleRateChange; //Change the value of the ObstacleRate
    pCreator.GemRate += GemRateChange; //Change the value of the GemRate
  }
}

//This function runs at the end of the game right after you fall off the platform. It's called from inside the player script when he falls
function EndLevel()
{
  Debug.Log('End Level - Game Controller');
  PlayerPrefs.SetFloat("TotalDistance", TotalDistance); //Put the value of TotalDistance in a playerPref record which will keep this value even after going to a different level or even quitting the game
  //Debug.Log("GameController:EndLevel TotalDistance:" + TotalDistance.ToString());

  PlayerPrefs.SetInt("TotalGems", TotalGems); //Put the value of TotalGems in a playerPref record which will keep this value even after going to a different level or even quitting the game

  var prefab = GameObject.Instantiate(Resources.Load("ScoreScreen")) as GameObject;
  prefab.transform.SetParent(this.transform, false);
}

public var showScoreOnScreen : boolean = true;

function OnGUI()
{
  if (showScoreOnScreen) {
	scale.x = Screen.width/originalWidth; // calculate hor scale
    scale.y = Screen.height/originalHeight; // calculate vert scale
    scale.z = 1;
    var svMat = GUI.matrix; // save current matrix
    // substitute matrix - only scale is altered from standard
    GUI.matrix = Matrix4x4.TRS(Vector3.zero, Quaternion.identity, scale);

    GUI.skin = GUIskin; //The skin gui we'll use

    var fontStyle = new GUIStyle( GUI.skin.label );
 	fontStyle.alignment = TextAnchor.UpperRight;

    GUI.skin = GUIskin; //Smaller font for gems

    GUI.Label (Rect(0, 48, Screen.width / scale.x - 52, 0), TotalGems.ToString() + " Gems", fontStyle); //Place the gems count on the top right of the screen
    GUI.DrawTexture (Rect(Screen.width / scale.x - 44, 44, 32, 32), Gems); //Place the gem image beside the gems count on the top right of the screen

    GUI.skin = GUIskinLarge; //Large font for Score

    fontStyle = new GUIStyle( GUI.skin.label );
 	fontStyle.alignment = TextAnchor.UpperRight;

    var TotalScore:float = TotalDistance * 10 + TotalGems * 100;
    GUI.Label (Rect(0, 14, Screen.width / scale.x - 14, 0), TotalScore.ToString("F0") + " Score", fontStyle); //Place the distance count on the top right of the screen

    GUI.skin = GUIskin; //Smaller font for gems
    //Animate the level up text by passing it from the right side of the screen to the left side
    if ( LevelUp == false && LevelUpPosX > -originalWidth )
    {
      GUI.Label(Rect(LevelUpPosX, originalWidth * 0.85,200 ,50), CurrentLevelUpText, "LevelUp"); //Display the text
      LevelUpPosX -= 200 * Time.deltaTime; //move the text to the left
    }
    else if ( LevelUp == true )
    {
      LevelUp = false; //We ended the level up animation
    }

    //Skillz heartbeat
	if (SkillzCrossPlatform.IsMatchInProgress()) {
		SkillzCrossPlatform.UpdatePlayersCurrentScore(TotalScore);
	}

	GUI.matrix = svMat; // restore matrix
  }
}
