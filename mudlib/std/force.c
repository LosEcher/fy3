// force.c

#include <ansi.h>
inherit SKILL;
mixed force_action(object me,object victim,int damage,int factor)
{
	string msg;
	int dam;
	mapping foo=([]);
	if( !living(me))	return 0;
	if(factor==0)	return 0;
	if(factor>me->query("force"))	return 0;
	dam=damage-factor;
	if(dam<=0)	dam=0;
	me->add("force",-factor);
	msg=HIW"$n����һ����������������$l��Ӳ����������$N��һ�У�\n"NOR;
	foo["msg"]=msg;
	foo["damage"]=dam;
	return foo;

}
 
