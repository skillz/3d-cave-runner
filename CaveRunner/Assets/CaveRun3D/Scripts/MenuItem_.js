//This script is used for a button to be displayed through the Menu script. In it you can set one of three types of scripts
//you can load a level, or load a component by instantiating the prefab this button it attached to
import UnityEngine.SceneManagement;
var MenuItemName:String = "A Button"; //The text that appears on the button

var LoadLevel:boolean = false; //Does it load a level?
var LevelName:String = ""; //The name of the level it loads

var LoadComponent:boolean = false; //Does it create a component
private var LoadedComponent:GameObject; //a copy of the created component

var StartSkillz:boolean = false; //start Skillz

function RunMenuItem()
{
  if ( LoadLevel == true && LevelName != "" )
  {
    Debug.Log('Dynamic Level Loading - RunMenuItem ' + LevelName);
    SceneManager.LoadScene(LevelName); //load a level
  }
  else if ( LoadComponent == true )
  {
    if (LoadedComponent != null)
    {
      Destroy(LoadedComponent); //destroy the previous instance of this object, if it has already been created
    }
    else
    {
      var trans : Transform= Instantiate(transform, Vector3.zero, Quaternion.identity); //create an instance of this object
      LoadedComponent = trans.gameObject;
    }
  } else if (StartSkillz) {
      Debug.Log('Launch Skillz');
      SkillzCrossPlatform.LaunchSkillz(SkillzGameController());
      SkillzCrossPlatform.setSkillzBackgroundMusic("beethoven_symphony_6_1.mp3");
  }
}
