using System;
using System.Reflection;
using UnityEngine;
using System.Collections.Generic;
using System.Linq;
using SkillzSDK;
using System.Globalization;
using System.IO;
using System.Xml;
#if UNITY_EDITOR
using UnityEditor;



namespace SkillzEditor
{
	/// <summary>
	/// Generates a SkillzDelegate object for the developer.
	/// </summary>
	public static class SkillzDelegateGenerator
	{
		[MenuItem("Skillz/Generate Delegate")]
		public static void GenerateDelegate()
		{
			//Generate Manifest before Generating The Delegate
			ManifestGenerator.GenerateManifest();

			//Find the child classes that inherit from our delegates.
			Type baseDel = typeof(SkillzDelegateBase),
				 turnBasedDel = typeof(SkillzDelegateTurnBased);
			Type[] baseChildren = GetChildClasses(baseDel),
				   turnBasedChildren = GetChildClasses(turnBasedDel);

			//Make sure there is only at most 1 of each delegate type.
			if (baseChildren.Length > 1)
			{
				PrintChildClassesError(baseDel,  baseChildren);
				return;
			}
			if (turnBasedChildren.Length > 1)
			{
				PrintChildClassesError(turnBasedDel,  turnBasedChildren);
				return;
			}

			//Make sure the developer implemented all necessary delegates.
			bool usesThisSystem = (baseChildren.Length == 1),
				 usesTurnBased = (turnBasedChildren.Length == 1);

			//Create the object and add scripts to it.
			GameObject delegateObj = new GameObject("SkillzDelegate");
			SkillzDelegate skillzDelegate = delegateObj.AddComponent<SkillzDelegate>();
		}

		[MenuItem("Skillz/Regenerate Android Manifest")]
		public static void RegenerateAndroidManifest()
		{
			ManifestGenerator.GenerateManifest ();
		}

		private static Type[] GetChildClasses(Type baseClass)
		{
			return Assembly.GetExecutingAssembly().GetTypes().Where(t => t.IsClass && t != baseClass && baseClass.IsAssignableFrom(t)).ToArray();
		}
		private static void PrintChildClassesError(Type baseClass, Type[] childClasses)
		{
			string listOfChildren = "{";
			foreach (Type t in childClasses)
			{
				listOfChildren += t.ToString() + ", ";
			}
			listOfChildren = listOfChildren.Substring(0, listOfChildren.Length - 2) + "}";

			UnityEngine.Debug.LogError("There should only be one class inheriting from '" + baseClass.ToString() +
			                           ", but there are " + childClasses.Length.ToString() + ": " + listOfChildren);
		}

		[MenuItem("Skillz/Update Unity Gradle Version")]
		public static void UpdateUnityGradleVersion()
		{
			//Copy the old Gradle version inside Skillz/Editor/Build/OldGradleVersion/lib/ for safekeeping
			CopyOldGradleVersion();
			var skillzUpdatedGradlePath = Path.Combine(Application.dataPath,"Skillz/Build/Editor/lib");
			var unityGradlePath = "/Applications/Unity/PlaybackEngines/AndroidPlayer/Tools/gradle/lib";
			//copy over Skillz/Resources/lib to whatever is the path of Unity gradle lib
			FileUtil.DeleteFileOrDirectory (unityGradlePath);
			var info = new DirectoryInfo(skillzUpdatedGradlePath);
			var fileInfo = info.GetFiles();
			foreach (string file in System.IO.Directory.GetFiles(skillzUpdatedGradlePath))
			{
				var currentFile = Path.GetFileName(file);
				FileUtil.CopyFileOrDirectory (file, unityGradlePath+"/"+currentFile);
			}
			FileUtil.CopyFileOrDirectory (skillzUpdatedGradlePath+"/plugins", unityGradlePath+"/plugins");
			UnityEngine.Debug.Log("Finished Updating Gradle Version");
		}

