/** This is an automatically generated class by FairyGUI. Please do not modify it. **/

using FairyGUI;
using FairyGUI.Utils;

namespace Enter
{
	public partial class UI_Login_dialog : GComponent
	{
		public GImage m_n3;
		public GImage m_n4;
		public UI_arrow_button m_n5;
		public GImage m_n6;

		public const string URL = "ui://w744s2qdlf038";

		public static UI_Login_dialog CreateInstance()
		{
			return (UI_Login_dialog)UIPackage.CreateObject("Enter","Login_dialog");
		}

		public UI_Login_dialog()
		{
		}

		public override void ConstructFromXML(XML xml)
		{
			base.ConstructFromXML(xml);

			m_n3 = (GImage)this.GetChildAt(0);
			m_n4 = (GImage)this.GetChildAt(1);
			m_n5 = (UI_arrow_button)this.GetChildAt(2);
			m_n6 = (GImage)this.GetChildAt(3);
		}
	}
}