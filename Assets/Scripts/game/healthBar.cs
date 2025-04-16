using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class healthBar : MonoBehaviour
{
    private Image Healthbar;
    private int maxHealth;
    private float HealthSections;
    private playerScripts playerScripts;
    // Start is called before the first frame update
    void Start()
    {
        playerScripts = FindObjectOfType<playerScripts>();
        maxHealth = playerScripts.health;
        Healthbar = GetComponent<Image>();
        HealthSections =(float) 1 / maxHealth;
        
        //Debug.Log(HealthSections);
    }

    // Update is called once per frame
    void LateUpdate()
    {
        if(playerScripts != null)
        {
            Healthbar.transform.localScale = new Vector3(playerScripts.health * HealthSections, Healthbar.transform.localScale.y, 1f);
        }
    }
}
