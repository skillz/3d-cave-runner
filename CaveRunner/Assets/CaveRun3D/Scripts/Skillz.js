#pragma strict

/*
* Skillz Unity Wrapper Beta 1 - JS
*
* Instructions
*
*  - Include Skillz.js in your Unity Project
*  - Integrate Skillz into your game using the Skillz functions specified by this file (follow "Android Core Implementation" from Skillz Android documentation)
*  - Export Unity project as Android project (Unity: File -> Build Settings... -> Check "Google Android Project" -> Export)
*  - Import into Android Studio (Android Studio: File -> New -> Import Project... -> Select exported directory)
*  - Follow the "Adding the Skillz Library" steps from the Skillz Android documentation to add and configure the Skillz SDK 
*  - Compile and test your game
* 
* Functions are analogous to Skillz Android methods outlined in the Skillz documentation: 
* 
*  Skillz.Launch()
*  Skillz.UpdatePlayersCurrentScore(score)
*  Skillz.ReportScore(score)
*  Skillz.IsMatchInProgress() => boolean
*  Skillz.GetMatchRules() => Hashtable
*  Skillz.AbortMatch()
*  Skillz.StartMatch()
*
*  Skillz.Random => Random class to be used for fair RNG instead of Unity's Random.
*   Contains comparable Unity Random methods: Value(), Range(min,max), Rotation(), InsideUnitSphere(), InsideUnitCircle(), OnUnitSphere()
*
*/
static class Skillz {

	function Launch() {
		currentActivity().Call("runOnUiThread", new AndroidJavaRunnable(function() {
			SkillzClass.CallStatic("launch", currentActivity());
		}));
	}
	
	function IsMatchInProgress() {
		var isSkillzGame = SkillzClass.CallStatic.<boolean>("isMatchInProgress");
		return isSkillzGame;
	}
	
	function StartMatch() {
		SkillzClass.CallStatic("startMatch", currentActivity());
	}
	
	function GetMatchRules() {
		var matchRules : Hashtable;
		matchRules = new Hashtable();
		
		var matchRulesJO = SkillzClass.CallStatic.<AndroidJavaObject>("getMatchRules");
		var matchRulesEntrySet = matchRulesJO.Call.<AndroidJavaObject>("entrySet");
		var matchRulesIterator = matchRulesEntrySet.Call.<AndroidJavaObject>("iterator");
		
		while (matchRulesIterator.Call.<boolean>("hasNext")) {
			var next = matchRulesIterator.Call.<AndroidJavaObject>("next");			
			matchRules.Add(next.Call.<String>("getKey"),next.Call.<String>("getValue"));			
		}
		
		return matchRules;
	}
	
	function AbortMatch() {
		SkillzClass.CallStatic("abortMatch",currentActivity());
	}

	function UpdatePlayersCurrentScore(score) { 
		var bigDecScore = new AndroidJavaObject("java.math.BigDecimal", score);
		SkillzClass.CallStatic("updatePlayersCurrentScore", currentActivity(), bigDecScore);
	}
	
	function ReportScore(score) {
		var bigDecScore = new AndroidJavaObject("java.math.BigDecimal", score);
		SkillzClass.CallStatic("reportScore", currentActivity(), bigDecScore);
	}

	var currentActivity = function() {
		var activityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		var activity = activityClass.GetStatic.<AndroidJavaObject>("currentActivity");	
		return activity;
	};

	var SkillzClass = new AndroidJavaClass("com.skillz.Skillz");
	
	static class Random {
		/**
		 * Quaternion random using Value()
		 **/
		function RotationUniform() {
			var u1 : float = Value();
			var u2 : float = Value();
			var u3 : float = Value();
			
			var u1sqrt : float = Mathf.Sqrt(u1);
			var u1m1sqrt : float = Mathf.Sqrt(1 - u1);
			var x : float = u1m1sqrt * Mathf.Sin(2 * Mathf.PI * u2);
			var y : float = u1m1sqrt * Mathf.Cos(2 * Mathf.PI * u2);
			var z : float = u1sqrt * Mathf.Sin(2 * Mathf.PI * u3);
			var w : float = u1sqrt * Mathf.Cos(2 * Mathf.PI * u3);
			
			return new Quaternion(x, y, z, w);
		}
		
		/**
		 * Quaternion random using Value()
		 **/
		function Rotation() {
			return RotationUniform();
		}
				
		/**
		 * Find a point inside the unit sphere using Value()
		 **/
		function InsideUnitSphere() {
			var r : float = Value();
			var phi : float = Value() * Mathf.PI;
			var theta : float = Value() * Mathf.PI * 2;
			
			var x : float = r * Mathf.Cos(theta) * Mathf.Sin(phi);
			var y : float = r * Mathf.Sin(theta) * Mathf.Sin(phi);
			var z : float = r * Mathf.Cos(phi);
			
			return new Vector3(x, y ,z);
		}
		
		/**
		 * Find a point inside the unit circle using Value()
		 **/
		function InsideUnitCircle() {
			var radius : float = 1.0f;
			var rand : float = Value() * 2 * Mathf.PI;
			var val : Vector2 = new Vector2();
			
			val.x = radius * Mathf.Cos(rand);
			val.y = radius * Mathf.Sin(rand);
			
			return val;
		}
		
		/**
		 * Hybrid rejection / trig method to generate points on a sphere using Value()
		 **/
		function OnUnitSphere() {
			var val : Vector3 = new Vector3();
			var s : float = 0;
			
			do {
				val.x = 2 * Value() - 1;
				val.y = 2 * Value() - 1;
				s = Mathf.Pow(val.x, 2) + Mathf.Pow(val.y, 2);
			} while (s > 1);
			
			var r : float = 2 * Mathf.Sqrt(1 - s);
			
			val.x *= r;
			val.y *= r;
			val.z = 2 * s - 1;
			
			return val;
		}
		
		/**
		 * Ranged random using Value()
		 **/
		function Range(min : float, max : float) {
			var rand = Value();
			return min + (rand * (max - min));
		}
		
		/**
		 * Value from Skillz random (if a Skillz game), or Unity random (if not a Skillz game)
		 **/
		function Value() {
			
			var randomValue : float = 0;
			if(IsMatchInProgress()) {
				var skillzRandom = SkillzClass.CallStatic.<AndroidJavaObject>("getRandom");
				randomValue = skillzRandom.Call.<float>("nextFloat");
			} else {
				randomValue = UnityEngine.Random.value;
			}
			
			return randomValue;
		}
	}
	
}

