#include <ansi.h>
inherit FORCE;

int valid_enable(string usage) { return usage == "force"; }

int valid_learn(object me)
{
    if ((string)me->query("gender") != "Ů��" )
	return notify_fail(HIY"����������ڹ�ֻ��Ů�Ӳ��ʺ�ѧ��\n"NOR);
    return 1;
}

int practice_skill(object me)
{
return notify_fail("��Ԫ�ķ�ֻ����(learn)�������������ȡ�\n");
}

string exert_function_file(string func)
{
return "/daemon/class/hengshan/lingyuan-xinfa/"+func;
}

