// kuihua-xinfa.c �����ķ�

inherit FORCE;

int valid_enable(string usage) { return usage == "force"; }

int valid_learn(object me)
{
	if ((int)me->query_skill("force", 1) < 10)
		return notify_fail("��Ļ����ڹ�����㣬����ѧ�����󷨡�\n");
	return 1;
}

int practice_skill(object me)
{
	return notify_fail("�����ķ�ֻ����ѧ(learn)�������������ȡ�\n");
}

string exert_function_file(string func)
{
return "/daemon/class/riyue/kuihua-xinfa/" + func;
}
int power_point()	{	return 1.75;	}
int hard_point()	{	return 2;	}


