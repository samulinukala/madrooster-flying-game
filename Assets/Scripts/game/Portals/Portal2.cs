using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Portal2 : MonoBehaviour
{
    public GameObject portal;
    public float distanceToTarget;
    private Vector2 portalOut;

    private void Start()
    {
        portalOut = new Vector2(portal.transform.position.x + 50f, portal.transform.position.y);
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.GetComponent<playerScripts>() != null)
        {
            
            collision.transform.position = Vector2.MoveTowards(portal.transform.position, portalOut, distanceToTarget);
        }
    }
}