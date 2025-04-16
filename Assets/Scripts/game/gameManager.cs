using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using System.Linq;
//using Unity.Services.Mediation.Samples;
public class gameManager : MonoBehaviour
{
    public Button restartButton;//In pause menu
    public int ScoreCounter;//Basicaly the current score

    //Game over UI
    public bool gameOver;
    public TMP_Text scoreText;
    public TMP_Text gameOverScoreText;
    public GameObject GameOverCanvas;
    private float HighScoreHolder; //int that keeps track of highscore
    public TMP_Text Highscore; //Text box that the highscore is written in at gameover
    //public highScoreSO highScoreSO;

    //Reference to players script
    public playerScripts playerMovement;

    //Triggered audio
    public AudioSource GameOverAudioSource;
    public AudioSource RestartAudioSource;
    
    public monetisationData monetisationData; //As name implies, needed for ads

    public bool doOnce = false;//Makes sure gameover happens only once

    //public InterstitialExample interstitialExample;
    //public void highscoreCalc()
    //{
    //    if (survivalTimer > highScoreSO.highscore)
    //    {
    //        highScoreSO.highscore = survivalTimer;
    //    }
        
    //    highScoreSO.highscores.Add(survivalTimer);
    //    highScoreSO.highscores.OrderBy(x => x).ToList();
    //    if (highScoreSO.highscores.Count > 10)
    //    {
    //        highScoreSO.highscores.RemoveRange(9, highScoreSO.highscores.Count - 10);
    //    }
        
    //    //Score.text+=survivalTimer.ToString();
    //    Highscore.text+= highScoreSO.highscore.ToString();

    //} 
    
    public IEnumerator SoundTimer()
    {
        //Needed to give enough time for restart sound to play before new scene is loaded
        GameOverCanvas.SetActive(false);
        RestartAudioSource.Play();
        yield return new WaitForSeconds(0.4f);
        SceneManager.LoadScene(1);
    }
    public IEnumerator GameOverTimer()
    {        
        GameOverAudioSource.Play();
        yield return new WaitForSeconds(0.4f);
    }
    // Start is called before the first frame update
    private void Start()
    {
        Time.timeScale = 1;
        Application.targetFrameRate = 60;
        
    }
    private void Awake()
    {
        playerMovement=FindObjectOfType<playerScripts>();
    }
    // Update is called once per frame
    void Update()
    {
        gameOver = playerMovement.IsAlive;
        if (gameOver==false)
        {
            scoreText.text = "Score: " + ((int) ScoreCounter).ToString();            
        }
        else if (gameOver == true && doOnce == false)
        {
            //marks that an ad has been shown
            monetisationData.ammountOfTimesSinceAds += 1;

            StartCoroutine(GameOverTimer());
            GameOverCanvas.SetActive(true);

            //Deactivates objects in game when gameover triggers
            FindObjectsOfType<enemyPlane>().ToList().ForEach(e => e.gameObject.SetActive(false));
            FindObjectsOfType<enemy>().ToList().ForEach(e => e.gameObject.SetActive(false));
            FindObjectsOfType<spawnScript>().ToList().ForEach(e => e.gameObject.SetActive(false));
            GameObject.FindGameObjectWithTag("Player").SetActive(false);

            //Writes score into gameover text box
            gameOverScoreText.text = scoreText.text;

            //Gets highscore from automatically created file
            float highScore = PlayerPrefs.GetFloat("highScore");
            HighScoreHolder = highScore;
            
            if (HighScoreHolder < ScoreCounter)
            {                
                //Sets highscore from automatically created file
                PlayerPrefs.SetFloat("highScore", ScoreCounter);
                highScore = PlayerPrefs.GetFloat("highScore");                
            }
            Highscore.text = "Highscore: " + ((int)highScore).ToString();
            // interstitialExample.ShowInterstitial();
            doOnce = true;
        }

    }

    public void Restart()
    {
        StartCoroutine(SoundTimer());
    }
}
