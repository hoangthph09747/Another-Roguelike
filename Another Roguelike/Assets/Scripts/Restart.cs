using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Restart : MonoBehaviour
{
    // Start is called before the first frame update
   public void Reset()
    {

        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
        SoundManager.instance.musicSource.Play();
        GameManager.instance.level = 0;
        GameManager.instance.Awake();
       
    }

    // Update is called once per frame

}
