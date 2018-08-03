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

				UpdateManifest (androidManifestOutputFile);
			} else {
				Debug.Log ("Delete Android Manifest and Build.Gradle inside Plugins/Android if you want to regenerate these files");
			}

		}

		public static void UpdateManifest(string androidManifestPath)
		{
			XmlDocument doc = new XmlDocument();
			doc.Load(androidManifestPath);

			XmlNode applicationNode = doc.FirstChild.NextSibling.FirstChild.NextSibling;
			string androidPrefix = applicationNode.GetNamespaceOfPrefix("android");

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
