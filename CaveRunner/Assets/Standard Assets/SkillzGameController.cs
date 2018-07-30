using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SkillzGameController : MonoBehaviour, SkillzMatchDelegate {

    public void OnMatchWillBegin(SkillzSDK.Match matchInfo)
    {
        SceneManager.LoadScene("game");
    }

    public void OnSkillzWillExit()
    {
        SceneManager.LoadScene("start");
    } 
}
