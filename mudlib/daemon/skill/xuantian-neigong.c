//�����ڹ�
#include <ansi.h>
inherit FORCE;

int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me) { return 1; }

int practice_skill(object me)
{
        return 
notify_fail("�����ڹ�ֻ����ѧ�ģ����Ǵ�����(exert)�����������ȡ�\n");
}

string exert_function_file(string func)
{
return "/daemon/class/meizhuang/xuantian-neigong/"+func;
}
mixed hit_ob(object me, object victim, int damage_bonus, int factor)
{
	int ap,dp;
	if(victim->is_busy())	return;
	if(factor<5)	return;
	if(victim->query("force")>me->query("force"))	return;
	ap=me->query_skill("force")+me->query_skill("dodge");
	dp=victim->query_skill("parry")+me->query_skill("dodge");
	if(random(ap)<random(dp))	return;
	me->add("force",-factor);
	victim->start_busy(factor/10+3);
	return YEL"ֻ��$N��ɫ���࣬�������𣬶�ʱ$n��һ�ɺ������֣�\n$næ���������޷�������\n"NOR;
}

int power_point()	{	return 1.5;	}
