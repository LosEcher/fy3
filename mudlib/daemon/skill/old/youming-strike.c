inherit SKILL;

mapping *action = ({
	([	"action":		"$NͻȻת��,�Ա���$nײȥ,ͬʱ���㷴��,�����ƹ���$n��$l",
		"dodge":		-5,
		"parry":		-5,
		"force":		60,
		"damage_type":	"����",
	]),
	([	"action":		"$N����Ʈ��������˫���฿,���ڶ���,�������,��ò�����$n��ȥ",
		"dodge":		10,
		"parry":		-10,
		"force":		120,
		"damage_type":	"����",
	]),
	([	"action":		"ֻ��$N����ǰ��,������������,ȭ��ָ,ָ����,Ѫ�ƻ���$n��$l",
		"dodge":		-5,
		"parry":		10,
		"force":		80,
		"damage_type":	"����",
	]),
	([	"action":		"$N˫��һ��,ң��$n,����һ������,һ�ɳ�����������$n",
		"dodge":		-15,
		"parry":		10,
		"force":		60,
		"damage_type":	"����",
	]),
            ([	"action":		"ֻ��$N����һЦ,���ϸ���һ������,�ĵ�$n��ǰ�����ƶ��ر�ΪѪ��!",
		"dodge":		15,
		"parry":		-5,
		"force":		60,
		"damage_type":	"����",
	]),
            ([	"action":		"$N����һȦ,���ƴ�Ȧ�л���$n��$l",
		"dodge":		-5,
		"parry":		-5,
		"force":		70,
		"damage_type":	"����",
	]),
});

int valid_learn(object me)
{
	
	if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
		return notify_fail("����ڤѪ�Ʊ�����֡�\n");
	return 1;
}

int valid_enable(string usage)
{
	return usage=="unarmed";
}

mapping query_action(object me, object weapon)
{
	return action[random(sizeof(action))];
}

int practice_skill(object me)
{
	if( (int)me->query("sen") < 30)
		return notify_fail("��ľ����޷������ˣ���Ϣһ�������ɡ�\n");
	if( (int)me->query("kee") < 30 )
		return notify_fail("����������������Ϣһ�������ɡ�\n");
	if( (int)me->query("force") < 10 )
		return notify_fail("������������ˡ�\n");

	me->receive_damage("sen", 20);
	me->receive_damage("kee", 20);
	me->add("force", -10);

	return 1;
}
string perform_action_file(string action)
{
        return CLASS_D("xiake") + "/youming-strike/" + action;
}

