//-----------------------------------------
//   Jason Walters
//   http://glitchbeam.com
//   @jasonrwalters
//
//   last edit on 7/15/2015
//-----------------------------------------

using UnityEngine;
using System.Collections;

public class PhysicsMove : MonoBehaviour
{
    public enum ForceType
    {
        AddForce = 0,
        AddRelativeForce = 1,
        AddRelativeTorque = 2,
        AddTorque = 3
    }

    public ForceType forceType = ForceType.AddForce;
    public ForceMode forceMode = ForceMode.Force;
    public float speed = 10.0f;

    private Rigidbody rigid;
    private Vector3 inputMove;

    // Use this for initialization
    void Start()
    {
        // reference components
        rigid = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        // create a movement vector for input
        float moveX = Input.GetAxis("Horizontal") * speed;
        float moveZ = Input.GetAxis("Vertical") * speed;
        inputMove = new Vector3(moveX, 0.0f, moveZ);
    }

    // Physics updates
    void FixedUpdate()
    {
        // per force type, will apply specified force to our object
        // ForceMode = http://docs.unity3d.com/ScriptReference/ForceMode.html
        // Rigidbody = http://docs.unity3d.com/ScriptReference/Rigidbody.html
        switch (forceType)
        {
            case ForceType.AddForce:
                // adds a force to the rigidbody
                rigid.AddForce(inputMove, forceMode);
                break;
            case ForceType.AddRelativeForce:
                // adds a force to the rigidbody relative to its coordinate system
                rigid.AddRelativeForce(inputMove, forceMode);
                break;
            case ForceType.AddRelativeTorque:
                // adds a torque to the rigidbody relative to its coordinate system
                rigid.AddRelativeTorque(inputMove, forceMode);
                break;
            case ForceType.AddTorque:
                // adds a torque to the rigidbody
                rigid.AddTorque(inputMove, forceMode);
                break;
            default:
                break;
        }
    }
}
