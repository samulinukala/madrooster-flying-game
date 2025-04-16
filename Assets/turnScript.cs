using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class turnScript : MonoBehaviour
{
    private GameObject player;
    private Rigidbody rb;
    public Transform target;
    public float turnSpeed = 5f;
    // Start is called before the first frame update
    void Start()
    {
        player = FindObjectOfType<playerScripts>().gameObject;
        Debug.Log(player.gameObject);
        target = player.transform;
    }

    // Update is called once per frame
    void Update()
    {
        if (player == null)
        {
            Debug.Log("no player");
        }
        else
        {
            Vector3 direction = target.position - transform.position;
            float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;
            Quaternion rotation = Quaternion.AngleAxis(angle, Vector3.forward);
            transform.rotation = Quaternion.Slerp(transform.rotation, rotation, turnSpeed * Time.deltaTime);

        }
    }
}
