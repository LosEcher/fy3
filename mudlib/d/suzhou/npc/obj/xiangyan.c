// box.c ������

#include <ansi.h>
inherit COMBINED_ITEM;
//inherit ITEM;
void create()
{
	set_name("����",({"yan"}));
	if( clonep() )
		set_default_object(__FILE__);
	else {
	set("unit","Щ");
	set("long","���̣���(chou)һ���ƺ���������\n");
	set("base_unit","֧");
	set("base_weight",1);
	set("base_value",200);
		set("material", "wood");
	}
	set_amount(1);
	setup();
}

void init()
{
	add_action("do_chou","chou");
}
int do_chou(string str)
{
	object me;
	object obj;
	me=this_player();
	if( !living(me))	return 0;
	if(!str)	return notify_fail("��Ҫ��ʲô������\n");
	if(!present(str,me))	
	return notify_fail("��Ҫ��ʲô������\n");
	obj=present(str,me);
	if(obj->query("id")!="yan")
	return notify_fail("�����������ܳ顣\n");
	if(obj==this_object())	{
		message_vision(CYN"$N�ó�֧�̳�����������������֮���ƺ���������\n"NOR,me);
	me->set("eff_sen",me->query("max_sen"));
	me->set("sen",me->query("max_sen"));
	me->receive_wound("kee",10);
	message_vision(CYN"$N����һ����ƨ�ɡ�\n"NOR,me);
	obj=new(__DIR__"yanpigu.c");
	obj->move(environment(me));
	set_amount(query_amount()-1);
	}
	return 1;
}
