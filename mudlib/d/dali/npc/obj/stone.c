// gaoyao.c

inherit ITEM;
#include <ansi.h>
void create()
{
	set_name("����ʯ", ({"stone"}));
	if (clonep())
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long", "��ɽ�����Ĵ���ʯ,������Ȼ���ơ�\n");
		set("value", 5000);
		set("weight",10000);
	}
	setup();
}
