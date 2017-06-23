using UnityEngine;
using System.Collections.Generic;
using System.Collections;
using System.Text;
using System;
// All classes are accessible as long as you are placing them under unity's asset folder.
// No need to import Unity Android and Unity iOS wrappers inside this file


public static class SkillzCrossPlatform {
	public static void LaunchSkillz() {
		#if UNITY_ANDROID
		    Skillz.Launch();
		#elif UNITY_IOS
		    SkillzSDK.Api.LaunchSkillz();
		#endif
	}

	public static bool IsMatchInProgress() {
		#if UNITY_ANDROID
		    return Skillz.IsMatchInProgress();
		#elif UNITY_IOS
		    return SkillzSDK.Api.IsTournamentInProgress;
		#endif
	}

	public static Hashtable GetMatchRules() {
		#if UNITY_ANDROID
		    return Skillz.GetMatchRules();
		#elif UNITY_IOS
		    return SkillzSDK.Api.GetMatchRules();
		#endif
	}

	public static void AbortMatch() {
		#if UNITY_ANDROID
		    Skillz.AbortMatch();
		#elif UNITY_IOS
		    SkillzSDK.Api.AbortGame();
		#endif
	}

	public static void UpdatePlayersCurrentScore(String score) {
		#if UNITY_ANDROID
		    Skillz.UpdatePlayersCurrentScore(score);
		#elif UNITY_IOS
		    SkillzSDK.Api.UpdatePlayerScore(float.Parse(score));
		#endif
	}

	public static void UpdatePlayersCurrentScore(int score) {
		#if UNITY_ANDROID
		    Skillz.UpdatePlayersCurrentScore(score);
		#elif UNITY_IOS
		    SkillzSDK.Api.UpdatePlayerScore(score);
		#endif
	}

	public static void UpdatePlayersCurrentScore(float score) {
		#if UNITY_ANDROID
		    Skillz.UpdatePlayersCurrentScore(score);
		#elif UNITY_IOS
		    SkillzSDK.Api.UpdatePlayerScore(score);
		#endif
	}

	public static void ReportFinalScore(String score) {
		#if UNITY_ANDROID
		    Skillz.ReportScore(score);
		#elif UNITY_IOS
		    SkillzSDK.Api.FinishTournament(float.Parse(score));
		#endif
	}

	public static void ReportFinalScore(int score) {
		#if UNITY_ANDROID
		    Skillz.ReportScore(score);
		#elif UNITY_IOS
		    SkillzSDK.Api.FinishTournament(score);
		#endif
	}

	public static void ReportFinalScore(float score) {
		#if UNITY_ANDROID
		    Skillz.ReportScore(score);
		#elif UNITY_IOS
		    SkillzSDK.Api.FinishTournament(score);
		#endif
	}

	public static string SDKVersionShort() {
		#if UNITY_ANDROID
		    return Skillz.SDKVersionShort();
		#elif UNITY_IOS
		    return SkillzSDK.Api.SDKVersionShort;
		#endif
	}

	public static string CurrentUserDisplayName() {
		#if UNITY_ANDROID
		    return Skillz.CurrentUserDisplayName();
		#elif UNITY_IOS
		    return SkillzSDK.Api.Player.DisplayName;
		#endif
	}

	public static class Player {

		public static string GetId() {
			#if UNITY_ANDROID
			    return Skillz.Player.GetId();
			#elif UNITY_IOS
			    return SkillzSDK.Api.Player.ID.ToString();
			#endif
		}

		public static string GetAvatarUrl() {
			#if UNITY_ANDROID
			    return Skillz.Player.GetAvatarUrl();
			#elif UNITY_IOS
			    return SkillzSDK.Api.Player.AvatarURL;
			#endif
		}

		public static string GetFlagUrl() {
			#if UNITY_ANDROID
			    return Skillz.Player.GetFlagUrl();
			#elif UNITY_IOS
			    return SkillzSDK.Api.Player.FlagURL;
			#endif
		}

	}

	public static void AddMetadataForMatchInProgress(string metadataJson, bool forMatchInProgress) {
		#if UNITY_ANDROID
		    Skillz.AddMetadataForMatchInProgress(metadataJson, forMatchInProgress);
		#elif UNITY_IOS
		    SkillzSDK.Api.AddMetadataForMatchInProgress(metadataJson, forMatchInProgress);
		#endif
	}

	public static class Random {

		/**
* Value from Skillz random (if a Skillz game), or Unity random (if not a Skillz game)
**/
		public static float Value() {

			float randomValue = 0;
			if(IsMatchInProgress()) {
				#if UNITY_ANDROID
				    var skillzRandom = GetSkillz().CallStatic<AndroidJavaObject>("getRandom");
				    randomValue = skillzRandom.Call<float>("nextFloat");
				#elif UNITY_IOS
				    randomValue = SkillzSDK.Api._getRandomFloat();
				#endif
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
}
