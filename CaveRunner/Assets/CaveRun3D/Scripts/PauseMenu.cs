using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

public class PauseMenu : MonoBehaviour {

	private GUIStyle sliderStylethumb;
	private GUIStyle sliderStyle;
	private GUIStyle menuStyle;
	private GUIStyle subtitleStyle;
	private GUIStyle titleStyle;

	public Texture2D menuTexture;
	public Texture2D thumbTexture;
	public Texture2D sliderTexture;
	public Font font;
	public Font smallFont;

	private int borderDistance;

	private int menuXStart;
	private int menuYStart;
	private float menuWidth;
	private float menuHeight;
	private int menuItemHeight;

	private float sliderWidthPercent;
	private float sliderXStart;
	private float sliderYStart;
	private float elementOffset;
	private float sliderWidth;

	private float musicSliderValue;
	private float SFXSliderValue;

	// Use this for initialization
	void Start () {
		borderDistance = 50;
		InitStyle();
		InitUIDimensions();
		InitSliderValues();
	}

	// Update is called once per frame
	void Update () {

	}

	void OnGUI() {

		var prevMusicValue = musicSliderValue;
		var prevSFXValue = SFXSliderValue;

		/* The menu box */
		GUI.Box (
			new Rect(menuXStart, menuYStart, menuWidth, menuHeight),
			new GUIContent(""),
			menuStyle
		);

		/* The menu title */

		GUI.Label (
			new Rect (menuXStart, borderDistance + menuHeight * 0.15f, menuWidth, menuItemHeight),
			"Audio Settings",
			titleStyle
		);

		/* Music Slider label */

		GUI.Label (
			new Rect (menuXStart, borderDistance + menuHeight * 0.35f, menuWidth, menuItemHeight),
			"Music",
			subtitleStyle
		);

		/* Music Slider */

		musicSliderValue = GUI.HorizontalSlider (
			new Rect (sliderXStart, borderDistance + menuHeight * 0.42f, sliderWidth, menuItemHeight),
			prevMusicValue, 0f, 1.0f,
			sliderStyle,
			sliderStylethumb);

		/* SFX Slider label */

		GUI.Label (
			new Rect (menuXStart, borderDistance + menuHeight * 0.55f, menuWidth, menuItemHeight),
			"SFX",
			subtitleStyle
		);

		/* SFX Slider */

		SFXSliderValue = GUI.HorizontalSlider (
			new Rect (sliderXStart, borderDistance + menuHeight * 0.62f, sliderWidth, menuItemHeight),
			prevSFXValue, 0f, 1.0f,
			sliderStyle,
			sliderStylethumb);

		if (prevMusicValue != musicSliderValue) {
			UpdateMusicVol(musicSliderValue);
		}
		if (prevSFXValue != SFXSliderValue) {
			UpdateSFXVol(SFXSliderValue);
		}
	}

	void InitStyle() {
		menuStyle = new GUIStyle ();
		menuStyle.normal.background = menuTexture; // texture for pause menu; currently "CR3D-slate-square"

		sliderStyle = new GUIStyle ();
		sliderStylethumb = new GUIStyle ();
		sliderStyle.normal.background = sliderTexture; // texture for slider; currently "Banner-UI-Slider"
		sliderStylethumb.normal.background = thumbTexture; // texture for slider adjuster; currently "CR3D-UI-Button"

		// padding allows slider adjuster to appear...????
		sliderStylethumb.padding.top = 5;
		sliderStylethumb.padding.left = 5;
		sliderStylethumb.padding.bottom = 5;
		sliderStylethumb.padding.right = 5;

		titleStyle = new GUIStyle();
		titleStyle.normal.textColor = new Color(1, 0.384f, 0, 0.702f); // make font color match the rest of the scheme
		titleStyle.font = font;
		titleStyle.alignment = TextAnchor.UpperCenter;

		subtitleStyle = new GUIStyle(titleStyle);
		subtitleStyle.font = smallFont; // use smaller font for slider titles
	}

	void InitUIDimensions() {
		menuXStart = borderDistance;
		menuYStart = borderDistance;
		menuWidth = Screen.width - borderDistance * 2;
		menuHeight = Screen.height - borderDistance * 4;

		sliderWidthPercent = .75f;
		menuItemHeight = 25;

		/* below logic is to make slider take up x percentage of the menu's width, while keeping it centered */
		sliderXStart = menuXStart + (menuWidth * (1 - sliderWidthPercent) / 2);

		sliderWidth = menuWidth * sliderWidthPercent;
	}

	void InitSliderValues() {
		musicSliderValue = SkillzCrossPlatform.getSkillzMusicVolume();
		SFXSliderValue = SkillzCrossPlatform.getSFXVolume();
	}

	void UpdateMusicVol(float newMusicVol) {
		SkillzCrossPlatform.setSkillzMusicVolume(newMusicVol);
	}

	void UpdateSFXVol(float newSFXVol) {
		SkillzCrossPlatform.setSFXVolume(newSFXVol);
	}
}
