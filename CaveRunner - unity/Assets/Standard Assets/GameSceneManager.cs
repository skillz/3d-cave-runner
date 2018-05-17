using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class GameSceneManager : MonoBehaviour {
	
	public static string PREV_SCENE = "prevScene";
	
	private static float TIMER_LENGTH = 0.25f;
	
	private bool startTimer;
	private float timer;
	
	void Update() {
		if (startTimer) {
			timer -= Time.deltaTime;
			
			if (timer <= 0) {
				startTimer = false;	
				SceneManager.LoadScene(GetPrevScene());
			}
		}
	}
	
	void OnApplicationPause(bool isPaused) {
		if (!isPaused) {
			startTimer = true;
			timer = TIMER_LENGTH;
		}
	}
	
	private string GetPrevScene() {
		return PlayerPrefs.GetString(PREV_SCENE);	
	}
	
	public static void SetPrevScene(string scene) {
		PlayerPrefs.SetString(GameSceneManager.PREV_SCENE, scene);
	}
}
