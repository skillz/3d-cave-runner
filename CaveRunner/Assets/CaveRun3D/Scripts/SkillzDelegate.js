#pragma strict

// This method is called when a user starts a game from Skillz
function SkillzMatchStarted () {
	PlayerPrefs.SetInt("SkillzGame",1);
	Application.LoadLevel("game");
}

// This method is called when a user exits the Skillz experience (via Menu -> Exit)
function SkillzExited () {
	Application.LoadLevel("start");
}