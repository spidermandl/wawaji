using System;
using System.Collections.Generic;
using FairyGUI;
using UnityEngine;

public abstract class UIMain : MonoBehaviour
{
	protected const int UI_WIDTH = 750;
	protected const int UI_HEIGHT = 1206;

	public enum ClickType
	{ 
		StartGame = 1,
		CloseLoginPanel = 2,
	}
}

