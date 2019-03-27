using UnityEngine;
using UnityEngine.SceneManagement;

public sealed class LoadLevel : MonoBehaviour
{
    //This script just loads a level, set from the inspector
    string LevelName = "game"; //The level's name

    private void Start()
    {
        Debug.Log("Dynamic Level Loading - " + LevelName);
        SceneManager.LoadScene(LevelName); //Load the level
    }
}