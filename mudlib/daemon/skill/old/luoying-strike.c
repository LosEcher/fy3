// luoying-strike.c  ��Ӣ����

inherit SKILL;

mapping *action = ({
	([	"action":		"$Nʹ��һ�С���Ӣ�ͷס���˫��һ�ϣ����ƻ��أ����ƻ���$n��$l",
		"dodge":		20,
		"parry":		20,
		"force":		25,
		"damage_type":	"����"
	]),
	([	"action":		"$Nһ�С����軨�����������ƹ�ʵ�أ����ƻ���Ϊʵ����$n��$l",
		"dodge":		10,
		"parry":		30,
		"force":		30,
		"damage_type":	"����"
	]),
	([	"action":		"$Nʹ�����ٻ����ޡ�������ͻȻ��ʧ�ˣ����ȴת��$n�ı���һ������",
		"dodge":		50,
		"parry":		-20,
		"force":		20,
		"damage_type":	"����"
	]),
	([	"action":		"$N����������ʹ�������ɪɪ����˫�ƻ���������Ӱͬʱ��$n��ȫ����",
		"dodge":		-50,
		"parry":		30,
		"force":		50,
		"damage_type":	"����"
	]),
	([	"action":		"$N���һ����һ�С��Ȼ���������һ��������Ϣ�����˻���$n$l",
		"dodge":		-20,
		"parry":		40,
		"force":		60,
		"damage_type":	"����"
	]),
	([	"action":		"$NͻȻʹһ�С����Ī֪��������Ȱ�����$n��ǰ��һ������$n��$l",
		"dodge":		50,
		"parry":		-20,
		"force":		30,
		"damage_type":	"����"
	]),
	([	"action":		"$N��ɫ���أ�˫�ƻ������Ƴ���ʹ�����л���Ҷ����˲ʱ���Ϊ֮һ��",
		"dodge":		-50,
		"parry":		-20,
		"force":		75,
		"damage_type":	"����"
	]),
});

int valid_learn(object me)
{
        object ob;

		if( (int)me->query_skill("suiyu-force", 1) < 20 )
			return notify_fail("��������񹦻���㣬�޷�����Ӣ���ơ�\n");
		
        if( (int)me->query("max_force") < 50 )
                return notify_fail("�������������û�а취����Ӣ���ơ�\n");

	if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
		return notify_fail("��������Ѩ�ֱ�����֡�\n");
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
        if( (int)me->query("kee") < 30
        ||      (int)me->query("force") < 3 )
                return 
notify_fail("�����������������û�а취��ϰ��Ӣ���ơ�\n");
        me->receive_damage("kee", 30);
        me->add("force", -3);
        write("�㰴����ѧ����һ����Ӣ���ơ�\n");
        return 1;
}

string perform_action_file(string action)
{
        return CLASS_D("xiake") + "/luoying-strike/" + action;
}
 
