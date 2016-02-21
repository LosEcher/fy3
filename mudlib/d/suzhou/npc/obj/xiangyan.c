// box.c 功德箱

#include <ansi.h>
inherit COMBINED_ITEM;
//inherit ITEM;
void create()
{
	set_name("香烟",({"yan"}));
	if( clonep() )
		set_default_object(__FILE__);
	else {
	set("unit","些");
	set("long","香烟，抽(chou)一口似乎可以提神。\n");
	set("base_unit","支");
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
	if(!str)	return notify_fail("你要抽什么东西？\n");
	if(!present(str,me))	
	return notify_fail("你要抽什么东西？\n");
	obj=present(str,me);
	if(obj->query("id")!="yan")
	return notify_fail("这样东西不能抽。\n");
	if(obj==this_object())	{
		message_vision(CYN"$N拿出支烟抽了起来，吞云吐雾之后似乎提了提神。\n"NOR,me);
	me->set("eff_sen",me->query("max_sen"));
	me->set("sen",me->query("max_sen"));
	me->receive_wound("kee",10);
	message_vision(CYN"$N丢下一个烟屁股。\n"NOR,me);
	obj=new(__DIR__"yanpigu.c");
	obj->move(environment(me));
	set_amount(query_amount()-1);
	}
	return 1;
}
