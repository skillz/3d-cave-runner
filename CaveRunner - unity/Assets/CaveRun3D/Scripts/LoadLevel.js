//This script just loads a level, set from the inspector
import UnityEngine.SceneManagement;
var LevelName:String = "game"; //The level's name

function Start()
{
  Debug.Log('Dynamic Level Loading - ' + LevelName);
  SceneManager.LoadScene(LevelName); //Load the level
}
