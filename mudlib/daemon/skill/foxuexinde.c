// sword.c
#include <ansi.h>

inherit SKILL;

string type() { return "knowledge"; }
void skill_improved(object me)
{
	if((int)me->query_skill("foxuexinde",1)==40)
	tell_object(me,HIC"�������ˡ�����ͨ����(help tyt)\n"NOR);
	if((int)me->query_skill("foxuexinde",1)==60)
	tell_object(me,HIC"�������ˡ������ඥ����(help thgd)\n"NOR);
	if((int)me->query_skill("foxuexinde",1)==100)
	tell_object(me,HIC"�������ˡ����ޱߡ���(help ffwb)\n"NOR);
}
