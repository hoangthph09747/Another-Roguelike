using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HowToPlay : MonoBehaviour
{
    private GameObject HowToPlayImage;
    private GameObject HowToPlayButton;
    private GameObject CloseButton;

    public void Awake()
    {
        HowToPlayImage = GameObject.Find("HowToPlayImage");
        HowToPlayImage.SetActive(false);
    }
    public void howtoplay()
    {
        HowToPlayImage.SetActive(true);

    }
    public void closeHowtoplay()
    {
        HowToPlayImage.SetActive(false);
    }
}
