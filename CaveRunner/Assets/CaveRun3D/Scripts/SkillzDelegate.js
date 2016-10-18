#pragma strict
import UnityEngine.SceneManagement;
// This method is called when a user starts a game from Skillz
function SkillzMatchStarted () {
  PlayerPrefs.SetInt("SkillzGame",1);
  Debug.Log('Loading Game - Skillz Match Started');
  SceneManager.LoadScene("game");
}

// This method is called when a user exits the Skillz experience (via Menu -> Exit)
function SkillzExited () {
  Debug.Log('Loading Start - For Skillz Exit');
  SceneManager.LoadScene("start");
}

function Start () {
  Debug.Log('Skillz Delegate - Started');
}

function OnDestroy () {
  Debug.Log('Skillz Delegate - Destroyed');
}

function OnDisable () {
  Debug.Log('Skillz Delegate - Disabled');
}
