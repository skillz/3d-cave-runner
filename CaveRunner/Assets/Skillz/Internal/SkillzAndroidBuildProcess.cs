#if UNITY_EDITOR && UNITY_ANDROID
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEditor.Build;
using System.IO;
using System;


class SkillzAndroidPreProcessBuild : IPreprocessBuild
{
	public int callbackOrder { get { return 0; } }
	public void OnPreprocessBuild(BuildTarget target, string path)
	{
		if (!EditorUserBuildSettings.exportAsGoogleAndroidProject) {
			UpdateUnityGradleVersion();
			UnityEngine.Debug.Log("Finished PreProcess Script");
		}
	}

	private static void UpdateUnityGradleVersion()
	{
		//Copy the old Gradle version inside Skillz/Editor/Build/OldGradleVersion/lib/ for safekeeping
		if (!EditorUserBuildSettings.exportAsGoogleAndroidProject) {
			CopyOldGradleVersion();
			var skillzUpdatedGradlePath = Path.Combine(Application.dataPath,"Skillz/Build/Editor/lib");
			var unityPath = EditorApplication.applicationPath.ToString();
			var unityGradlePath = unityPath.Substring(0, unityPath.Length-9) + "PlaybackEngines/AndroidPlayer/Tools/gradle";
			//copy over Skillz/Resources/lib to whatever is the path of Unity gradle lib
			try
			{
				FileUtil.DeleteFileOrDirectory(unityGradlePath);
				var unityGradleLibPath = unityGradlePath + "/lib";
				FileUtil.CopyFileOrDirectory(skillzUpdatedGradlePath, unityGradleLibPath);
			}
			catch (Exception err)
			{
				EditorUtility.DisplayDialog("Android PreProcessBuild Failed! Contact integrations@skillz.com to help debug your issue", err.Message, "OK");
			}

			UnityEngine.Debug.Log("Finished Updating Gradle Version");
		}
	}

	private static void CopyOldGradleVersion()
	{
		if (!EditorUserBuildSettings.exportAsGoogleAndroidProject) {
			var NewFolderForOldGradle = Directory.CreateDirectory("Assets/Skillz/Build/Editor/OldGradleVersion/lib");
			var NewFolderForOldGradlePath = "Assets/Skillz/Build/Editor/OldGradleVersion/lib";
			var unityPath = EditorApplication.applicationPath.ToString();
			var unityGradlePath = unityPath.Substring(0, unityPath.Length-9) + "PlaybackEngines/AndroidPlayer/Tools/gradle/lib";
			if (Directory.GetFiles(NewFolderForOldGradlePath).Length <= 0)
			{
				var info = new DirectoryInfo(unityGradlePath);
				var fileInfo = info.GetFiles();
				foreach (string file in System.IO.Directory.GetFiles(unityGradlePath))
				{
					var currentFile = Path.GetFileName(file);
					FileUtil.CopyFileOrDirectory (file, NewFolderForOldGradlePath+"/"+currentFile);
				}

				FileUtil.CopyFileOrDirectory (unityGradlePath+"/plugins", NewFolderForOldGradlePath+"/plugins");
				UnityEngine.Debug.Log("Finished Copying the old Gradle Version");
			}
		}
	}
}

class SkillzAndroidPostProcessBuild : IPostprocessBuild
{
	public int callbackOrder { get { return 0; } }
	public void OnPostprocessBuild(BuildTarget target, string path)
	{
		if (!EditorUserBuildSettings.exportAsGoogleAndroidProject) {
			RevertBackGradleVersion();
			UnityEngine.Debug.Log("Finished PostProcess Script");
		}
	}

	private static void RevertBackGradleVersion()
	{
		if (!EditorUserBuildSettings.exportAsGoogleAndroidProject) {
			var skillzOldGradlePath = Path.Combine(Application.dataPath,"Skillz/Build/Editor/OldGradleVersion/lib");
			var unityPath = EditorApplication.applicationPath.ToString();
			var unityGradlePath = unityPath.Substring(0, unityPath.Length-9) + "PlaybackEngines/AndroidPlayer/Tools/gradle/lib";

			try
			{
				//copy over Skillz/Resources/lib to whatever is the path of Unity gradle lib
				FileUtil.DeleteFileOrDirectory(unityGradlePath);
				//revert gradle version
				FileUtil.CopyFileOrDirectory(skillzOldGradlePath, unityGradlePath);
				//Delete OldGradleVersion folder
				FileUtil.DeleteFileOrDirectory (Path.Combine(Application.dataPath,"Skillz/Build/Editor/OldGradleVersion"));
			}
			catch (Exception err)
			{
				EditorUtility.DisplayDialog("Android PostProcessBuild Failed! Contact integrations@skillz.com to help debug your issue", err.Message, "OK");
			}

			UnityEngine.Debug.Log("Finished Reverting Gradle Version");
		}
	}
}
#endif
