using System;
using UnityEditor;
using UnityEngine;
using System.Collections;
using System.IO;
using System.Collections.Generic;

public class AnimationClipTool{


	[MenuItem("AnimationClip/GetFilteredtoAnim",true)]
	static bool NotGetFiltered()
	{
		return Selection.activeObject;
	}


	[MenuItem("AnimationClip/GetFilteredtoAnim")]
	static void GetFiltered()
	{
		string targetPath = Application.dataPath + "/AnimationClip";
		if(!Directory.Exists(targetPath))
		{
			Directory.CreateDirectory(targetPath);
		}
		UnityEngine.Object[] SelectionAsset = Selection.GetFiltered(typeof(UnityEngine.Object),SelectionMode.Unfiltered);
		Debug.Log(SelectionAsset.Length);
		foreach(UnityEngine.Object Asset in SelectionAsset)
		{
			AnimationClip newClip = new AnimationClip();
			EditorUtility.CopySerialized(Asset,newClip);
			AssetDatabase.CreateAsset(newClip,"Assets/AnimationClip/"+Asset.name+".anim");
		}
		AssetDatabase.Refresh();
	}
}