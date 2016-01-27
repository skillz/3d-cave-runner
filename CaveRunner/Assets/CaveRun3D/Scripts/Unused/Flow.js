//This script was intended to create a flowing effect for mud and lava by offsetting their texture at a constant speed
//I chose to exclude it from the game wither because it didn't work correctly or I didn't find a useful use for it.
//I might include it in the game in a later update. You can still try to make use of it if you want

var Offset:float = 0.1;

private var CurrentOffset:float = 0;

function Update () 
{
	transform.renderer.material.mainTextureScale = Vector2 (CurrentOffset,CurrentOffset);
	//transform.renderer.material.mainTextureOffset = Vector2(0,CurrentOffset);
	CurrentOffset += Offset;
	
	if ( CurrentOffset > 1 )    CurrentOffset = 0;
}