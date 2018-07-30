using UnityEngine;
using System;
using SkillzSDK;
using System.Collections.Generic;

public class SkillzAbstractDelegate : MonoBehaviour
{
    public int GameID = 0;
    public SkillzSDK.Environment SkillzEnvironment = SkillzSDK.Environment.Sandbox;

    private static bool initializedYet = false;
    /// <summary>
    /// Once the scene starts up, this script initializes Skillz
    /// and makes the owner GameObject persistent through scene changes.
    /// </summary>
    void Awake() {
#if UNITY_IOS
        //If Skillz has already been initialized, then an instance of this delegate object already exists.
        if (initializedYet) {
            return;
        }

        initializedYet = true;
        DontDestroyOnLoad(gameObject);
        Api.Initialize(GameID.ToString(), SkillzEnvironment);
#elif UNITY_ANDROID
        DontDestroyOnLoad(gameObject);
        AndroidInitialize(GameID.ToString(), SkillzEnvironment.ToString());
#endif
    }

    private static void AndroidInitialize(string gameId, string environment) {
        if (Application.platform == RuntimePlatform.Android) {
            string environmentString;
            if (environment == "Sandbox") {
                environmentString = "false";
            } else {
                environmentString = "true";
            }
            GetSkillzPreferences().CallStatic("setUnityGameId",GetCurrentActivity(), gameId);
            GetSkillzPreferences().CallStatic("setUnityGameEnvironment",GetCurrentActivity(), environmentString);
        } else {
            Debug.LogWarning("Trying to initialize Skillz on a platform other than Android");
        }
    }

    private static AndroidJavaClass GetSkillzPreferences() {
        return new AndroidJavaClass("com.skillz.Skillz");
    }

    private static AndroidJavaObject GetCurrentActivity() {
        AndroidJavaClass activityClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        AndroidJavaObject activity = activityClass.GetStatic<AndroidJavaObject>("currentActivity");
        return activity;
    }

    protected static Dictionary<string, object> DeserializeJSONToDictionary(string jsonString) {
        return SkillzSDK.MiniJSON.Json.Deserialize(jsonString) as Dictionary<string,object>;
    }
}


