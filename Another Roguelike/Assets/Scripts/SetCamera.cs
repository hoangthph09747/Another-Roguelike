using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetCamera : MonoBehaviour
{
    public Camera mainCamera;
    private void Start()
    {
        SetSizeCamera();
    }
    void SetSizeCamera()
    {
        float f1;
        float f2;
        f1 = 16.0f / 9;
        f2 = Screen.width * 1.0f / Screen.height;

        mainCamera.orthographicSize *= f1 / f2;
    }
}
