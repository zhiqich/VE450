using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class WebRequest : MonoBehaviour
{
    public Text info;
    bool idLock;
    // int count;

    IEnumerator GetRequest(string uri)
    {
        idLock = true;
        // Debug.Log(count++);
        using (UnityWebRequest webRequest = UnityWebRequest.Get(uri))
        {
            yield return webRequest.SendWebRequest();
            string[] pages = uri.Split('/');
            int page = pages.Length - 1;
            if (webRequest.isNetworkError)
            {
                // Debug.Log(pages[page] + ": Error: " + webRequest.error);
                Debug.Log("Fail!");
                info.text = "Fail";
            }
            else
            {
                // Debug.Log(pages[page] + ":\nReceived: " + webRequest.downloadHandler.text);
                Debug.Log("Success!");
                // info.text = "Success";
                info.text = webRequest.downloadHandler.text;
            }
        }
        idLock = false;
    }

    // Start is called before the first frame update
    void Start()
    {
        idLock = false;
        // count = 0;
        // StartCoroutine(GetRequest("https://www.google.com/"));
    }

    // Update is called once per frame
    void Update()
    {
        if (idLock == false)
        {
            StartCoroutine(GetRequest("https://phpmyadmin-dot-graphic-outlook-279320.appspot.com/get_positions.php?id=1"));
        }
    }
}
