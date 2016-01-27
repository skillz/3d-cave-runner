//This script just loads a level, set from the inspector

var LevelName:String = "game"; //The level's name

function Start()
{
	Application.LoadLevel(LevelName); //Load the level
}