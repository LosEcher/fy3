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

//	 string perform_action_file(string action)
//	{
//	 return CLASS_D("xiake")+"/murongxinfa/"+action;
//	}
string exert_function_file(string func)
{
	return CLASS_D("xiake")+"/xixing-dafa/"+func;
}
