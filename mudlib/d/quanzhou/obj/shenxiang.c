
inherit ITEM;
void create()
{
	set_name("��������", ({"shenxiang", "mazu"}));
	set_weight(50000);
	if (clonep())
		set_default_object(__FILE__);
	else {
		set("long", "���鰲����������,һ��һ��Ī�������ˡ�\n");
		set("unit", "��");
             set("no_get",1);
	}
setup();
}
