using UnityEngine;
using System.Collections.Generic;
using System.Collections;
using System.Text;
using System;
// All classes are accessible as long as you are placing them under unity's asset folder.
// No need to import Unity Android and Unity iOS wrappers inside this file

/// <summary>
/// Use this Skillz class if you plan to launch your game in both iOS and Android App stores.
/// </summary>
public static class SkillzCrossPlatform
{

    #region Standard API
    /// <summary>
    /// Starts up the Skillz UI. Should be used as soon as the player clicks your game's "Multiplayer" button.
    /// <param name="_matchDelegate"> This should be </param>
    /// </summary>

    public static void LaunchSkillz(SkillzMatchDelegate _matchDelegate) 
    {
        SkillzDelegate.AssignSkillzDelegate (_matchDelegate);

        #if UNITY_ANDROID
            Skillz.Launch();
        #elif UNITY_IOS
            SkillzSDK.Api.LaunchSkillz();
        #endif
    }

    public static void LaunchSkillz(SkillzSyncDelegate _syncMatchDelegate) 
    {
        SkillzDelegate.AssignSkillzDelegate (_syncMatchDelegate);

        #if UNITY_ANDROID
        Skillz.Launch();
        #elif UNITY_IOS
        SkillzSDK.Api.LaunchSkillz();
        #endif
    }

    /// <summary>
    /// Gets whether we are currently in a Skillz tournament.
    /// Use this method to have different logic in single player than in multiplayer(Skillz game).
    /// </summary>
    public static bool IsMatchInProgress()
    {
        #if UNITY_ANDROID
            return Skillz.IsMatchInProgress();
        #elif UNITY_IOS
            return SkillzSDK.Api.IsTournamentInProgress;
        #endif
        return false;
    }

    /// <summary>
    /// Returns a Hashtable of the Match Rules that you set in Developer Portal
    /// You can set these rules in https://developers.skillz.com/dashboard and clicking on your game.
    /// </summary>
    public static Hashtable GetMatchRules()
    {
        #if UNITY_ANDROID
            return Skillz.GetMatchRules();
        #elif UNITY_IOS
            return SkillzSDK.Api.GetMatchRules();
        #endif
        return null;
    }

    /// <summary>
    /// Returns a Match object that has details regarding the specific match the user is in
    /// </summary>
    public static SkillzSDK.Match GetMatchInfo()
    {
        #if UNITY_ANDROID
            return Skillz.GetMatchInfo();
        #elif UNITY_IOS
            return SkillzSDK.Api.GetMatchInfo();
        #endif
        return null;
    }

    /// <summary>
    /// Call this method to make the player forfeit the game, returning him to the Skillz portal.
    /// </summary>
    public static void AbortMatch()
    {
        #if UNITY_ANDROID
            Skillz.AbortMatch();
        #elif UNITY_IOS
            SkillzSDK.Api.AbortGame();
        #endif
    }

    /// <summary>
    /// Call this method every time the player's score changes during a Skillz match.
    /// This adds important anti-cheating functionality to your game.
    /// This can accept a string, a float, or an int.
    /// </summary>
    ///
    /// <param name="score">The player's current score as a string.</param>
    public static void UpdatePlayersCurrentScore(String score)
    {
        #if UNITY_ANDROID
            Skillz.UpdatePlayersCurrentScore(score);
        #elif UNITY_IOS
            SkillzSDK.Api.UpdatePlayerScore(float.Parse(score));
        #endif
    }

    /// <summary>
    /// Call this method every time the player's score changes during a Skillz match.
    /// This adds important anti-cheating functionality to your game.
    /// This can accept a string, a float, or an int.
    /// </summary>
    ///
    /// <param name="score">The player's current score as an int.</param>
    public static void UpdatePlayersCurrentScore(int score)
    {
        #if UNITY_ANDROID
            Skillz.UpdatePlayersCurrentScore(score);
        #elif UNITY_IOS
            SkillzSDK.Api.UpdatePlayerScore(score);
        #endif
    }

