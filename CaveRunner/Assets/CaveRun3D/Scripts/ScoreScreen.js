//This script is used to dispaly the score screen at the end of the game, where two values ( distance and gems collected ) are added to teh total score
var GUIskin:GUISkin; //The skin gui we'll use

private var originalWidth:float = 600.0;  // define here the original resolution
private var originalHeight:float = 1024.0; // you used to create the GUI contents 
private var scale: Vector3;
private var smallBoxHeight = 200;
private var smallBoxWidth = 600;


var GemValue:int = 100; //The value of a single gem in points
var DistanceValue:int = 10; //The value of a single meter of distance in points

private var TotalDistance:int = 0; //The total distance passed
private var TotalGems:int = 0; //The total gems collected

private var TotalScore:int = 0; //The total score calculated from both distance and gems collected
private var TotalScoreCurrent:int = 0; //The current total score, used to animate the score rising from 0 to TotalScore



function Start()
{
	TotalDistance = PlayerPrefs.GetInt("TotalDistance"); //Get the distance value from PlayerPrefs, which is used to hold values on your local machine even after you shutdown the game
	TotalGems = PlayerPrefs.GetInt("TotalGems"); //Get the number of gems from PlayerPrefs, which is used to hold values on your local machine even after you shutdown the game

	TotalScore = TotalDistance * DistanceValue + TotalGems * GemValue; //Calculate the total score from the gems and distance multiplied by their respective values

	var data = new Dictionary.<String, String>();
	data["Gems"] = TotalGems.ToString();
	data["TotalDistance"] = TotalDistance.ToString();
	data["TotalScore"] = TotalScore.ToString();
}

function OnGUI()
{
	scale.x = Screen.width/originalWidth; // calculate hor scale
    scale.y = Screen.height/originalHeight; // calculate vert scale
    scale.z = 1;
    var svMat = GUI.matrix; // save current matrix
    // substitute matrix - only scale is altered from standard
    GUI.matrix = Matrix4x4.TRS(Vector3.zero, Quaternion.identity, scale);
    // draw your GUI controls here:
    
	GUI.skin = GUIskin; //The skin gui we'll use
	
	if ( TotalScoreCurrent < TotalScore ) //If we haven't reached the TotalScore, keep counting up to it
	{
		var addS:int =0.005*TotalScore;
		if (addS== 0)
			addS = 1;
		TotalScoreCurrent+=addS; //Count up from 0 to the value of TotalScore smoothly
	}
	if (TotalScoreCurrent > TotalScore)
		TotalScoreCurrent = TotalScore;
	//GUI.Box(Rect((originalWidth - 400)/2 ,(originalHeight-768)/2 ,400,768), InstructionsText);

	
	//Display 3 boxes, the first showing total distance passed and multiplied by the value of each meter, the second showing total gems collected and multiplied by the value of a gem, and finally a bigger box showing the
    //total score.
    var offset:int = 70;	
	GUI.Box ( Rect((originalWidth - smallBoxWidth*0.85)/2 ,originalHeight -900 + offset , smallBoxWidth*0.85, smallBoxHeight*0.85), "Total Distance:\n" + TotalDistance.ToString() + "M" + " X " + DistanceValue.ToString() );
	GUI.Box ( Rect((originalWidth - smallBoxWidth*0.85)/2 ,originalHeight -675 + offset , smallBoxWidth*0.85, smallBoxHeight*0.85), "Total Gems: \n" + TotalGems.ToString() + " X " + GemValue.ToString() );
	GUI.Box ( Rect((originalWidth - smallBoxWidth*0.85)/2 ,originalHeight -455 + offset, smallBoxWidth*0.85, smallBoxHeight*0.85), "Total Score \n" + TotalScoreCurrent.ToString());
}

