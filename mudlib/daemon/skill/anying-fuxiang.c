inherit SKILL;
#include <ansi.h>
string *dodge_msg = ({
    "$nһ����������ͷ���׻��ţ�������ţ�����$N�Ĺ���Ʈ�𣬴��ݶ����һ�С�\n",
    "$nʹ��һ�д�Į����ֱ���������ţ�������ţ���Ȼ�������࣬���$N���˸��ա�\n",
    "$n����һҡ��������ţ��������ţ��ó�������Ӱ��һ����Ӱ��б�������$N�Ĺ��ơ�\n",
    "$nһ����������ˮ����Ծ�𣬳������ţ��������ţ�ٿ��������$N���\n",
    "$n��һҡ����һ�Σ��������ţ�����ȸ�ţ�һ�����֪��������������\n",
    "$n˫��һ�㣬����ȸ�ţ���׻��ţ�бб����ʹ��б���ӻ���������$N��ࡣ\n",
});

int valid_enable(string usage) 
{ 
	return (usage == "dodge");
}
int valid_learn(object me) { return 1; }

string query_dodge_msg(string limb)
{
        return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
        if( (int)me->query("kee") < 30 )
            return notify_fail("�������̫���ˣ���������Ӱ���㡣\n");
        me->receive_damage("kee", 30);
        return 1;
}

int power_point()	{	return 1.5;	}
int hard_point()	{	return 1.5;	}
