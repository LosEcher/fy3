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
	return notify_fail("��Ļ����ڹ���򻹲������޷���������񹦡�\n");
          return 1;
}


int practice_skill(object me)
{
	return notify_fail("������ֻ����ʵս�����������ȡ�\n");
}

string exert_function_file(string func)
{
return "/daemon/class/mingjiao/sanyang-shengong/"+func;
}

int power_point()       {       return 1.25;	}
int hard_point()	{	return 1.5;	}
