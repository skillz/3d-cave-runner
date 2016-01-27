//This script just displays a box with some instructions in it, set from the inspector
var GUIskin:GUISkin; //The skin gui we'll use

private var originalWidth:float = 600.0;  // define here the original resolution
private var originalHeight:float = 1024.0; // you used to create the GUI contents 
private var scale: Vector3;


function OnGUI(){
    scale.x = Screen.width/originalWidth; // calculate hor scale
    scale.y = Screen.height/originalHeight; // calculate vert scale
    scale.z = 1;
    
    var svMat = GUI.matrix; // save current matrix
    // substitute matrix - only scale is altered from standard
    GUI.matrix = Matrix4x4.TRS(Vector3.zero, Quaternion.identity, scale);
    // draw your GUI controls here:
    var InstructionsText:String = "Move by tilting \n Tap the screen\nto jump \n Hold longer\nto jump higher \n Tap Twice to \nDouble Jump \n Collect Gems, \navoid obstacles \n and don't fall!";

	GUI.skin = GUIskin; //The skin gui we'll use
	
	//Create a box with the instructions text in it
	GUI.Box(Rect((originalWidth - 600*0.85)/2 ,(originalHeight-600*0.85)/2 ,600*0.85,600*0.85), InstructionsText);
    
    GUI.matrix = svMat; // restore matrix
}