    /// <summary>
    /// Call this method every time the player's score changes during a Skillz match.
    /// This adds important anti-cheating functionality to your game.
    /// This can accept a string, a float, or an int.
    /// </summary>
    ///
    /// <param name="score">The player's current score as a float.</param>
    public static void UpdatePlayersCurrentScore(float score)
    {
        #if UNITY_ANDROID
            Skillz.UpdatePlayersCurrentScore(score);
        #elif UNITY_IOS
            SkillzSDK.Api.UpdatePlayerScore(score);
        #endif
    }

    /// <summary>
    /// Call this method when a player finishes a multiplayer game. This will report the result of the game
    /// to the Skillz server, and return the player to the Skillz portal.
    /// This can accept a string, a float, or an int.
    /// </summary>
    ///
    /// <param name="score">A string representing the score a player achieved in the game.</param>
    public static void ReportFinalScore(String score)
    {
        #if UNITY_ANDROID
            Skillz.ReportScore(score);
        #elif UNITY_IOS
            SkillzSDK.Api.FinishTournament(float.Parse(score));
        #endif
    }

    /// <summary>
    /// Call this method when a player finishes a multiplayer game. This will report the result of the game
    /// to the Skillz server, and return the player to the Skillz portal.
    /// This can accept a string, a float, or an int.
    /// </summary>
    ///
    /// <param name="score">An int representing the score a player achieved in the game.</param>
    public static void ReportFinalScore(int score)
    {
        #if UNITY_ANDROID
            Skillz.ReportScore(score);
        #elif UNITY_IOS
            SkillzSDK.Api.FinishTournament(score);
        #endif
    }

    /// <summary>
    /// Call this method when a player finishes a multiplayer game. This will report the result of the game
    /// to the Skillz server, and return the player to the Skillz portal.
    /// This can accept a string, a float, or an int.
    /// </summary>
    ///
    /// <param name="score">A float representing the score a player achieved in the game.</param>
    public static void ReportFinalScore(float score)
    {
        #if UNITY_ANDROID
            Skillz.ReportScore(score);
        #elif UNITY_IOS
            SkillzSDK.Api.FinishTournament(score);
        #endif
    }

    /// <summary>
    /// This method returns what SDK version your user is on.
    /// </summary>
    public static string SDKVersionShort()
    {
        #if UNITY_ANDROID
            return Skillz.SDKVersionShort();
        #elif UNITY_IOS
            return SkillzSDK.Api.SDKVersionShort;
        #endif
        return null;
    }

    /// <summary>
    /// This returns the current user's display name in case you want to use it in the game
    /// </summary>
    [Obsolete("This method will be removed in a future release, instead use the get Player function, which will return an instance of Player for the current user")]
    public static string CurrentUserDisplayName()
    {
        #if UNITY_ANDROID
            return Skillz.CurrentUserDisplayName();
        #elif UNITY_IOS
            return SkillzSDK.Api.GetPlayer().DisplayName;
        #endif
        return null;
    }

    /// <summary>
    /// Use this Player class to grab information about your current user.
    /// </summary>
    public static SkillzSDK.Player GetPlayer()
    {
	SkillzSDK.Match match = GetMatchInfo();
	if (match != null) {
	    foreach (SkillzSDK.Player player in match.Players) {
	      if (player.IsCurrentPlayer) {
	        return player;
	      } 
	    }
	} else {
	    #if UNITY_ANDROID
	        return Skillz.GetPlayer();
	    #elif UNITY_IOS
		return SkillzSDK.Api.GetPlayer();
            #endif

	}
	return null;
    }


    /// <summary>
    /// Call this method if you want to add meta data for the match.
    /// </summary>
    /// <param name="metadataJson">A string representing the meta data in a json string.</param>
    /// <param name="forMatchInProgress">A boolean to check whether the user is in a Skillz game.</param>
    public static void AddMetadataForMatchInProgress(string metadataJson, bool forMatchInProgress)
    {
        #if UNITY_ANDROID
            Skillz.AddMetadataForMatchInProgress(metadataJson, forMatchInProgress);
        #elif UNITY_IOS
            SkillzSDK.Api.AddMetadataForMatchInProgress(metadataJson, forMatchInProgress);
        #endif
    }

