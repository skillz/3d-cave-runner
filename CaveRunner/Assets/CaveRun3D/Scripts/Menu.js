//This script displays a horizontal menu, with buttons that can be set by the user. Each button is actually
//a prefab with a MenuItem script in it. take a look at the MENU folder to see those prefabs
private var originalWidth:float = 600.0;  // define here the original resolution
private var originalHeight:float = 1024.0; // you used to create the GUI contents
private var scale: Vector3;


var GUIskin:GUISkin; //The skin gui we'll use

private var ButtonHeight:int = 90;
private var ButtonWidth: int = 360;
private var ButtonHeightOffset:int = 0; //Used to offset the button(s) in the beginning so that they later move into the scene

private var ButtonMargin:int = (originalWidth-2*ButtonWidth)/4;

var MenuDelay:float = 2; //How much to wait before moving the menu into the scene
private var MenuDelayCount:float = 0; //The counter for MenuDelay

var MenuItems:Transform[]; //All the buttons, these are prefabs with MenuItem script in them. Take a look inside MENU folder to see them
private var MenuIndex:int = 0; //The current index of the menu items array

function Start()
{
	ButtonHeightOffset = -ButtonMargin; //Move the buttons a little up, by the value of the margin
}

function OnGUI()
{
	scale.x = Screen.width/originalWidth; // calculate hor scale
  scale.y = Screen.height/originalHeight; // calculate vert scale
  scale.z = 1;

  var svMat = GUI.matrix; // save current matrix
  // substitute matrix - only scale is altered from standard
  GUI.matrix = Matrix4x4.TRS(Vector3.zero, Quaternion.identity, scale);


	//Animate the entry of the menu items, first by waiting a few seconds and then moving them in to the scene
	if ( MenuDelayCount < MenuDelay )
	{
	   MenuDelayCount += Time.deltaTime; //Count up to the value of MenuDelay
	}
	else if ( ButtonHeightOffset < ButtonHeight )
	{
		ButtonHeightOffset -= (ButtonHeightOffset - ButtonHeight) * 0.1; //Gradually change the value of ButtonHeightOffset to ButtonHeight
 	}

	GUI.skin = GUIskin; //The skin gui we'll use

	var kMenuItem : MenuItem_;

	var buttonRect : Rect;
  //draw a button for each item
  kMenuItem = MenuItems[0].GetComponent("MenuItem_");

  buttonRect = Rect((originalWidth/2) - (ButtonWidth/2), originalHeight - ButtonHeight -25,ButtonWidth,ButtonHeight );
  //Debug.Log("button Rect: " + buttonRect.ToString());
  if ( GUI.Button (buttonRect , kMenuItem.MenuItemName ) )
  {
      kMenuItem.RunMenuItem(); //Run the menu item function which is inside a MenuItem script component attached to a prefab
  }

	// restore matrix before returning
  GUI.matrix = svMat; // restore matrix
}
