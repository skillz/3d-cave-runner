using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

public sealed class ScoreScreen : MonoBehaviour
{
    //This script is used to dispaly the score screen at the end of the game, where two values ( distance and gems collected ) are added to teh total score
    public GUISkin GUIskin; //The skin gui we'll use

    private float originalWidth = 600.0f;  // define here the original resolution
    private float originalHeight = 1024.0f; // you used to create the GUI contents
    private Vector3 scale;
    private int smallBoxHeight = 200;
    private int smallBoxWidth = 600;
    private int ButtonHeight = 110;
    private int ButtonWidth = 420;

    public int GemValue = 100; //The value of a single gem in points
    public int DistanceValue = 10; //The value of a single meter of distance in points

    private float TotalDistance = 0; //The total distance passed
    private float TotalDistanceCurrent = 0; //The current total score, used to animate the score rising from 0 to TotalScore

    private int TotalGems = 0; //The total gems collected
    private int TotalGemsCurrent = 0; //The current total score, used to animate the score rising from 0 to TotalScore

    private float TotalScore = 0; //The total score calculated from both distance and gems collected
    private float TotalScoreCurrent = 0; //The current total score, used to animate the score rising from 0 to TotalScore

    public bool HasSubmittedScore = false;


    private void Start()
    {
        TotalDistance = PlayerPrefs.GetFloat("TotalDistance"); //Get the distance value from PlayerPrefs, which is used to hold values on your local machine even after you shutdown the game
        TotalGems = PlayerPrefs.GetInt("TotalGems"); //Get the number of gems from PlayerPrefs, which is used to hold values on your local machine even after you shutdown the game

        TotalScore = TotalDistance * DistanceValue + TotalGems * GemValue; //Calculate the total score from the gems and distance multiplied by their respective values

        var data = new Dictionary<string, string>();
        data["Gems"] = TotalGems.ToString();
        data["TotalDistance"] = TotalDistance.ToString();
        data["TotalScore"] = TotalScore.ToString();
        HasSubmittedScore = false;
    }

    private void OnGUI()
    {
        scale.x = Screen.width / originalWidth; // calculate hor scale
        scale.y = Screen.height / originalHeight; // calculate vert scale
        scale.z = 1;
        var svMat = GUI.matrix; // save current matrix
                                // substitute matrix - only scale is altered from standard
        GUI.matrix = Matrix4x4.TRS(Vector3.zero, Quaternion.identity, scale);
        // draw your GUI controls here:

        GUI.skin = GUIskin; //The skin gui we'll use

        // if ( TotalScoreCurrent < TotalScore ) //If we haven't reached the TotalScore, keep counting up to it
        // {
        //  int addS = 0.005f*TotalScore;
        //  if (addS== 0)
        //      addS = 1;
        //  TotalScoreCurrent+=addS; //Count up from 0 to the value of TotalScore smoothly
        // }
        //
        // if (TotalScoreCurrent > TotalScore) {
        //  TotalScoreCurrent = TotalScore;
        // }

        if (TotalGemsCurrent < TotalGems) //If we haven't reached the TotalScore, keep counting up to it
        {
            int addG = (int)Math.Round(0.01f * TotalGems);
            if (addG == 0)
                addG = 1;
            TotalGemsCurrent += addG; //Count up from 0 to the value of TotalScore smoothly
        }

        if (TotalGemsCurrent >= TotalGems)
        {
            TotalGemsCurrent = TotalGems;
        }

        if (TotalDistanceCurrent < TotalDistance) //If we haven't reached the TotalScore, keep counting up to it
        {
            float addD = 0.01f * TotalDistance;
            if (addD == 0)
                addD = 1;
            TotalDistanceCurrent += addD; //Count up from 0 to the value of TotalScore smoothly
        }

        if (TotalDistanceCurrent >= TotalDistance)
        {
            TotalDistanceCurrent = TotalDistance;
        }

        TotalScoreCurrent = TotalDistanceCurrent * DistanceValue + TotalGemsCurrent * GemValue;

        //Display 3 boxes, the first showing total distance passed and multiplied by the value of each meter, the second showing total gems collected and multiplied by the value of a gem, and finally a bigger box showing the
        //total score.
        int offset = 70;
        GUI.Box(new Rect((originalWidth - smallBoxWidth * 0.85f) / 2, originalHeight - 900 + offset, smallBoxWidth * 0.85f, smallBoxHeight * 0.85f), "Total Distance:\n" + TotalDistanceCurrent.ToString("F1") + "M" + " X " + DistanceValue.ToString());
        GUI.Box(new Rect((originalWidth - smallBoxWidth * 0.85f) / 2, originalHeight - 675 + offset, smallBoxWidth * 0.85f, smallBoxHeight * 0.85f), "Total Gems: \n" + TotalGemsCurrent.ToString() + " X " + GemValue.ToString());
        GUI.Box(new Rect((originalWidth - smallBoxWidth * 0.85f) / 2, originalHeight - 455 + offset, smallBoxWidth * 0.85f, smallBoxHeight * 0.85f), "Total Score \n" + TotalScoreCurrent.ToString("F0"));

        var buttonRect = new Rect((originalWidth / 2) - (ButtonWidth / 2), originalHeight - ButtonHeight - 25, ButtonWidth, ButtonHeight);
        //Debug.Log("button Rect: " + buttonRect.ToString());
        if (GUI.Button(buttonRect, "Submit Score"))
        {
            StartCoroutine("SubmitScore"); //Run the menu item function which is inside a MenuItem script component attached to a prefab
        } 
    }

    private IEnumerator SubmitScore()
    {
        yield return new WaitForSeconds(2);

        if (!HasSubmittedScore)
        {
            HasSubmittedScore = true;
            var metrics = new Dictionary<string, string>();
            metrics["score"] = TotalScore.ToString("F0");
            Debug.Log("SUBMIT FINAL SCORE");
            SkillzCrossPlatform.ReportFinalScore(metrics["score"]);
        }
    }
}