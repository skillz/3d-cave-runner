using UnityEngine;
using System.Collections.Generic;
using System.Collections;
using System.Text;
using System;

/*
* Skillz Unity Wrapper Beta 1 - CS
*
* Instructions
*
*  - Include Skillz.cs in your Unity Project
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
public static class Skillz {
	public static void Launch() {
		GetSkillz().CallStatic("launch",GetCurrentActivity());
	}

	public static bool IsMatchInProgress() {
		bool isSkillzGame = GetSkillz().CallStatic<bool>("isMatchInProgress");
		return isSkillzGame;
	}

	public static Hashtable GetMatchRules() {
		Hashtable matchRules;
		matchRules = new Hashtable();

		AndroidJavaObject matchRulesJO = GetSkillz().CallStatic<AndroidJavaObject>("getMatchRules");
		AndroidJavaObject matchRulesEntrySet = matchRulesJO.Call<AndroidJavaObject>("entrySet");
		AndroidJavaObject matchRulesIterator = matchRulesEntrySet.Call<AndroidJavaObject>("iterator");

		while (matchRulesIterator.Call<bool>("hasNext")) {
			AndroidJavaObject next = matchRulesIterator.Call<AndroidJavaObject>("next");
			matchRules.Add(next.Call<String>("getKey"),next.Call<String>("getValue"));
		}

		return matchRules;
	}

	public static void AbortMatch() {
		GetSkillz().CallStatic("abortMatch",GetCurrentActivity());
	}

	public static void UpdatePlayersCurrentScore(String score) {
		var bigDecScore = new AndroidJavaObject("java.math.BigDecimal", score);
		GetSkillz().CallStatic("updatePlayersCurrentScore", GetCurrentActivity(), bigDecScore);
	}

	public static void UpdatePlayersCurrentScore(int score) {
		var bigDecScore = new AndroidJavaObject("java.math.BigDecimal", score);
		GetSkillz().CallStatic("updatePlayersCurrentScore", GetCurrentActivity(), bigDecScore);
	}

	public static void UpdatePlayersCurrentScore(float score) {
		var bigDecScore = new AndroidJavaObject("java.math.BigDecimal", score.ToString());
		GetSkillz().CallStatic("updatePlayersCurrentScore", GetCurrentActivity(), bigDecScore);
	}

	public static void ReportScore(String score) {
		AndroidJavaObject bigDecScore = new AndroidJavaObject("java.math.BigDecimal", score);
		GetSkillz().CallStatic("reportScore", GetCurrentActivity(), bigDecScore);
	}

	public static void ReportScore(int score) {
		AndroidJavaObject bigDecScore = new AndroidJavaObject("java.math.BigDecimal", score);
		GetSkillz().CallStatic("reportScore", GetCurrentActivity(), bigDecScore);
	}

	public static void ReportScore(float score) {
		AndroidJavaObject bigDecScore = new AndroidJavaObject("java.math.BigDecimal", score.ToString());
		GetSkillz().CallStatic("reportScore", GetCurrentActivity(), bigDecScore);
	}

	public static void AddMetadataForMatchInProgress(string metadataJson, bool isMatchInProgress) {
		GetSkillz().CallStatic("addMetadataForUnityMatchInProgress", metadataJson, isMatchInProgress);
	}

	public static string SDKVersionShort() {
		string SDKVersion = GetSkillz().CallStatic<string>("SDKVersionShort");
		return SDKVersion;
	}

	public static string CurrentUserDisplayName() {
		string UserName = GetSkillz().CallStatic<string>("currentUserDisplayName", GetCurrentActivity());
		return UserName;
	}

	public static class Player {

	    public static string GetId() {
	        var player = GetSkillz().CallStatic<AndroidJavaObject>("player", GetCurrentActivity());
            	return player.Call<string>("getId");
	    }

	    public static string GetAvatarUrl() {
	        var player = GetSkillz().CallStatic<AndroidJavaObject>("player", GetCurrentActivity());
	        return player.Call<string>("getAvatarUrl");
	    }

	    public static string GetFlagUrl() {
            	var player = GetSkillz().CallStatic<AndroidJavaObject>("player", GetCurrentActivity());
            	return player.Call<string>("getFlagUrl");
	    }
	}

	public static class Random {

		/**
		 * Value from Skillz random (if a Skillz game), or Unity random (if not a Skillz game)
		 **/
		public static float Value() {

			float randomValue = 0;
			if(IsMatchInProgress()) {
				var skillzRandom = GetSkillz().CallStatic<AndroidJavaObject>("getRandom");
				randomValue = skillzRandom.Call<float>("nextFloat");
			} else {
				randomValue = UnityEngine.Random.value;
			}

			return randomValue;
		}

		/**
		 * Find a point inside the unit sphere using Value()
		 **/
		public static Vector3 InsideUnitSphere() {
			float r = Value();
			float phi = Value() * Mathf.PI;
			float theta = Value() * Mathf.PI * 2;

			float x = r * Mathf.Cos(theta) * Mathf.Sin(phi);
			float y = r * Mathf.Sin(theta) * Mathf.Sin(phi);
			float z = r * Mathf.Cos(phi);

			return new Vector3(x, y ,z);
		}

		/**
		 * Find a point inside the unit circle using Value()
		 **/
		public static Vector2 InsideUnitCircle() {
			float radius = 1.0f;
			float rand = Value() * 2 * Mathf.PI;
			Vector2 val = new Vector2();

			val.x = radius * Mathf.Cos(rand);
			val.y = radius * Mathf.Sin(rand);

			return val;
		}

		/**
		 * Hybrid rejection / trig method to generate points on a sphere using Value()
		 **/
		public static Vector3 OnUnitSphere() {
			Vector3 val = new Vector3();
			float s;

			do {
				val.x = 2 * (float) Value() - 1;
				val.y = 2 * (float) Value() - 1;
				s = Mathf.Pow(val.x, 2) + Mathf.Pow(val.y, 2);
			} while (s > 1);

			float r = 2 * Mathf.Sqrt(1 - s);

			val.x *= r;
			val.y *= r;
			val.z = 2 * s - 1;

			return val;
		}

		/**
		 * Quaternion random using Value()
		 **/
		public static Quaternion RotationUniform() {
			float u1 = Value();
			float u2 = Value();
			float u3 = Value();

			float u1sqrt = Mathf.Sqrt(u1);
			float u1m1sqrt = Mathf.Sqrt(1 - u1);
			float x = u1m1sqrt * Mathf.Sin(2 * Mathf.PI * u2);
			float y = u1m1sqrt * Mathf.Cos(2 * Mathf.PI * u2);
			float z = u1sqrt * Mathf.Sin(2 * Mathf.PI * u3);
			float w = u1sqrt * Mathf.Cos(2 * Mathf.PI * u3);

			return new Quaternion(x, y, z, w);
		}

		/**
		 * Quaternion random using Value()
		 **/
		public static Quaternion Rotation() {
			return RotationUniform();
		}

		/**
		 * Ranged random float using Value()
		 **/
		public static float Range(float min, float max) {
			float rand = Value();
			return min + (rand * (max-min));
		}

		/**
		 * Ranged random int using Value()
		 **/
		public static int Range(int min, int max) {
			float rand = Value();
			return min + (int) (rand * (max-min));
		}
	}

	private static AndroidJavaClass GetSkillz() {
		return new AndroidJavaClass("com.skillz.Skillz");
	}

	private static AndroidJavaObject GetCurrentActivity() {
		AndroidJavaClass activityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaObject activity = activityClass.GetStatic<AndroidJavaObject>("currentActivity");	
		return activity;
	}
}
