// fonxanforce.c

inherit FORCE;

int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me) { return 1; }

int practice_skill(object me)
{
        return 
notify_fail("��������ֻ����ѧ�ģ����Ǵ�����(exert)�����������ȡ�\n");
}
string exert_function_file(string func)
{
	return "/daemon/class/yandang/yuxuan-guizhen/"+func;
}

int power_point()	{	return 1.75;	}
int hard_point()	{	return 3;	}
