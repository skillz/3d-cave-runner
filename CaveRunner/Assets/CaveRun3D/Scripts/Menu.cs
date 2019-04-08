using UnityEngine;

public sealed class Menu : MonoBehaviour
{
    //This script displays a horizontal menu, with buttons that can be set by the user. Each button is actually
    //a prefab with a MenuItem script in it. take a look at the MENU folder to see those prefabs
    private static readonly float OriginalWidth = 600.0f;  // define here the original resolution
    private static readonly float OriginalHeight = 1024.0f; // you used to create the GUI contents
    private Vector3 scale;

    public GUISkin GUIskin; //The skin gui we'll use

    private static readonly int ButtonHeight = 90;
    private static readonly int ButtonWidth = 420;
    private int ButtonHeightOffset = 0; //Used to offset the button(s) in the beginning so that they later move into the scene

    private static readonly int ButtonMargin = (int)((OriginalWidth - 2 * ButtonWidth) / 4);

    public float MenuDelay = 2; //How much to wait before moving the menu into the scene
    private float MenuDelayCount = 0; //The counter for MenuDelay

    public Transform[] MenuItems; //All the buttons, these are prefabs with MenuItem script in them. Take a look inside MENU folder to see them
    private int MenuIndex = 0; //The current index of the menu items array

    private void Start()
    {
        ButtonHeightOffset = -ButtonMargin; //Move the buttons a little up, by the value of the margin
    }

    private void OnGUI()
    {
        scale.x = Screen.width / OriginalWidth; // calculate hor scale
        scale.y = Screen.height / OriginalHeight; // calculate vert scale
        scale.z = 1;

        var svMat = GUI.matrix; // save current matrix
                                // substitute matrix - only scale is altered from standard
        GUI.matrix = Matrix4x4.TRS(Vector3.zero, Quaternion.identity, scale);


        //Animate the entry of the menu items, first by waiting a few seconds and then moving them in to the scene
        if (MenuDelayCount < MenuDelay)
        {
            MenuDelayCount += Time.deltaTime; //Count up to the value of MenuDelay
        }
        else if (ButtonHeightOffset < ButtonHeight)
        {
            ButtonHeightOffset -= (int)((ButtonHeightOffset - ButtonHeight) * 0.1f); //Gradually change the value of ButtonHeightOffset to ButtonHeight
        }

        GUI.skin = GUIskin; //The skin gui we'll use

        MenuItem_ kMenuItem;

        Rect buttonRect;
        //draw a button for each item
        kMenuItem = MenuItems[0].GetComponent<MenuItem_>();

        buttonRect = new Rect((OriginalWidth / 2) - (ButtonWidth / 2), OriginalHeight - ButtonHeight - 25, ButtonWidth, ButtonHeight);
        //Debug.Log("button Rect: " + buttonRect.ToString());
        if (GUI.Button(buttonRect, kMenuItem.MenuItemName))
        {
            kMenuItem.RunMenuItem(); //Run the menu item function which is inside a MenuItem script component attached to a prefab
        }

        // restore matrix before returning
        GUI.matrix = svMat; // restore matrix
    }
}