//���Ǵ�

inherit FORCE;

int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me)	
{
	return notify_fail("�����Ǵ󷨡�ֻ��ͨ��ר����������ߣ�\n");
}

int practice_skill(object me)
{
        return 
notify_fail("�����Ǵ󷨡�ֻ��ͨ��ר�����壬���Ǵ�����(exert)�����������ȡ�\n");
}

string exert_function_file(string func)
{
	return __DIR__"xixing-dafa/"+func;
}

int power_point()	{	return 2;	}
int hard_point()	{	return 2;	}
