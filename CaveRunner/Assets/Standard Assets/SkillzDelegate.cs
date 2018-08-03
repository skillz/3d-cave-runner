using UnityEngine;
using System;
using SkillzSDK;
using System.Collections.Generic;
using UnityEngine.SceneManagement;

/// <summary>
/// This Skillz Delegate script should be attached to your Skillz Delegate Game Object, and will forward messages to your SkillzMatchDelegate or SkillzSyncDelegate implementation.
/// Please do not modify this file.
/// </summary>
public class SkillzDelegate : SkillzAbstractDelegate
{
    public static SkillzMatchDelegate _delegate;
    public static SkillzSyncDelegate _syncDelegate;

    public static void AssignSkillzDelegate(SkillzMatchDelegate skillzDelegate) 
    {
        _delegate = skillzDelegate;
    }

    public static void AssignSkillzDelegate(SkillzSyncDelegate skillzSyncDelegate) 
    {
        _syncDelegate = skillzSyncDelegate;

        #if UNITY_ANDROID
            Skillz.InitializeSyncDelegate(skillzSyncDelegate);
        #elif UNITY_IOS
            SkillzSDK.Api.InitializeSyncDelegate(skillzSyncDelegate);
        #endif
    }

	/// <summary>
	/// This method is called when a user starts a match from Skillz
	/// This method is required to impelement.
	/// </summary>
	private void OnMatchWillBegin(String matchInfoJsonString) 
    {
		Dictionary<string, object> matchInfoDict = DeserializeJSONToDictionary(matchInfoJsonString);
		SkillzSDK.Match matchInfo = new SkillzSDK.Match(matchInfoDict);

        if (_delegate != null) {
            _delegate.OnMatchWillBegin (matchInfo);
        } else {
            // We must re-initialize the sync delegate on Android for each match.
            #if UNITY_ANDROID
               Skillz.InitializeSyncDelegate(_syncDelegate);
            #endif
            _syncDelegate.OnMatchWillBegin (matchInfo);
        }
	}

	/// <summary>
	/// This method is called when a user exits the Skillz experience (via Menu -> Exit)
	/// This method is optional to impelement. This method is usually used only if your game has its own Main Menu.
	/// </summary>
    private void OnSkillzWillExit() 
    {
        if (_delegate != null) {
            _delegate.OnSkillzWillExit ();
        } else {
            _syncDelegate.OnSkillzWillExit ();
        }
	}
}
