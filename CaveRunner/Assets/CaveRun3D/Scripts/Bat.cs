using UnityEngine;

public sealed class Bat : MonoBehaviour
{
    //This script is used to make bats fly around in a circle. It sets a rotation speed and orbit and makes
    //the object rotate around that point while looking in the diection of movement.

    public Vector2 OrbitDistanceRange = new Vector2(0.8f, 1.6f); //Set the orbit range, how far from the center point this object should be
    public Vector2 OrbitSpeedRange = new Vector2(100, 200); //The the speed range, how fast this object rotates around its center point

    private float OrbitSpeed = 0; //Current orbit speed, chosen randomly from a value within the range set in OrbitSpeedRange
    private int FlightDirection = 1; //The flight direction of the object, either 1 or -1

    private Vector3 PrevPos; //reciords the previous position so the object can look at the direction of its movement

    private void Start()
    {
        //Move the object forward to a random value within the range of OrbitDistanceRange
        transform.Translate(Vector3.forward * Random.Range(OrbitDistanceRange.x, OrbitDistanceRange.y), Space.World);

        //Move the object up to a random value within the range of OrbitDistanceRange
        transform.Translate(Vector3.up * Random.Range(OrbitDistanceRange.x, OrbitDistanceRange.y), Space.World);

        //Set the orbit speed to a random value within the range of OrbitSpeedRange
        OrbitSpeed = Random.Range(OrbitSpeedRange.x, OrbitSpeedRange.y);

        //Rotate the object to a random value between 0 and 360
        transform.Rotate(Vector3.up * Random.value * 360, Space.World);

        //Set the direction of mevement randomly, either 1 or -1
        if (Random.value > 0.5f) FlightDirection = -1;
    }

    private void Update()
    {
        //Record the previous position so we know where the object came from and are able to make it look in the direction of movement
        PrevPos = transform.position;

        //Rotate around the center point at the speed set by OrbitSpeed
        transform.RotateAround(transform.parent.position, Vector3.up, OrbitSpeed * Time.deltaTime * FlightDirection);

        //Look at the previous position. This will make the object seem to be moving in reverse, so in the next line we'll rotate the object 180 degrees so it move forward
        transform.LookAt(PrevPos);

        //Fix direction by rotating it 180 degrees, so the object seems to be moving forward
        transform.Rotate(Vector3.up * 180, Space.World);

        //Play the bat flying animation
        GetComponent<Animation>().Play("Fly");

        //Set the aniamtion speed to fit with the movement speed
        GetComponent<Animation>()["Fly"].speed = (OrbitSpeed / 100);
    }
}