// feifeng-whip.c �ɷ�޷�

#include <ansi.h>

inherit SKILL;

mapping *action = ({
([	"action":  "$N����Ծ��һ�С����չ�᡹������$w���¶��ϣ�����$n������",
	"damage":50,
	"damage_type":	"����"
]),
([	"action":  "$Nһ�С��ʷ����ࡹ������$wֱ����$n��$l",
	"damage":80,
	"damage_type":	"����"
]),
([  "action":  "$Nһ�С��������������$w�ڿ�һ��һ���������࣬�͵���
$n��ͷ����",
	"damage":110,
	"damage_type":	"����"
]),
([  "action":  "$N̤��һ��������$n��٬һЦ������$wȴ����ͣ����һ�С�����
Ϸ���ɨ��$n��$l",
	"damage":140,
	"damage_type":	"����"
]),
([  "action":  "$NԾ�ڰ�գ�һ�С����ɷ��衹������$w������ϴ�գ�����Ϸ��
���������ֵ�$n����",
	"damage":170,
	"damage_type":	"����"
]),
([  "action":  "$N��ǰ����������$wȦת��磬һ�С�������项������$nǰ��",
	"damage":200,
	"damage_type":	"����"
])
});

int valid_enable(string usage) { return (usage == "whip") || (usage == "parry"); }

int valid_learn(object me)
{
	object weapon;

	if ((int)me->query_skill("kurong-changong", 1) < 20)
		return notify_fail("��Ŀ����������̫ǳ��\n");
	if ( me->query("gender") != "Ů��")
		return notify_fail("����ү��ѧ��ɷ�ޣ����ʲ���ɡ�\n");
	if ( !objectp(weapon = me->query_temp("weapon"))
	|| ( string)weapon->query("skill_type") != "whip" )
		return notify_fail("���������һ�����޲������޷���\n");

	return 1;
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

int practice_skill(object me)
{
        object weapon;
        if (!objectp(weapon = me->query_temp("weapon"))
        || (string)weapon->query("skill_type") != "whip")
                return notify_fail("��ʹ�õ��������ԡ�\n");
        if ((int)me->query("kee") < 50)
		return notify_fail("��������������ɷ�޷���\n");
        me->receive_damage("kee",20);
        return 1;
}
