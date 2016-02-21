// weituo-gun.c -Τ�ӹ�

inherit SKILL;

mapping *action = ({
([	"action":"$Nһ�С���ʯ���ġ�������$w�����ѵ�ˮ�㣬������$n������Ҫ����ȥ",
	"damage":100,
	"damage_type":"����"
]),
([	"action":"$N��$wƽ���ؿڣ�һš��һ�С�����ͣ�桹��$w�͵�����$n�ľ���",
	"damage":140,
	"damage_type":"����"
]),
([	"action":"$Nһ�С�ƽ�����ɡ���ȫ���������ڵ��ϴ����ת���ٹ���$n���ظ����ȥ",
	"damage":180,
	"damage_type":"����"
]),
([	"action":"$N����һ��������һ�С��������硹��$wЮ��������Ѹ��ɨ��$n������",
	"damage":220,
	"damage_type":"����"
]),
([	"action":"$Nһ�С����Ǹ��¡��������һ�����˱Ƴ�һ��ֱ�ߣ����ǰ�����$n��$l",
	"damage":260,
	"damage_type":"����"
]),
([	"action":"$N˫�ֳֹ����˸���ش�Ȧ��һ�С���ϼ���ա���һ����Բ�����л�����ײ��$n���ؿ�",
	"damage":300,
	"damage_type":"����"
]),
([	"action":"$Nһ�С�Ͷ�޶�������$w�߾٣����������֮�ƶ�׼$n�����鵱ͷ����",
	"damage":340,
	"damage_type":"����"
]),
([	"action":"$NǱ��������һ�С������麣����$w��ʱ�������ɣ�������ֱ��$n���ؿ�",
	"damage":380,
	"damage_type":"����"
]),
});

int valid_enable(string usage) { return  (usage == "club") || (usage == "parry"); }

int valid_learn(object me)
{
	if ((int)me->query("max_force") < 100)
		return notify_fail("�������������\n");
	if ((int)me->query_skill("hunyuan-yiqi", 1) < 20)
		return notify_fail("��Ļ�Ԫһ�������̫ǳ��\n");
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
	|| (string)weapon->query("skill_type") != "club")
		return notify_fail("��ʹ�õ��������ԡ�\n");
	if ((int)me->query("kee") < 50)
		return notify_fail("�������������Τ�ӹ���\n");
	me->receive_damage("kee", 10);
	return 1;
}
