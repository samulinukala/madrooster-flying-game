using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaserBounce : MonoBehaviour
{
    private Rigidbody2D Rigid2d;
    public playerScripts player;
    public float POWAAAA = 1f;
    // Start is called before the first frame update
    void Start()
    {
        Rigid2d = player.gameObject.GetComponent<Rigidbody2D>();
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        var player = collision.gameObject.GetComponent<playerScripts>();
        if (player != null)
        {
            Rigid2d.AddForce(force: new Vector2(
            this.transform.position.x - player.gameObject.transform.position.x,
            this.transform.position.y - player.gameObject.transform.position.y).normalized * POWAAAA);
        }
            
    }

}
