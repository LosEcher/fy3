inherit SKILL;

mapping *action = ({
	([	"action":		"$NͻȻת��,�Ա���$nײȥ,ͬʱ���㷴��,�����ƹ���$n��$l",
		"damage":200,
		"damage_type":	"����",
	]),
	([	"action":		"$N����Ʈ��������˫���฿,���ڶ���,�������,��ò�����$n��ȥ",
		"damage":220,
		"damage_type":	"����",
	]),
	([	"action":		"ֻ��$N����ǰ��,������������,ȭ��ָ,ָ����,Ѫ�ƻ���$n��$l",
		"damage":240,
		"damage_type":	"����",
	]),
	([	"action":		"$N˫��һ��,ң��$n,����һ������,һ�ɳ�����������$n",
		"damage":260,
		"damage_type":	"����",
	]),
            ([	"action":		"ֻ��$N����һЦ,���ϸ���һ������,�ĵ�$n��ǰ�����ƶ��ر�ΪѪ��!",
		"damage":280,
		"damage_type":	"����",
	]),
            ([	"action":		"$N����һȦ,���ƴ�Ȧ�л���$n��$l",
		"damage":300,
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
	return usage=="unarmed" || usage=="parry";
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
return "/daemon/class/youming/youming-zhang/"+action;
}
int power_point()	{	return 1.75;	}
int hard_point()	{	return 2.5;	}

