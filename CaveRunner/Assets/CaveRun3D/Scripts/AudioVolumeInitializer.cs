using UnityEngine;

public class AudioVolumeInitializer : MonoBehaviour
{
    private void Awake()
    {
         AudioListener.volume = SkillzCrossPlatform.getSFXVolume();
    }
}
