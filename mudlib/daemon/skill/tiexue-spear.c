inherit SKILL;

mapping *action = ({
([	"action":"$N����һ�����������ѣ�����$w��Ұ�ӳ�������һʽ[Ѫսǧ��].",
	"damage":100,
	"damage_type":	"����"
]),
([	"action":"$N�������µ���̤������ʹ��[ŭ�ӱ���]������$w��ɨ$n��$l",
	"damage":140,
	"damage_type":	"����"
]),
([	"action":"$N˫��΢��,ʹ��һʽ���ɸ���졹������$wңҡָ��$n��ͷ��",
	"damage":180,
	"damage_type":	"����"
]),
([	"action":"$N����Ծ��һʽ��ʬ���Ұ��������$w����һ��Х������$n",
	"damage":220,
	"damage_type":	"����"
]),
([	"action":"$N����$w�й�ֱ����һʽ��ֱ������������׼$n���ؿڴ̳�",
	"damage":260,
	"damage_type":	"����"
]),
([	"action":"$N����$wһʽ����ɽ�ٶ�������׼$n��$l���¶���������",
	"damage":300,
	"damage_type":	"����"
]),
([	"action":"$N����$w����һ�Ű�â��һʽ���Ƹ����ۡ������ַɴ�$n�ؿڡ�",
	"damage":340,
	"damage_type":	"����"
]),
([	"action":"$Nһʽ����ʯ��١�����Ծ��$n�������$w�缲������Լ��ؿڡ�",
	"damage":380,
	"damage_type":	"����"
]),
});

int valid_enable(string usage) { return usage == "spear" || usage == "parry"; }


mapping query_action(object me, object weapon)
{
    return action[random(sizeof(action))];
}