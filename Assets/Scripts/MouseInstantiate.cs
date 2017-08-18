//-----------------------------------------
//   Jason Walters
//   http://glitchbeam.com
//   @jasonrwalters
//
//   last edit on 7/15/2015
//-----------------------------------------

using UnityEngine;
using System.Collections;

public class MouseInstantiate : MonoBehaviour
{
    public GameObject spawnObject;

    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        AddObjects();
    }

    void AddObjects()
    {
        if (Input.GetButtonDown("Fire1"))
        {
            // get camera height
            float camHeight = Camera.main.transform.position.y;

            // gets mouse position and converts to world units
            Vector2 mPos = Input.mousePosition;
            Vector3 mWorldPos = Camera.main.ScreenToWorldPoint(new Vector3(mPos.x, mPos.y, camHeight));
            Vector3 mWorldPosNew = new Vector3(mWorldPos.x, 3.0f, mWorldPos.z);
            // spawn object at mouse location
            Instantiate(spawnObject, mWorldPosNew, spawnObject.transform.localRotation);
        }
    }
}
