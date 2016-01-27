var gems : Array;
var gemKinds : int = 4;
var obstacles : Array;
var obstacleKinds : int = 8;
var sections : Array;
var kPC : PlatformCreator;
var Shadow : GameObject;

function Start() {
	var i : int;
	var arr : Array;
	gems = new Array();
	for (i = 0; i < gemKinds; i++) {
		arr = new Array();
		gems.Add(arr);
	}
	obstacles = new Array();
	for (i = 0; i < obstacleKinds; i++) {
		arr = new Array();
		obstacles.Add(arr);
	}
	sections = new Array();
	for (i = 0; i < 2; i++) {
		arr = new Array();
		sections.Add(arr);
	}

	kPC = GameObject.FindWithTag("PlatformCreator").GetComponent("PlatformCreator");
	Shadow = GameObject.Find("Shadow");
}

function Update() {
	if (Shadow) Shadow.transform.position.y = 0;
}

function GetSection(sectionKind : int) : GameObject {
	var section : GameObject;
	
	if (sections != null)
	{
		var arr : Array = sections[sectionKind];
		if (arr.length == 0) {
			var trans : Transform;
			if (sectionKind == 0) {
				trans = Instantiate(kPC.SectionEdge[0],Vector3.zero, Quaternion.identity);
			} else {
				trans = Instantiate(kPC.SectionMiddle[0],Vector3.zero, Quaternion.identity);
			}
			section = trans.gameObject;
		} else {
			section = arr.Pop();
			section.SetActive(true);
		}
	}
	return section;
}

function GetGem(gemKind : int) : GameObject {
	//Debug.Log("GetGem:" + gemKind);

	var arr : Array = gems[gemKind];
	if (arr.length == 0) {
		var trans : Transform = Instantiate(kPC.Gem[gemKind],Vector3.zero, Quaternion.identity);
		//Debug.Log("GetGemInstantiate");
		trans.localScale = Vector3.one * 4.5f;
		return trans.gameObject;
	} else {
		var gem : GameObject = arr.Pop();
		gem.SetActive(true);
		return gem;
	}
}

function GetObstacle(obstacleKind : int) : GameObject {
	//Debug.Log("GetObstacle:" + obstacleKind);
	if (obstacles != null)
	{
		var arr : Array = obstacles[obstacleKind];
		if (arr.length == 0) {
			var trans : Transform = Instantiate(kPC.Obstacle[obstacleKind],Vector3.zero, Quaternion.identity);
			//Debug.Log("GetObstacleInstantiate");
			return trans.gameObject;
		} else {
			var obstacle : GameObject = arr.Pop();
			obstacle.SetActive(true);
			return obstacle;
		}
	}
	else
	{
		return null;
	}
}

function DisposeChildren(kObject : GameObject) {
	//kObject.SetActiveRecursively(false); //commented out so that no "invisible" bats exist.
	for (var child : Transform in kObject.transform) {
		Dispose(child.gameObject);
	}
	//kObject.transform.DetachChildren();
	Dispose(kObject);
}

function Dispose(kObject : GameObject) {
	var a : int = kObject.tag[0];
	var b : int = kObject.tag[1];
	var arr : Array;
	switch(a) {
		case "G"[0]:
			arr = gems[b - 48];
			kObject.transform.parent = null;
			kObject.SetActive(false);
			arr.Add(kObject);
		break;
		case "O"[0]:
			arr = obstacles[b - 48];
			kObject.transform.parent = null;
			kObject.SetActive(false);
				
			arr.Add(kObject);
		break;
		case "S"[0]:
			arr = sections[b - 48];
			kObject.transform.parent = null;
			//kObject.active = false; //never set as active= false, for that will stop the update cycle and avoid the platforms own disposal
			arr.Add(kObject);
		break;
		default:
			Destroy(kObject);
		break;
	}
}