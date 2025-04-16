using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class lineHolder : MonoBehaviour
{
    public GameObject linePrfab;
    public List<lineData> lines = new List<lineData>();
    public void addLine(Transform _enemyTransform)
    {
        //Debug.Log("new line");
        GameObject tmp2= Instantiate(linePrfab);
        lineData tmp=tmp2.GetComponent<lineData>();
        tmp.addlineData(tmp2, _enemyTransform);
        lines.Add(tmp);
    }
    public void removeLine(Transform _enemy)
    {
        foreach (lineData line in lines)
            {
               
                if (line.EnemyTransform == _enemy) {
                line.lineRenderer.positionCount = 0;

                line.gameObject.SetActive(false);
                Destroy(line.gameObject); Destroy(line); lines.Remove(line); break; }
            }
    }
    public void updateLines()
    {

        for(int i = lines.Count-1; i >= 0; i--)
        {
           var line = lines[i];
            if (line != null && line.EnemyTransform != null)
            {

                line.updateLine();

            }
            else
            {
                lines.Remove(line);
            }
        }         
    }
}