		private static void CopyOldGradleVersion()
		{
			var NewFolderForOldGradle = Directory.CreateDirectory("Assets/Skillz/Build/Editor/OldGradleVersion/lib");
			var NewFolderForOldGradlePath = "Assets/Skillz/Build/Editor/OldGradleVersion/lib";
			var unityGradlePath = "/Applications/Unity/PlaybackEngines/AndroidPlayer/Tools/gradle/lib";
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

	public class ManifestGenerator
	{
		private static string androidPluginDirectory = Path.Combine(Application.dataPath, "Plugins/Android/");
		private static string androidManifestPath = "Plugins/Android/AndroidManifest.xml";
		private static string buildGradlePath = "Plugins/Android/mainTemplate.gradle";
		private static string skillzDefaultAndroidManifestPath = "Assets/Skillz/Resources/DefaultAndroidManifest.xml";
		private static string skillzDefaultGradlePath = "Assets/Skillz/Resources/mainTemplate.gradle";

		public static void GenerateManifest()
		{
			var androidManifestOutputFile = Path.Combine(Application.dataPath, androidManifestPath);
			var buildGradleOutputFile = Path.Combine(Application.dataPath, buildGradlePath);
			// Creating directory where the default Build.gradle and the Android Manifest will be copied into
			Directory.CreateDirectory(Path.GetDirectoryName(androidPluginDirectory));

			// If file doesn't exist, create default Android Manifest and Build.gradle
			if (!File.Exists (androidManifestOutputFile) && !File.Exists (buildGradleOutputFile)) {
				ManifestGenerator.CreateDefaultAndroidManifest ();
				ManifestGenerator.CreateDefaultBuildGradle ();

				//prompt here
				string orientationString;
				bool orientationBool = EditorUtility.DisplayDialog ("Choose Orientation", "Choose which orientation your game uses for Skillz:",
					                       "portrait", "landscape");
				if (orientationBool) {
					orientationString = "portrait";
				} else {
					orientationString = "landscape";
				}

				UpdateManifest (androidManifestOutputFile, orientationString);
			} else {
				Debug.Log ("Delete Android Manifest and Build.Gradle inside Plugins/Android if you want to regenerate these files");
			}

		}

		public static void UpdateManifest(string androidManifestPath, string orientationString)
		{
			string skillzOrientationMetaDataName = "skillz_orientation";

			XmlDocument doc = new XmlDocument();
			doc.Load(androidManifestPath);

			XmlNode applicationNode = doc.FirstChild.NextSibling.FirstChild.NextSibling;
			string androidPrefix = applicationNode.GetNamespaceOfPrefix("android");

			// add the the Skillz Orientation Meta Tag
			// <meta-data android:name="skillz_orientation" android:value="portrait" />
			XmlElement skillzOrientationElement = doc.CreateElement("meta-data");
			skillzOrientationElement.SetAttribute("name", androidPrefix, skillzOrientationMetaDataName);
			skillzOrientationElement.SetAttribute("value", androidPrefix, orientationString); //be able to set this programmatically
			applicationNode.AppendChild(skillzOrientationElement);


			// Save the document formatted
			XmlWriterSettings settings = new XmlWriterSettings
			{
				Indent = true,
				IndentChars = "  ",
				NewLineChars = "\r\n",
				NewLineHandling = NewLineHandling.Replace
			};

			using (XmlWriter xmlWriter = XmlWriter.Create(androidManifestPath, settings))
			{
				doc.Save(xmlWriter);
			}
		}

		private static void CreateDefaultAndroidManifest()
		{
			FileUtil.CopyFileOrDirectory(skillzDefaultAndroidManifestPath, "Assets/" + androidManifestPath);
		}

		private static void CreateDefaultBuildGradle()
		{
			FileUtil.CopyFileOrDirectory(skillzDefaultGradlePath, "Assets/" + buildGradlePath);
		}
	}

}

#endif
