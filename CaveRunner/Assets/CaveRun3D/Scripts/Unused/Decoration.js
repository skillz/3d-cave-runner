//This script was intended to create randomized decoration elements from an array of objects set in the inspector
//I chose to exclude it from the game wither because it didn't work correctly or I didn't find a useful use for it.
//I might include it in the game in a later update. You can still try to make use of it if you want

@script ExecuteInEditMode()

var DecorObject:Transform[];
private var DecorObjectCopy:Transform;

var RotationRangeX:Vector2 = Vector2(0,0);
var RotationRangeY:Vector2 = Vector2(0,360);
var RotationRangeZ:Vector2 = Vector2(0,0);

var EmptyChance:float = 0.8;

function Awake()
{
	if ( Random.value > EmptyChance )
	{
		DecorObjectCopy = Instantiate(DecorObject[Random.Range(0,DecorObject.length)], transform.position, Quaternion.identity);
		
		DecorObjectCopy.transform.parent = transform;
		
		DecorObjectCopy.transform.eulerAngles.x = Random.Range(RotationRangeX.x,RotationRangeX.y);
		DecorObjectCopy.transform.eulerAngles.x = Random.Range(RotationRangeY.x,RotationRangeY.y);
		DecorObjectCopy.transform.eulerAngles.x = Random.Range(RotationRangeZ.x,RotationRangeZ.y);
	}
}