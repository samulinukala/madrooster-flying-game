
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
public class playerScripts : MonoBehaviour
{
    
    public float moveSpeed=13;
    public PlayerInput input;
    public int health=4;
    public bool inTheLevel=false;
    public Vector2 newPos = new Vector2();
    public Vector2 direction = Vector2.zero;
    public float angle;
    public Vector3 rotationVector;
    public int score=0;
    public Rigidbody2D Rigidbody2D;
    public float turnspeed = 5f;
    
    public invincibilityEffect invincibilityEffect=>FindObjectOfType<invincibilityEffect>();
    public bool IsAlive => health <= 0;
    public bool powerUpActive = false;
    public float powerUpTimer = 0;
    public float powerUpTimerTarget = 10;
    public Sprite playerSprite;
    public Sprite playerSpritePowerUp;
    public SpriteRenderer playerImage;
    public AudioSource MovementAudio;
    public AudioSource PowerUpSFX;
    public AudioSource BackgroundMusic;
    public bool DoOnce = false;
    public float MovementVolume;
    public float sensitivity=0.80f;
    public float maxSpeed;
    // Start is called before the first frame update
    void Start()
    {
        
        input = GetComponent<PlayerInput>();
        MovementAudio.Play();
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (powerUpActive == true)
        {
            if(DoOnce == false)
            {
                BackgroundMusic.Pause();
                PowerUpSFX.Play();
                DoOnce = true;
            }
            playerImage.sprite = playerSpritePowerUp;
          
            if (powerUpTimer > powerUpTimerTarget)
            {
                powerUpTimer = 0;
                powerUpActive = false;
                DoOnce = false;
                PowerUpSFX.Stop();
                BackgroundMusic.UnPause();
            }
            else
            {
                powerUpTimer += 1 * Time.deltaTime;
            }
        }
        else
        {
            playerImage.sprite = playerSprite;
        }

        MovePlayer();
        rotatePlayer();
     
        
    }
    private void rotatePlayer()
    {
        var dir = Rigidbody2D.velocity;
        var angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;
        Debug.Log(angle);
        Rigidbody2D.MoveRotation(angle);        
    }
    
private void MovePlayer()
    {        
        Vector2 direction = Vector2.zero;
        
      direction = input.actions["move"].ReadValue<Vector2>();
        
        Vector2 movement = new Vector2( direction.x*moveSpeed*Time.deltaTime ,  direction.y *moveSpeed * Time.deltaTime);
        //new vector lerp between 
        if (movement.x > 0)
        {
            Vector2 actualMovement = Vector2.Lerp(Rigidbody2D.velocity.normalized, movement, sensitivity);
            movement = actualMovement;
        }
        MovementVolume = movement.magnitude * 20;
        MovementAudio.volume = MovementVolume;
        if(MovementVolume < 0.2) MovementVolume = 0f;
        
        Rigidbody2D.AddForce(movement,ForceMode2D.Force);

        if (Rigidbody2D.angularVelocity > turnspeed)
        {
            Rigidbody2D.angularVelocity=turnspeed;
        }
        if (Rigidbody2D.velocity.magnitude > maxSpeed)
        {
            Rigidbody2D.velocity =Rigidbody2D.velocity.normalized* maxSpeed;
        }
    }
    //private void easeInQuint(float x: number): number {
    //return x* x * x* x * x;
    //    }   
public void damagePlayer()
    {
        if (true!=invincibilityEffect.invicible&&true!=powerUpActive)
        {
            health = health - 1;
            invincibilityEffect.invicible = true;
        }
    }
 
    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (powerUpActive == true)
        {
            var enemyPlane = collision.gameObject.GetComponent<enemyPlane>();
            if (enemyPlane != null)
            {
                enemyPlane.takeDamageInstant();
            }
        }
    }
}
