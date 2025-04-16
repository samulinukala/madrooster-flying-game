using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class colorchangePowerup : MonoBehaviour
{
    public Color powerupColor;
    public SpriteRenderer spriteRenderer;
    
    public float currentHue;
    public float currentSaturation;
    public float currentBrightness;
    public float changeSpeed = 15f;
  

    // Start is called before the first frame update
    void Start()
    {
        Color.RGBToHSV(powerupColor, out currentHue, out currentSaturation, out currentBrightness);
    }

    // Update is called once per frame
    void Update()
    {
       
        if (FindObjectOfType<playerScripts>().powerUpActive)
        {
            spriteRenderer.enabled = true;
            currentHue = currentHue + Time.deltaTime / changeSpeed;
            powerupColor = Color.HSVToRGB(currentHue, currentSaturation, currentBrightness);
            if (currentHue > 1)
            {
                currentHue = 0;
            }
            spriteRenderer.color = powerupColor;

        }
        else
        {
            spriteRenderer.enabled = false;
        }
    }
}
