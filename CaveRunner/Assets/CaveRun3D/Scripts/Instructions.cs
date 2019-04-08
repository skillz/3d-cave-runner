using UnityEngine;

public sealed class Instructions : MonoBehaviour
{
    //This script just displays a box with some instructions in it, set from the inspector
    public GUISkin GUIskin; //The skin gui we'll use

    private float originalWidth = 600.0f;  // define here the original resolution
    private float originalHeight = 1024.0f; // you used to create the GUI contents
    private Vector3 scale;

    private void OnGUI()
    {
        scale.x = Screen.width / originalWidth; // calculate hor scale
        scale.y = Screen.height / originalHeight; // calculate vert scale
        scale.z = 1;

        var svMat = GUI.matrix; // save current matrix
                                // substitute matrix - only scale is altered from standard
        GUI.matrix = Matrix4x4.TRS(Vector3.zero, Quaternion.identity, scale);
        // draw your GUI controls here:
        string InstructionsText = "Move by tilting n Tap the screennto jump n Hold longernto jump higher n Tap Twice to nDouble Jump n Collect Gems, navoid obstacles n and don't fall!";

        GUI.skin = GUIskin; //The skin gui we'll use

        //Create a box with the instructions text in it
        GUI.Box(new Rect((originalWidth - 600 * 0.85f) / 2, (originalHeight - 600 * 0.85f) / 2, 600 * 0.85f, 600 * 0.85f), InstructionsText);

        GUI.matrix = svMat; // restore matrix
    }
}