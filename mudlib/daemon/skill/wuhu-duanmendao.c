// wuhu-duanmendao.c �廢���ŵ�

inherit SKILL;

mapping *action = ({
([	"action" : "$N����$wбָ��һ�С�ֱ��ֱȥ��������һ�٣�һ����$n��$l��ȥ",
	"damage":50,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С�ͯ�ӹһ�������������㣬$wһ��һ�գ�ƽ�л���$n�ľ���",
	"damage":70,
	"damage_type" : "����"
]),
([	"action" : "$Nչ���鲽������Ծ�䣬һ�С��ƴ����¡�������һ������ն��$n",
	"damage":90,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С�������ɽ����$w�󿪴��أ����϶��»���һ�����磬ֱ����$n",
	"damage":110,
	"damage_type" : "����"
]),
([	"action" : "$N����$wһ����һ�С���Ϫ���㡹��˫�ֳ����������У�����$n���ؿ�",
	"damage":130,
	"damage_type" : "����"
]),
([	"action" : "$N����$w��ʹ��һ�С��Ź����ġ����������ã����ҿ�����������$n",
	"damage":150,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С��������ۡ������Ծ����أ�$w˳����ǰ��Ю��������$n��$l",
	"damage":170,
	"damage_type" : "����"
]),
([	"action" : "$N����פ�أ�һ�С�������Ϣ�����ӳ�һƬ�����ĵ�Ӱ����$n��ȫ��ӿȥ",
	"damage":190,
	"damage_type" : "����"
]),
([	"action" : "$N���ֺ󳷣�����һ����һ�С�׳ʿ���󡹣���ʱһ���׹�ֱն��$n���ֱ�",
	"damage":190,
	"damage_type" : "����"
]),
([	"action" : "$N�߸�Ծ��һ�С���ͷ��ء�������$wֱ����$n�ľ���",
	"damage":210,
	"damage_type" : "����"
]),
([	"action" : "$N���ػ��У�һ�С����Ӿ��������$wֱ��ȥ$n���ɲ�",
	"damage":250,
	"damage_type" : "����"
]),
});


int valid_enable(string usage) { return (usage == "blade") || (usage == "parry"); }

int valid_learn(object me)
{
	if ((int)me->query("max_force") <80)
		return notify_fail("�������������\n");
	if ((int)me->query_skill("blade", 1) < 20)
		return notify_fail("��Ļ����������̫ǳ��\n");
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
	|| (string)weapon->query("skill_type") != "blade")
		return notify_fail("��ʹ�õ��������ԡ�\n");
	if ((int)me->query("kee") < 50)
		return notify_fail("��������������廢���ŵ�����\n");
	me->receive_damage("kee", 30);
	return 1;
}
int power_point()	{	return 1.25;	}

