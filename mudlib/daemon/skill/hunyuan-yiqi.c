// hunyuan-yiqi.c ���� ��Ԫһ����
// dts@xkx, cleansword@xkx

inherit FORCE;

int valid_enable(string usage)
{
	return usage == "force";
}

int valid_learn(object me)
{
	if((int)me->query_skill("force",1)<10)
	return notify_fail("��Ļ����ڹ���򻹲������޷�����Ԫһ������\n");
       	if ( me->query("couple/have_couple") )
		return notify_fail("���Ѿ�����ɫ�䣬�޷���ѧϰ��Ԫһ������\n");

	if ( me->query("gender") != "����" )
		return notify_fail("���ͯ��֮�壬������ϰ��Ԫһ������\n");

	return 1;
}


int practice_skill(object me)
{
	return notify_fail("��Ԫһ����ֻ����ѧ(learn)�������������ȡ�\n");
}

string exert_function_file(string func)
{
	return __DIR__"hunyuan-yiqi/" + func;
}
