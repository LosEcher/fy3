// xiuluo-force.c ������ɷ�� by ksusan 10/03/97
#include <ansi.h>

inherit FORCE;

int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me) { return 1; }

int practice_skill(object me)
{
        return 
notify_fail("������ɷ��ֻ����ѧ�ģ����Ǵ�����(exert)�����������ȡ�\n");
}

//	 string perform_action_file(string action)
//	{
//	 return CLASS_D("xiake")+"/suiyu-force/"+action;
//	}
string exert_function_file(string func)
{
	return CLASS_D("xiake")+"/xiuluo-force/"+func;
}
void skill_improved(object me)
{
        if(me->query_skill("xiuluo-force",1)==10)       
	       tell_object(me,HIC"���������ɷ���Ѵﵽ��һ�ؾ��磡\n"NOR);
        if(me->query_skill("xiuluo-force",1)==20)       
	       tell_object(me,HIC"���������ɷ���Ѵﵽ�ڶ��ؾ��磡\n"NOR);
        if(me->query_skill("xiuluo-force",1)==40)       
	       tell_object(me,HIC"���������ɷ���Ѵﵽ�����ؾ��磡\n"NOR);
        if(me->query_skill("xiuluo-force",1)==60)       
	       tell_object(me,HIC"���������ɷ���Ѵﵽ�����ؾ��磡\n"NOR);
        if(me->query_skill("xiuluo-force",1)==80)       
	       tell_object(me,HIC"���������ɷ���Ѵﵽ�����ؾ��磡\n"NOR);
        if(me->query_skill("xiuluo-force",1)==100)       
	       tell_object(me,HIC"���������ɷ���Ѵﵽ�����ؾ��磡\n"NOR);
        if(me->query_skill("xiuluo-force",1)==120)       
	       tell_object(me,HIC"���������ɷ���Ѵﵽ�����ؾ��磡\n"NOR);
        if(me->query_skill("xiuluo-force",1)==140)       
	       tell_object(me,HIC"���������ɷ���Ѵﵽ�ڰ��ؾ��磡\n"NOR);
        if(me->query_skill("xiuluo-force",1)==160)       
	       tell_object(me,HIC"���������ɷ���Ѵﵽ�ھ��ؾ��磡\n"NOR);
}
mixed hit_ob(object me, object victim, int damage_bonus, int factor)
{
	int ap,dp;
	me->add("force",-factor);
	if(victim->is_busy())	return;
	if(factor<5)	return;
	if(victim->query("force")>me->query("force"))	return;
	ap=me->query_skill("force")+me->query_skill("dodge");
	dp=victim->query_skill("parry")+me->query_skill("dodge");
	if(random(ap)<random(dp))	return;
	victim->start_busy(factor/10+3);
	return BLU"ֻ��$N����������ɷ����һ����ɭ���������������ܡ���\n$n�������������������硻���ж��ٻ�������\n"NOR;
}
