// hamagong.c ��󡹦
#include <ansi.h>
// By Five

inherit FORCE;

int valid_enable(string usage) { return usage == "force"; }

int valid_learn(object me)
{
	int i = (int)me->query_skill("hamagong", 1);
	int t = 1, j;

	if( i <= 100)
		for (j = 1; j < i / 10; j++)
			t*= 2;

	if ( me->query("gender") == "����" && i > 49)
		return notify_fail("���޸����ԣ���������������������ĸ�󡹦��\n");

	if ((int)me->query_skill("force", 1) < 10)
		return notify_fail("��Ļ����ڹ�����㣬����ѧ��󡹦��\n");

	if(i<=100)
	{
if (i > 10 && (int)me->query("mingwang") > -t * 100)
			return notify_fail("ѧ��󡹦��Ҫ�ĺ���������������������ò���ѽ��\n");
	}
	else
	{
if ((int)me->query("mingwang") >- (51200 + (i - 100) * 1000)) 
			return notify_fail("ѧ��󡹦��Ҫ�ĺ���������������������ò���ѽ��\n");
	}

	return 1;
}

int practice_skill(object me)
{
	return notify_fail("��󡹦ֻ����ѧ(learn)�������������ȡ�\n");
}

string exert_function_file(string func)
{
return "/daemon/class/baituo/hamagong/" + func;
}
int message(object me)
{
message_vision(HIB+"$N���Ϸ���һ�����ɫ,����������ķ������\n"NOR,me);
return 1;
}
int power_point()	{	return 1.75;	}
int hard_point()	{	return 2;	}

string perform_action_file(string action)
{
return "/daemon/class/baituo/hamagong/" + action;
}
