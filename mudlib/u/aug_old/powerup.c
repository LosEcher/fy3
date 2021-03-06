// powerup.c  战神
// 97.9.15 by Aug

//inherit SSERVER;

#include <ansi.h>

int exert(object me, object target)
{
	int i;

	if ((int)me->query_skill("suiyu-force",1)<40)
		return notify_fail("你的碎玉神功功力不够，无法使用战神。\n");

	i=me->query("max_force")/2;
	if(i<300) i=300;
	if ((int)me->query("force")<i)
		return notify_fail("你的内力不够，不能使用战神。\n");

	me->set("force",me->query("force")-i);

	me->set("max_force",me->query("max_force")*2);
	me->set("force",me->query("force")*2);
	me->set("max_kee",me->query("max_kee")*2);
	me->set("eff_kee",me->query("eff_kee")*2);
	me->set("kee",me->query("kee")*2);
	me->set("str",me->query("str")+10);
	me->set("con",me->query("con")+10);

	message_vision(MAG"$N"+MAG+
"双手微提，一呼一吸间目光陡然大盛，身上的袍服高高涨起，
一股真气围绕全身，仿佛有战神附体。\n"NOR,me);	

	call_out("do_warn",30,me);

	return 1;
}
	
void do_warn(object me)
{
	tell_object(me,HIY"你真气消耗过快，全身有一种虚脱的感觉。\n"NOR);
	
	call_out("do_endpowerup",30,me);
}

void do_endpowerup(object me)
{
	int i;
	object * all;

	me->set("max_force",me->query("max_force")/2);
	if(me->query("force")>me->query("max_force"))
		me->set("force",me->query("max_force"));

	me->set("max_kee",me->query("max_kee")/2);
	if(me->query("eff_kee")>me->query("max_kee"))
		me->set("eff_kee",me->query("max_kee"));
	if(me->query("kee")>me->query("max_kee"))
		me->set("kee",me->query("max_kee"));

	me->set("str",me->query("str")-10);
	me->set("con",me->query("con")-10);	

	all = all_inventory(environment(me)); 
	for (i=0; i<sizeof(all); i++)
	{
		if(all[i]==me)
			tell_object(me,HIY"你再也支持不住，身上的那股内劲一下子消失的无影无踪。\n"NOR);
		else
			tell_object(all[i],HIY+me->name()+HIY+"再也支持不住，身上的那股内劲一下子消失的无影无踪，想气球一样憋了下去。\n"NOR);	
	} 
}