    #endregion // Standard API

    #region Sync API

    public static void SendData(byte[] data) 
    {
        #if UNITY_ANDROID
            Skillz.SendData(data);
        #elif UNITY_IOS
            SkillzSDK.Api.SendData(data);
        #endif
    }

    public static bool IsMatchCompleted()
    {
        #if UNITY_ANDROID
            return Skillz.IsMatchCompleted();
        #elif UNITY_IOS
            return SkillzSDK.Api.IsMatchCompleted();
        #endif
        return false;
    }

    public static int GetConnectedPlayerCount()
    {
        #if UNITY_ANDROID
            return Skillz.GetConnectedPlayerCount();
        #elif UNITY_IOS
        return SkillzSDK.Api.ConnectedPlayerCount();
        #endif
        return 0;
    }

    public static UInt64 GetCurrentPlayerId() 
    {
        #if UNITY_ANDROID
            return Skillz.GetCurrentPlayerId();
        #elif UNITY_IOS
            return SkillzSDK.Api.CurrentPlayerId();
        #endif
        return 0;
    }

    public static UInt64 GetCurrentOpponentPlayerId() 
    {
	#if UNITY_ANDROID
		return Skillz.GetCurrentOpponentPlayerId();
	#elif UNITY_IOS
		return SkillzSDK.Api.CurrentOpponentPlayerId();
	#endif
	return 0;
    }

    public static double GetServerTime()
    {
        #if UNITY_ANDROID
            return Skillz.GetServerTime();
        #elif UNITY_IOS
            return SkillzSDK.Api.GetServerTime();
        #endif
        return 0;
    }

    public static long GetTimeLeftForReconnection(UInt64 playerId) 
    {
        #if UNITY_ANDROID
            return Skillz.GetTimeLeftForReconnection(playerId);
        #elif UNITY_IOS
            return SkillzSDK.Api.ReconnectTimeLeftForPlayer(playerId);
        #endif
        return 0;
    }

    #endregion // Sync API


    /// <summary>
    /// This is the Random class that you can use to implement fairness in your game
    /// Use this Random function for variables that can affect gameplay.
    /// </summary>
    public static class Random
    {

        /**
        * Value from Skillz random (if a Skillz game), or Unity random (if not a Skillz game)
        **/
        public static float Value()
        {

            float randomValue = 0;
            if (IsMatchInProgress())
            {
                #if UNITY_ANDROID
                    var skillzRandom = GetSkillz().CallStatic<AndroidJavaObject>("getRandom");
                    randomValue = skillzRandom.Call<float>("nextFloat");
                #elif UNITY_IOS
                    randomValue = SkillzSDK.Api._getRandomFloat();
                #endif
            }
            else
            {
                randomValue = UnityEngine.Random.value;
            }

            return randomValue;
        }

        /**
        * Find a point inside the unit sphere using Value()
        **/
        public static Vector3 InsideUnitSphere()
        {
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
        public static Vector2 InsideUnitCircle()
        {
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
        public static Vector3 OnUnitSphere()
        {
            Vector3 val = new Vector3();
            float s;

            do
            {
                val.x = 2 * (float) Value() - 1;
                val.y = 2 * (float) Value() - 1;
                s = Mathf.Pow(val.x, 2) + Mathf.Pow(val.y, 2);
            }
            while (s > 1);

            float r = 2 * Mathf.Sqrt(1 - s);

            val.x *= r;
            val.y *= r;
            val.z = 2 * s - 1;

            return val;
        }

        /**
        * Quaternion random using Value()
        **/
        public static Quaternion RotationUniform()
        {
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
        public static Quaternion Rotation()
        {
            return RotationUniform();
        }

        /**
        * Ranged random float using Value()
        **/
        public static float Range(float min, float max)
        {
            float rand = Value();
            return min + (rand * (max-min));
        }

        /**
        * Ranged random int using Value()
        **/
        public static int Range(int min, int max)
        {
            float rand = Value();
            return min + (int) (rand * (max-min));
        }
    }

    private static AndroidJavaClass GetSkillz()
    {
        return new AndroidJavaClass("com.skillz.Skillz");
    }
}
