using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class GameManager : MonoBehaviour
{
    public static GameManager instance = null;
    public BoardManager boardScript;
    public int playerFoodPoints = 15;

    public float levelStartDelay = 2f;                     //Thời gian chờ khi next level
    public float turnDelay = .1f;                          //Delay khi nhân vật di chuyển
    [HideInInspector] public bool playersTurn = true;

    private Text levelText;                                 //Text to display current level number.
    private GameObject levelImage;
    private GameObject RestartButton;                          //Image to block out level as levels are being set up, background for levelText.
    private GameObject OverImage;                          //Image to block out level as levels are being set up, background for levelText.
    private GameObject ExitButton;
    private Text HighScore;
 
    public int level = 0;
    public int highestLevel; 
    private List<Enemy> enemies;                            //List of all Enemy units, used to issue them move commands.
    private bool enemiesMoving;                             //Boolean to check if enemies are moving.
    private bool doingSetup = true;

  

    public void Awake()
    {
        if (instance == null)
            instance = this;
        else if (instance != this)
        Destroy(gameObject);
        DontDestroyOnLoad(gameObject);
        enemies = new List<Enemy>();
        boardScript = GetComponent<BoardManager>();

       
        
       
    }
    private void Start()
    {
        HighScore.text = PlayerPrefs.GetInt("HighScore", 0).ToString();
        HighScore.text = " ";
    }
    /* private void OnLevelWasLoaded(int index)
     {
         Debug.Log("The index " + index);
         if(index != level)
         {
             level = index;
         }
         else {
             level++;
             InitGame();
         }

     }*/
    void OnEnable()
    {
        SceneManager.sceneLoaded += Loadedscene;
    }

    void OnDisable()
    {
        SceneManager.sceneLoaded -= Loadedscene;
    }

    void Loadedscene(Scene scene, LoadSceneMode mode)
    {

        if (scene.name == "Main")
        {
            level++;
        }
        InitGame();
    }
    void InitGame()
    {
        Debug.Log("The level " + level);

        doingSetup = true;
        levelImage = GameObject.Find("LevelImage");
        RestartButton = GameObject.Find("RestartButton");
        OverImage = GameObject.Find("OverImage");
        ExitButton = GameObject.Find("ExitButton");
        HighScore = GameObject.Find("HighScore").GetComponent<Text>();
        levelText = GameObject.Find("LevelText").GetComponent<Text>();
        levelText.text = "Day " + level;
        levelImage.SetActive(true);
        RestartButton.SetActive(false);
        OverImage.SetActive(false);
        ExitButton.SetActive(false);
        HighScore.text = " ";
        Invoke("HideLevelImage", levelStartDelay);

        enemies.Clear();
        boardScript.SetupScene(level);
    }

    private void HideLevelImage()
    {
        levelImage.SetActive(false);
        doingSetup = false;
    }
   
        public void GameOver()
    {
        if(level > PlayerPrefs.GetInt("HighScore", 0))
        {
            PlayerPrefs.SetInt("HighScore", level);
        }
        
        HighScore.text = "High Score : Day " + PlayerPrefs.GetInt("HighScore", 0).ToString();
        levelText.text="After " + level +" days, you chet doi.";
        levelImage.SetActive(true);
        RestartButton.SetActive(true);
        OverImage.SetActive(true);
        ExitButton.SetActive(true);
        
    }
    void Update()
    {
        if (playersTurn || enemiesMoving || doingSetup)
            return;
        StartCoroutine(MoveEnemies());
    }
    public void AddEnemyToList(Enemy script)
    {
        enemies.Add(script);
    }
    IEnumerator MoveEnemies()
    {
        enemiesMoving = true;
        yield return new WaitForSeconds(turnDelay);
        if(enemies.Count == 0)
        {
            yield return new WaitForSeconds(turnDelay);
        }
        for(int i =0; i< enemies.Count;i++)
        {
            enemies[i].MoveEnemy();
            yield return new WaitForSeconds(enemies[i].moveTime);
        }

        playersTurn = true;
        enemiesMoving = false;
    }
}
