inherit FORCE;

int valid_enable(string usage)
{
        return usage == "force";
}

int valid_learn(object me)
{
	int nf;
        nf = (int)me->query_skill("force", 1);

        if ( nf < 15)
 return notify_fail("��Ļ����ڹ���򻹲������޷�����ü�ķ���\n");
          return 1;
}


int practice_skill(object me)
{
        return notify_fail("��ü�ķ�ֻ����ѧ(learn)�������������ȡ�\n");
}

string exert_function_file(string func)
{
return "/daemon/class/emei/emei-xinfa/" + func;
}

int power_point()	{	return 1.5;	}
