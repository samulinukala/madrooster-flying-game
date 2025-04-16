using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class healthbarforplanes : MonoBehaviour
{
    public GameObject Damage1;
    public GameObject Damage2;
    public enemyPlane enemyPlane;
    public int triggerForEffect1;
    public int triggerForEffect2;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (enemyPlane.health <triggerForEffect1)
        {
            Damage1.SetActive(true);

        }else if (enemyPlane.health < triggerForEffect2)
        {
            Damage2.SetActive(true);
        }
        else
        {
            Damage1.SetActive(false);
            Damage2.SetActive(false);
        }
    }
}
