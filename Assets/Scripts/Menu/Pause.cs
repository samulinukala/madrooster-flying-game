using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


class Pause : MonoBehaviour
{
    public Button pauseButton;
    public bool pauseDisabled;
    
    public Sprite pauseSprite1;
    public Sprite pauseSprite2;

    public GameObject RestartBut;

    public AudioSource ButtonClickSound;
    public void PauseMethod()
    {

        if (pauseDisabled == false)
        {
            ButtonClickSound.Play();
            pauseDisabled = true;
            Time.timeScale = 0;
            pauseButton.image.sprite = pauseSprite2;
            RestartBut.SetActive(true);
        }
        else if (pauseDisabled == true)
        {
            ButtonClickSound.Play();
            pauseDisabled = false;
            Time.timeScale = 1;
            pauseButton.image.sprite = pauseSprite1;
            RestartBut.SetActive(false);
        }
    }

    public void RestartGame()
    {
        SceneManager.LoadScene(1);
    }
}



