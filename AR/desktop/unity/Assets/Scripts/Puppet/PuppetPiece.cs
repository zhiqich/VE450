using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PuppetPiece : MonoBehaviour
{
    public GameObject puppet;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        GetComponent<MeshFilter>().mesh = puppet.GetComponent<MeshFilter>().mesh;
    }
}
