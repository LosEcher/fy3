
inherit ITEM;
void create()
{
	set_name("¬���Ƿ�����", ({"foxiang", "shenxiang"}));
	set_weight(50000);
	if (clonep())
		set_default_object(__FILE__);
	else {
		set("long", "����ׯ�ϵ�����,������������,ʮ�ִ���\n");
		set("unit", "��");
             set("no_get",1);
	}
setup();
}
