// yunv-xinfa.c ��Ů�ķ�
// By Lgg,1998.9

inherit FORCE;

int valid_enable(string usage) { return usage == "force"; }

int valid_learn(object me)
{
		
	if ( me->query("gender") == "����")
		return notify_fail("���޸����ԣ������ѵ���������ϰ��Ů�ķ���\n");

	if ((int)me->query_skill("force", 1) < 10)
		return notify_fail("��Ļ����ڹ���򻹲�����\n");

	return 1;
}

int practice_skill(object me)
{
	return notify_fail("��Ů�ķ�ֻ����ѧ(learn)�����������ȡ�\n");
}

string exert_function_file(string func)
{
	return __DIR__"yunv-xinfa/" + func;
}

