// huntian-qigong.c

inherit FORCE;

int valid_enable(string usage) { return usage == "force"; }

int valid_learn(object me)
{
	if((int)me->query_skill("force",1)<10)
		return notify_fail("��Ļ����ڹ���Ƿ���\n");
	return 1;
}


int practice_skill(object me)
{
	return notify_fail("��������ֻ����ѧ(learn)�������������ȡ�\n");
}

string exert_function_file(string func)
{
return "/daemon/class/gaibang/huntian-qigong/" + func;
}
