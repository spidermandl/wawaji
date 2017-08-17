/** This is an automatically generated class by FairyGUI. Please do not modify it. **/

using FairyGUI;
using FairyGUI.Utils;

namespace Enter
{
	public partial class UI_arrow_button : GComponent
	{
		public GImage m_n1;
		public GImage m_n2;
		public GImage m_n3;

		public const string URL = "ui://w744s2qdlf031";

		public static UI_arrow_button CreateInstance()
		{
			return (UI_arrow_button)UIPackage.CreateObject("Enter","arrow_button");
		}

		public UI_arrow_button()
		{
		}

		public override void ConstructFromXML(XML xml)
		{
			base.ConstructFromXML(xml);

			m_n1 = (GImage)this.GetChildAt(0);
			m_n2 = (GImage)this.GetChildAt(1);
			m_n3 = (GImage)this.GetChildAt(2);
		}
	}
}