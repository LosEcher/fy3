// jiuyang-shengong.c ������
// cleansword

inherit FORCE;

int valid_enable(string usage)
{
	return usage == "force";
}

int valid_learn(object me)
{

if (me->query("banghui")!="����")
				    
return notify_fail("�����񹦲�����,�����̵��Ӳ���.\n");
	if ((int)me->query_skill("force", 1) < 30)
		return notify_fail("��Ļ����ڹ���򻹲������޷��������񹦡�\n");


	return 1;
}

string exert_function_file(string func)
{
return "/daemon/class/mingjiao/jiuyang-shengong/" + func;
}

int power_point()	{	return 2;	}
int hard_point()	{	return 3;	}
