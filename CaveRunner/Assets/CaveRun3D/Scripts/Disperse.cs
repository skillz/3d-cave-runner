using UnityEngine;

public sealed class Dispserse : MonoBehaviour
{
    //This script is used to make the bats fly away, it basically takes all the objects within, adds a rigidbody
    //to them, then throws them away in different directions

    float RemoveAfter = 5; //destroy this gameObject after a few seconds

    bool ShouldUseGravity = false; //The useGravity setting. If it's on false the objects will not fall down with gravity. If it's on true , they will fall down with gravity

    Vector2 DisperseRangeX = new Vector2(-4, 4); //x range of the disperse velocity
    Vector2 DisperseRangeY = new Vector2(3, 6); //y range of the disperse velocity
    Vector2 DisperseRangeZ = new Vector2(10, 12); //z range of the disperse velocity

    void Start()
    {
        //Go through all the objects within this group and perform the following actions on them
        foreach (Transform ObjectToDisperse in transform)
        {
            ObjectToDisperse.gameObject.AddComponent<Rigidbody>(); //Add a rigidbody to this object so it can be affected by forces
            ObjectToDisperse.GetComponent<Rigidbody>().useGravity = ShouldUseGravity; //Change the useGravity setting. If it's on false the objects will not fall down with gravity. If it's on true , they will fall down with gravity

            ObjectToDisperse.GetComponent<Rigidbody>().velocity = new Vector3(
                Random.Range(DisperseRangeX.x, DisperseRangeX.y),
                Random.Range(DisperseRangeY.x, DisperseRangeY.y),
                Random.Range(DisperseRangeZ.x, DisperseRangeZ.y)
            );
        }

        Destroy(gameObject, RemoveAfter); //Destroy the gameobject after a few seconds
    }
}