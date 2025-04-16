using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sizechangepowerup : MonoBehaviour
{
    public GameObject spriteGO;
    public float amplitudeX = 1f;
    public float amplitudeY = 2.35f;
   public float omegaY = 4.8f;
    float index;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        index += Time.deltaTime;
        float y = Mathf.Abs(amplitudeY * Mathf.Sin(omegaY * index));
        transform.transform.localScale = new Vector3(y,y,y);
    }
}
