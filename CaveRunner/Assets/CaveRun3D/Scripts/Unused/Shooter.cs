using UnityEngine;

public sealed class Shooter : MonoBehaviour
{
    //This script was intended to created shooter type of obstacle, one that shoots objects at the player
    //I chose to exclude it from the game wither because it didn't work correctly or I didn't find a useful use for it.
    //I might include it in the game in a later update. You can still try to make use of it if you want

    GameObject Player;

    Transform ShotObject;
    private Transform ShotObjectCopy;

    Transform HitEffect;

    float ShotSpeed = 0.2f;

    float ShotRate = 1;
    private float ShotTime = 0;

    Vector3 ShotOffset = new Vector3(0, 0, 0);

    float DestroyAfter = 10;

    private void Start()
    {
        Player = GameObject.FindWithTag("Player");

        Destroy(gameObject, DestroyAfter);
    }


    private void Update()
    {
        if (Player)
        {
            if (ShotTime < ShotRate)
            {
                ShotTime += Time.deltaTime;
            }
            else
            {
                ShotTime = 0;

                ShotObjectCopy = Instantiate(ShotObject, transform.position, Quaternion.identity);
                ShotObjectCopy.parent = null;
                Destroy(ShotObjectCopy.gameObject, 4);
                ShotObjectCopy.Translate(ShotOffset, Space.Self);
                ShotObjectCopy.transform.LookAt(Player.transform.position);
                //ShotObjectCopy.rigidbody.AddForce(transform.forward * ShotSpeed, ForceMode.Impulse);
                ShotObjectCopy.GetComponent<Rigidbody>().AddForce(transform.forward * ShotSpeed, ForceMode.Impulse);

            }
        }

    }
}