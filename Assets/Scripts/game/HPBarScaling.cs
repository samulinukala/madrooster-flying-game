using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HPBarScaling : MonoBehaviour
{
    public Camera Cam;
    public Transform target;
    public GameObject BarBackground;
     
    private void Start()
    {
        
        var halfScreenWidth = Camera.main.orthographicSize;
        var TenthScreenHeight = Camera.main.orthographicSize * 2 / 10;

        Vector3 pos = target.position;
        pos.y += 4;
        pos = Cam.WorldToScreenPoint(pos);

        BarBackground.transform.localScale = new Vector3(halfScreenWidth, TenthScreenHeight, 0);

        BarBackground.transform.position = new Vector3(halfScreenWidth, Screen.height - pos.y - 20, 100);
    }
}
