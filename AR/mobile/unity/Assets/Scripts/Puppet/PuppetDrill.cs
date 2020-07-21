using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PuppetDrill : MonoBehaviour
{
    public GameObject puppet;

    // Start is called before the first frame update
    void Start()
    {
        transform.localPosition = puppet.transform.localPosition;
    }

    // Update is called once per frame
    void Update()
    {
        transform.localPosition = puppet.transform.localPosition;
    }
}
