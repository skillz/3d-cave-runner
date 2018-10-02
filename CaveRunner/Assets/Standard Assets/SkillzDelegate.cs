using UnityEngine;
using System;
using SkillzSDK;

/// <summary>
/// This Skillz Delegate script should be attached to your Skillz Delegate Game Object.
/// </summary>
public class SkillzDelegate : MonoBehaviour
{
	/// <summary>
	/// This method is called when a user starts a match from Skillz
	/// This method is required to impelement.
	/// </summary>
	public void OnMatchWillBegin() {
		// implement me
		UnityEngine.Application.LoadLevel("game");
	}

	/// <summary>
	/// This method is called when a user exits the Skillz experience (via Menu -> Exit)
	/// This method is optional to impelement. This method is usually used only if your game has its own Main Menu.
	/// </summary>
	public void OnSkillzWillExit() {
		// implement me
		UnityEngine.Application.LoadLevel("start");
	}

	public int GameID = 0;
	public SkillzSDK.Environment SkillzEnvironment = SkillzSDK.Environment.Sandbox;

	private static bool initializedYet = false;
	/// <summary>
	/// Once the scene starts up, this script initializes Skillz
	/// and makes the owner GameObject persistent through scene changes.
	/// </summary>
	void Awake()
	{
		#if UNITY_IOS
		//If Skillz has already been initialized, then an instance of this delegate object already exists.
            if (initializedYet)
            {
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

	private static void AndroidInitialize(string gameId, string environment)
	{
		if (Application.platform == RuntimePlatform.Android)
		{
			string environmentString;
			if (environment == "Sandbox")
			{
				environmentString = "false";
			}
			else
			{
				environmentString = "true";
			}
			GetSkillzPreferences().CallStatic("setUnityGameId",GetCurrentActivity(), gameId);
			GetSkillzPreferences().CallStatic("setUnityGameEnvironment",GetCurrentActivity(), environmentString);
		}
		else
		{
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
}
