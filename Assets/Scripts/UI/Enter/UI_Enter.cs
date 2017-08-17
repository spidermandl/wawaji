/** This is an automatically generated class by FairyGUI. Please do not modify it. **/

using FairyGUI;
using FairyGUI.Utils;

namespace Enter
{
	public partial class UI_Enter : GComponent
	{
		public UI_arrow_button m_n0;
		public UI_Login_dialog m_n1;
		public GImage m_n2;
		public GImage m_n3;

		public const string URL = "ui://w744s2qdngpb0";

		public static UI_Enter CreateInstance()
		{
			return (UI_Enter)UIPackage.CreateObject("Enter","Enter");
		}

		public UI_Enter()
		{
		}

		public override void ConstructFromXML(XML xml)
		{
			base.ConstructFromXML(xml);

			m_n0 = (UI_arrow_button)this.GetChildAt(0);
			m_n1 = (UI_Login_dialog)this.GetChildAt(1);
			m_n2 = (GImage)this.GetChildAt(2);
			m_n3 = (GImage)this.GetChildAt(3);
		}
	}
}