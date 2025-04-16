using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "highScore",menuName ="Scriptableobjects/SpawnManagerScriptableObject") ]
public class highScoreSO : ScriptableObject
{
    public int highscore=0;
    public List<int> highscores;
}
