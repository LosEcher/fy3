// yunlong-xinfa.c �����ķ�

inherit FORCE;

int valid_enable(string usage) { return usage == "force"; }

int valid_learn(object me)
{
        if ((int)me->query_skill("force", 1) < 10)
                return notify_fail("��Ļ����ڹ���򻹲�����\n");

        return 1;
}

string exert_function_file(string func)
{
return "/daemon/class/yunlong/yunlong-xinfa/"+func;
}

int practice_skill(object me)
{	
	return notify_fail("�����ķ�ֻ�ܿ�ѧ(learn)����ߡ�\n");
}
