// jinchuang.c ��ҩ

#include <ansi.h>
inherit ITEM;



void create()
{
	set_name("��ҩ", ({"jinchuang yao","yao"}));
		set("unit", "��");
		set("long","����ҩ�������ָ�������\n");
		set("value",2500);
	setup();
}
void init()
{
    add_action("do_eat", "eat");
}
int do_eat(string arg)
{
	object me=this_player();
	if(!living(me))	return 0;
	if (!id(arg))
		return notify_fail("��Ҫ��ʲôҩ��\n");
	me->set("force",(int)me->query("max_force"));
	message_vision("$N����һ����ҩ��\n",me);
	destruct(this_object());
	return 1;
}

