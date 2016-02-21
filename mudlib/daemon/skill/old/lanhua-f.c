// lanhua-finger.c  ������Ѩ��

inherit SKILL;

mapping *action = ({
	([	"action":		"$Nʹ��һ�С�������������һָʯ����ָ��$n��$l",
		"dodge":		20,
		"parry":		20,
		"force":		40,
		"damage_type":	"����"
	]),
	([	"action":		"$Nһ�С���ָ���ס�����ؼ�һ���������$n��$l",
		"dodge":		20,
		"parry":		30,
		"force":		50,
		"damage_type":	"����"
	]),
	([	"action":		"$Nһ�С��������ۡ�����ָ��������ķ���$n��$l",
		"dodge":		30,
		"parry":		20,
		"force":		20,
		"damage_type":	"����"
	]),
	([	"action":		"$Nһ�С���ʯ��١������Ϊ֮һ����$N�ƺ�ƴ���ƵĴ���$n��$l",
		"dodge":		10,
		"parry":		10,
		"force":		60,
		"damage_type":	"����"
	]),
	([	"action":		"$Nһ�С��²л�ȱ��ʹ����$n����ǰ������������Ӱ�������������飬��ʱ���˷���",
		"dodge":		50,
		"parry":		25,
		"force":		15,
		"damage_type":	"����"
	]),
	([	"action":		"$N����һչԾ�ڿ��У���������졹�Ӹ�����һָ����$n��$l",
		"dodge":		60,
		"parry":		10,
		"force":		10,
		"damage_type":	"����"
	]),
	([	"action":		"$Nһʽ���绨ѩ�¡�ʹ������ָ��Ʈ����ɢ����$n��ʱ����Χ��ָ��֮�С�",
		"dodge":		30,
		"parry":		10,
		"force":		50,
		"damage_type":	"����"
	]),
	([	"action":		"$N����ָ��Ӱ�Ӱ�׷����$n�����Σ���֦��Ӱ�ӡ�
$n��Ҳ���Ѳ���$N����ָ��",
		"dodge":		50,
		"parry":		30,
		"force":		10,
		"damage_type":	"����"
	]),

});

int valid_enable(string usage)
{
        return usage=="finger" || usage=="parry"||usage=="dodge";
}

int valid_learn(object me)
{
	if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
		return notify_fail("��������Ѩ�ֱ�����֡�\n");
	if( (int)me->query_skill("duzun-force", 1) < 10 )
		return notify_fail("��������񹦻���㣬�޷���������Ѩ�֡�\n");
	if( (int)me->query_skill("finger", 1) < 10 )
		return notify_fail("��Ļ���ָ������㣬�޷���������Ѩ�֡�\n");

	return 1;
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

int practice_skill(object me)
{
        if( (int)me->query("kee") < 30
        ||      (int)me->query("force") < 3 )
                return 
notify_fail("�����������������û�а취��ϰ������Ѩ�֡�\n");
        me->receive_damage("kee", 30);
        me->add("force", -3);
        write("�㰴����ѧ����һ��������Ѩ�֡�\n");
        return 1;
}

string perform_action_file(string action)
{
        return CLASS_D("xiake") + "/lanhua-finger/" + action;
}


