// sword.c
#include <ansi.h>

inherit SKILL;

string type() { return "knowledge"; }
void skill_improved(object me)
{
        
	if((int)me->query_skill("daoxuexinde",1)==40)
	tell_object(me,HIC"�������ˡ����Ŷݼס�����(help qmdj)\n"NOR);
	if((int)me->query_skill("daoxuexinde",1)==60)
	tell_object(me,HIC"�������ˡ�����������(help fz)\n"NOR);
	if((int)me->query_skill("daoxuexinde",1)==100)
	tell_object(me,HIC"�������ˡ�����������(help ld)\n"NOR);
}
