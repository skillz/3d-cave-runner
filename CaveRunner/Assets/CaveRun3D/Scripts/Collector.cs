using UnityEngine;
using System.Collections.Generic;

public sealed class Collector : MonoBehaviour
{
    List<Stack<Transform>> gems;
    public int gemKinds = 4;
    List<Stack<Transform>>  obstacles;
    public int obstacleKinds = 8;
    List<Stack<Transform>> sections;
    public PlatformCreator kPC;
    public GameObject Shadow;

    private void Awake()
    {
        Debug.Log("Init'ing Collector");

        int i;
        gems = new List<Stack<Transform>>();
        for (i = 0; i < gemKinds; i++)
        {
            gems.Add(new Stack<Transform>());
        }
        obstacles = new List<Stack<Transform>>();
        for (i = 0; i < obstacleKinds; i++)
        {
            obstacles.Add(new Stack<Transform>());
        }
        sections = new List<Stack<Transform>>();
        for (i = 0; i < 2; i++)
        {
            sections.Add(new Stack<Transform>());
        }
    }

    private void Start()
    {
        kPC = GameObject.FindWithTag("PlatformCreator").GetComponent<PlatformCreator>();
        Shadow = GameObject.Find("Shadow");
    }

    private void Update()
    {
        if (Shadow != null)
        {
            Shadow.transform.position = new Vector3(Shadow.transform.position.x, 0, Shadow.transform.position.z);
        }
    }

    public GameObject GetSection(int sectionKind)
    {
        GameObject section = null;

        if (sections != null)
        {
            Stack<Transform> arr = sections[sectionKind];
            if (arr.Count == 0)
            {
                Transform trans;
                if (sectionKind == 0)
                {
                    trans = Instantiate(kPC.SectionEdge[0], Vector3.zero, Quaternion.identity);
                }
                else
                {
                    trans = Instantiate(kPC.SectionMiddle[0], Vector3.zero, Quaternion.identity);
                }
                section = trans.gameObject;
            }
            else
            {
                section = arr.Pop().gameObject;
                section.SetActive(true);
            }
        }

        return section;
    }

    public GameObject GetGem(int gemKind)
    {
        //Debug.Log("GetGem:" + gemKind);

        var gemStack = gems[gemKind];
        if (gemStack.Count == 0)
        {
            Transform trans = Instantiate(kPC.Gem[gemKind], Vector3.zero, Quaternion.identity);
            //Debug.Log("GetGemInstantiate");
            trans.localScale = Vector3.one * 4.5f;
            return trans.gameObject;
        }
        else
        {
            GameObject gem = gemStack.Pop().gameObject;
            gem.SetActive(true);
            return gem;
        }
    }

    public GameObject GetObstacle(int obstacleKind)
    {
        //Debug.Log("GetObstacle:" + obstacleKind);
        if (obstacles != null)
        {
            Stack<Transform> arr = obstacles[obstacleKind];
            if (arr.Count == 0)
            {
                Transform trans = Instantiate(kPC.Obstacle[obstacleKind], Vector3.zero, Quaternion.identity);
                //Debug.Log("GetObstacleInstantiate");
                return trans.gameObject;
            }
            else
            {
                GameObject obstacle = arr.Pop().gameObject;
                obstacle.SetActive(true);
                return obstacle;
            }
        }
        else
        {
            return null;
        }
    }

    public void DisposeChildren(GameObject kObject)
    {
        //kObject.SetActiveRecursively(false); //commented out so that no "invisible" bats exist.
        foreach (Transform child in kObject.transform)
        {
            Dispose(child.gameObject);
        }
        //kObject.transform.DetachChildren();
        Dispose(kObject);
    }

    public void Dispose(GameObject kObject)
    {
        char a = kObject.tag[0];
        char b = kObject.tag[1];
        Stack<Transform> arr;
        switch (a)
        {
            case 'G':
                arr = gems[(int)b - 48];
                kObject.transform.parent = null;
                kObject.SetActive(false);
                arr.Push(kObject.transform);
                break;
            case 'O':
                arr = obstacles[(int)b - 48];
                kObject.transform.parent = null;
                kObject.SetActive(false);

                arr.Push(kObject.transform);
                break;
            case 'S':
                arr = sections[(int)b - 48];
                kObject.transform.parent = null;
                //kObject.active = false; //never set as active= false, for that will stop the update cycle and avoid the platforms own disposal
                arr.Push(kObject.transform);
                break;
            default:
                Destroy(kObject);
                break;
        }
    }
}