// mabudai.c �鲼��

inherit ITEM;

void create()
{
	set_name("��ߡ��", ({ "huo zhezi", "huo", "fire" }));
	set_weight(500);
	if (clonep())
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "��ĳЩ��������ʹ��(use)��������Ʒ��\n");
		set("value", 100);
	}
}

