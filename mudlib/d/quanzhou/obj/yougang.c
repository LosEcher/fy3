
inherit ITEM;
void create()
{
	set_name("���͸�", ({"yougang", "gang"}));
	set_weight(50000);
	if (clonep())
		set_default_object(__FILE__);
	else {
		set("long", "һֻװ���˵��͵Ĵ��,�ǳ��еĴ�ʩ��ġ�\n");
		set("unit", "��");
             set("no_get",1);
		set("value", 250);
		set("max_liquid", 100);
	}
setup();
}
