using UnityEngine;
using UnityEngine.SceneManagement;

public sealed class MenuItem_ : MonoBehaviour
{
    //This script is used for a button to be displayed through the Menu script. In it you can set one of three types of scripts
    //you can load a level, or load a component by instantiating the prefab this button it attached to
    [Multiline]
    public string MenuItemName = "A Button"; //The text that appears on the button

    public bool LoadLevel = false; //Does it load a level?
    public string LevelName = ""; //The name of the level it loads

    public bool LoadComponent = false; //Does it create a component
    public GameObject LoadedComponent; //a copy of the created component

    public bool StartSkillz = false; //start Skillz

    public void RunMenuItem()
    {
        if (LoadLevel == true && LevelName != "")
        {
            Debug.Log("Dynamic Level Loading - RunMenuItem " + LevelName);
            SceneManager.LoadScene(LevelName); //load a level
        }
        else if (LoadComponent == true)
        {
            if (LoadedComponent != null)
            {
                Destroy(LoadedComponent); //destroy the previous instance of this object, if it has already been created
            }
            else
            {
                Transform trans = Instantiate(transform, Vector3.zero, Quaternion.identity); //create an instance of this object
                LoadedComponent = trans.gameObject;
            }
        }
        else if (StartSkillz)
        {
            Debug.Log("Launch Skillz");
            // TODO: WTH?
            // SkillzCrossPlatform.LaunchSkillz(SkillzGameController());
        }
    }
}