// bahuang-gong.c �˻�����Ψ�Ҷ���
#include <ansi.h>

inherit FORCE;

int valid_enable(string usage) { return usage == "force"; }

int valid_learn(object me)
// need more limit here
{
	if ((int)me->query_skill("force", 1) < 10)
		return notify_fail("��Ļ����ڹ���򻹲�����\n");

        return 1;
}

int practice_skill(object me)
{
	return notify_fail("�˻�����Ψ�Ҷ���ֻ����ѧ(learn)�������������ȡ�\n");
}

string exert_function_file(string func)
{
return "/daemon/class/lingjiu/duzun-gong/"+func;
}
int message(object me)
{
message_vision(HIC+"$N����Ϣ����ֻ��һ��������������.\n"NOR,me);
return 1;
}

int power_point()	{	return 1.75;	}
int hard_point()	{	return 3;	}

