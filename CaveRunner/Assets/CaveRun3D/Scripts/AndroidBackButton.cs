using UnityEngine;
using UnityEngine.SceneManagement;

public sealed class AndroidBackButton : MonoBehaviour
{
    public int SceneIndex = -1;

    private void FixedUpdate()
    {
        if (Application.platform == RuntimePlatform.Android)
        {
            if (Input.GetKeyUp(KeyCode.Escape))
            {
                if (SceneIndex == 2) //Game
                {
                    // Disable returning from Game to Main Menu
                    //Debug.Log('Loading Start from Game - Android Back');
                    //SceneManager.LoadScene("start");
                    return;
                }

                if (SceneIndex == 3) //GameOver
                {
                    //return to MainMenu
                    Debug.Log("Loading Start from GameOver - Android Back");
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
}