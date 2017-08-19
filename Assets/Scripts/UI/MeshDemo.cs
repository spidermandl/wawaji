using System;
using UnityEngine;
using System.Collections;


public class MeshDemo : MonoBehaviour
{
	// Use this for initialization
	void Start ()
	{
		this.GetTriangle ();
	}

	// Update is called once per frame
	void Update ()
	{

	}

	public GameObject GetTriangle ()
	{
		GameObject go = new GameObject ("Triangle");
		MeshFilter filter = go.AddComponent<MeshFilter> ();

		// 构建三角形的三个顶点，并赋值给Mesh.vertices
		Mesh mesh = new Mesh ();
		filter.sharedMesh = mesh;
		mesh.vertices = new Vector3[] {
			new Vector3 (0, 0, 1),
			new Vector3 (0, 2, 0),
			new Vector3 (2, 0, 5),
		};

		// 构建三角形的顶点顺序，因为这里只有一个三角形，
		// 所以只能是(0, 1, 2)这个顺序。
		mesh.triangles = new int[3] {0, 1, 2};

		mesh.RecalculateNormals ();
		mesh.RecalculateBounds ();

		// 使用Shader构建一个材质，并设置材质的颜色。
		Material material = new Material (Shader.Find ("Diffuse"));
		material.SetColor ("_Color", Color.yellow);

		// 构建一个MeshRender并把上面创建的材质赋值给它，
		// 然后使其把上面构造的Mesh渲染到屏幕上。
		MeshRenderer renderer = go.AddComponent<MeshRenderer> ();
		renderer.sharedMaterial = material;

		return go;
	}
}


