#pragma strict
import UnityEngine.SceneManagement;

public var SceneIndex:int = -1;

function Start () {

}

function FixedUpdate ()
{
  if (Application.platform == RuntimePlatform.Android)
  {
    if (Input.GetKeyUp(KeyCode.Escape))
    {
      if (SceneIndex == 2) //Game
      {
        //return to MainMenu
        Debug.Log('Loading Start from Game - Android Back');
        SceneManager.LoadScene("start");
        return;
      }

      if (SceneIndex == 3) //GameOver
      {
        //return to MainMenu
        Debug.Log('Loading Start from GameOver - Android Back');
        SceneManager.LoadScene("start");
        return;
      }
      if (SceneIndex == 1) //Main Menu
      {
        Application.Quit();
        return;
      }
    }
  }
}
