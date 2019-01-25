using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PauseMenu : MonoBehaviour {

	private int borderDistance;
	public Texture2D texture;
	private RectOffset bdr;
	private GUIStyle style;
	public Font font;

	// Use this for initialization
	void Start () {
		borderDistance = 75;
		SetStyle();
	}

	// Update is called once per frame
	void Update () {

	}
	void OnGUI() {
		GUI.Box (
			new Rect(borderDistance, borderDistance, Screen.width - borderDistance * 2 , Screen.height - borderDistance * 4),
			new GUIContent("\n\nAudio Settings"),
			style
		);

	}
	void SetStyle() {
		style = new GUIStyle ();
		style.alignment = TextAnchor.UpperCenter; // text align property
		style.normal.background = texture; // set the background of the GUI
		style.normal.textColor = new Color(1, 0.384f, 0, 0.702f); // make font color match the rest of the scheme
		style.font = font; // font property
	}
}
