// zixia-shengong.c ��ϼ��
// By Hop
#include <ansi.h>

inherit FORCE;

int valid_enable(string usage) { return usage == "force"; }

int valid_learn(object me)
{
	if ((int)me->query_skill("force", 1) < 10)
		return notify_fail("��Ļ����ڹ���򻹲�����������ѧϰ��ϼ�񹦡�\n");

	return 1;
}

int practice_skill(object me)
{
	return notify_fail("��ϼ��ֻ����ѧ(learn)�������������ȡ�\n");
}

string exert_function_file(string func)
{
        return __DIR__"zixia-shengong/" + func;
}
int message(object me)
{
message_vision(MAG+"$N�������Ϣ���ϸ�����������һ�ּ���.\n"NOR,me);
return 1;
}

int power_point()	{	return 1.75;	}
int hard_point()	{	return 2;	}
