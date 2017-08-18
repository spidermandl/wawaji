//-----------------------------------------
//   Jason Walters
//   http://glitchbeam.com
//   @jasonrwalters
//
//   last edit on 7/15/2015
//-----------------------------------------

using UnityEngine;
using System.Collections;

public class CollisionColor : MonoBehaviour
{
    private Renderer rend;

    // Use this for initialization
    void Start()
    {
        // reference components
        rend = GetComponent<Renderer>();
    }

    // Update is called once per frame
    void Update()
    {

    }

    void OnCollisionEnter(Collision col)
    {
        if (col.collider.tag == "Player")
        {
            // change material to red
            rend.material.color = Color.red;
        }
        else if (col.collider.tag == "OtherCube")
        {
            // change material to green
            rend.material.color = Color.green;
        }
    }

    void OnCollisionStay(Collision col)
    {
        if (col.collider.tag == "Player")
        {
            // change material to red
            rend.material.color = Color.red;
        }
        else if (col.collider.tag == "OtherCube")
        {
            // change material to green
            rend.material.color = Color.green;
        }
    }

    void OnCollisionExit(Collision col)
    {
        if (col.collider.tag != "Floor")
        {
            // change material to black
            rend.material.color = Color.black;
        }
    }
}
