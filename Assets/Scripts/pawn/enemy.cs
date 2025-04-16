
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SocialPlatforms;

public class enemy : MonoBehaviour
{
    public Rigidbody2D rigidbody2D;
    public playerScripts playerMovement;
    public float maxSpeed=40;
    public float trackInterval=0;
    public float trackIntervalTarget=0.75f;
    public float turnspeed=5f;
    public GameObject particles;
    public float speedMultiplier;
    [Range(0,100)]
    public float PowerUpDropChance;
    public GameObject powerUp;
    public int scoreValue;
    private gameManager gameManager;
    private missileWarningSystem missile;
    public float inertTime =3f;
    


    public powerUpHolder powerUpHolder=>FindObjectOfType<powerUpHolder>();

   

    // Start is called before the first frame update
    void Start()
    {
        playerMovement=FindObjectOfType<playerScripts>();
        rigidbody2D = gameObject.GetComponent<Rigidbody2D>();
        gameManager = FindObjectOfType<gameManager>();
        missile = FindObjectOfType<missileWarningSystem>();
    }
    public void takeDamage()
    {
        dropPowerUp();
        Instantiate(particles, transform.position, Quaternion.identity);
        gameManager.ScoreCounter += scoreValue;
        Destroy(gameObject);
    }
    void dropPowerUp()
    {
        float rand=Random.Range(0,100);
        if (PowerUpDropChance > rand)
        {
            var tmp=Instantiate(powerUp);
            tmp.transform.parent=powerUpHolder.transform;
            tmp.transform.position = transform.position;
        }
    }
    // Update is called once per frame
    void Update()
    {
        if(inertTime<=0) inertTime-=Time.deltaTime;
        rotatePlayer();
        trackPlayer();
        limitSpeed();
        if (inertTime == 0 ||inertTime > 0)
        {
            inertTime -= Time.deltaTime;
        }
    }
    void rotatePlayer()
    {
        var dir = rigidbody2D.velocity;
        var angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;
        rigidbody2D.MoveRotation(angle);
    }
    void limitSpeed()
    {
        if(rigidbody2D.velocity.magnitude > maxSpeed)
        {
            //scale vector to correct magnitude
         
          rigidbody2D.velocity= rigidbody2D.velocity.normalized*maxSpeed;
        }
        if (rigidbody2D.angularVelocity > turnspeed)
        {
            rigidbody2D.angularVelocity=turnspeed;
        }
    }
   
    void trackPlayer()
    {
        if (trackInterval < trackIntervalTarget)
        {
         trackInterval+=Time.deltaTime;

        }
        else
        {
            trackInterval=0;
            rigidbody2D.AddForce(new Vector2(playerMovement.gameObject.transform.position.x - transform.position.x, playerMovement.gameObject.transform.position.y - transform.position.y)*speedMultiplier, ForceMode2D.Force);
        }
        
        

    }
    private void OnTriggerEnter2D(Collider2D collision)
    {

        var player = collision.GetComponent<playerScripts>();
        if (player != null)
        {
            missile.reciveEnemyData(this.transform);
        }

    }
    private void OnCollisionEnter2D(Collision2D collision)
    {
     
        if (collision.gameObject.GetComponent<playerScripts>() != null)
        {
            collision.collider.gameObject.GetComponent<playerScripts>().damagePlayer();
            takeDamage();
        }
        if (collision.gameObject.GetComponent<enemy>()  && inertTime <0.1)
        {
            Debug.Log("hit");
            Debug.Log("GotInIf");
               collision.gameObject.GetComponent<enemy>().takeDamage();
                takeDamage();
         }
        if (collision.gameObject.GetComponent<enemyPlane>() && inertTime <0.1)
        {
            Debug.Log("hit");
            collision.gameObject.GetComponent<enemyPlane>().takeDamage();
            takeDamage();
        }

        
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        var player = collision.GetComponent<playerScripts>();
        if (player != null)
        {
            missile.removeEnemyData(this.transform);
        }        
    }

}
