// xiuluo-force.c ������ɷ�� by ksusan 7/12/97

inherit FORCE;

int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me) { return 1; }

int practice_skill(object me)
{
        return 
notify_fail("������ɷ��ֻ����ѧ�ģ����Ǵ�����(exert)�����������ȡ�\n");
}

//	 string perform_action_file(string action)
//	{
//	 return CLASS_D("xiake")+"/suiyu-force/"+action;
//	}
string exert_function_file(string func)
{
	return CLASS_D("xiake")+"/suiyu-force/"+func;
}
