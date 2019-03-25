using UnityEngine;
using UnityEngine.SceneManagement;

public sealed class SkillzGameController : MonoBehaviour, SkillzMatchDelegate 
{
    public void OnMatchWillBegin(SkillzSDK.Match matchInfo)
    {
        SceneManager.LoadScene("game");
    }

    public void OnSkillzWillExit()
    {
        SceneManager.LoadScene("start");
    }
}