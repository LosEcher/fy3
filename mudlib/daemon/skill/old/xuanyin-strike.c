// xuanyin-strike.c  �嶾������ by ksusan 7/12/97

inherit SKILL;

mapping *action = ({
	([	"action":		"$Nʹ��һ�С�������ˮ����˫�ƿ��ϼ����һ��ǿ���������$n����һ�ϼ�$N��˫���Ѱ�����$n��$l",
		"dodge":		30,
		"parry":		30,
		"force":		45,
		"damage":		120,
		"damage_type":	"����",
		"condition_name": "handu",
		"condition_param": 30,
	]),
	([	"action":		"$Nһ�С�������������Ȼ��һ���޺ȣ�˫�����籩��㹥��$n������",
		"dodge":		-20,
		"parry":		40,
		"force":		40,
		"damage":		150,
		"damage_type":	"����",
		"condition_name": "handu",
		"condition_param": 40,
	]),
	([	"action":		"$Nʹ������Ы���ء���һ���ֱ�����죬�漴ͷ�½��ϵ�ֱ��$n����$n���˫�Ƶ�ʱ$N���ҽ��ѷ�����$n�ĺ���",
		"dodge":		40,
		"parry":		10,
		"force":		30,
		"damage":		180,
		"damage_type":	"����",
		"condition_name": "handu",
		"condition_param": 50,
	]),
	([	"action":		"$N���μ�ת��һ�С�ǧ֩���롹��ɲ�Ǽ�ó�ǧ���Ӱ�ӣ�˫�����Һϻ���$n",
		"dodge":		-50,
		"parry":		-30,
		"force":		90,
		"damage":		200,
		"damage_type":	"����",
		"condition_name": "handu",
		"condition_param": 60,
	]),
	([	"action":		"$Nһ����Ц��ʹ�������ڳ��ɡ����͵�һ��ֱ����$n�Ļ���˫��б��$n��$l",
		"dodge":		-30,
		"parry":		20,
		"force":		70,
		"damage":		230,
		"damage_type":	"����",
		"condition_name": "handu",
		"condition_param": 20,
	]),

});

int valid_learn(object me)
{
        object ob;

		if( (int)me->query_skill("xiuluo-force", 1) < 20 )
			return notify_fail("���������ɷ������㣬�޷����嶾�����ơ�\n");
		
        if( (int)me->query("max_force") < 50 )
                return notify_fail("�������������û�а취���嶾�����ơ�\n");

	if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
		return notify_fail("���嶾�����Ʊ�����֡�\n");
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
notify_fail("�����������������û�а취��ϰ�嶾�����ơ�\n");
        me->receive_damage("kee", 20);
        me->add("force", -3);
        write("�㰴����ѧ����һ���嶾�����ơ�\n");
        return 1;
}

string perform_action_file(string action)
{
        return CLASS_D("xiake") + "/xuanyin-strike/" + action;
}
mixed hit_ob(object me, object victim, int damage_bonus, int factor)
{
                //if( random(me->query_skill("xiuluo-force")) > (damage_bonus + foo)/3 )
	if( random(me->query_skill("xiuluo-force")) > 5) {
		//victim->receive_wound("kee", (damage_bonus + foo));
		victim->apply_condition("xy_poison", random(2) + 1 +
			victim->query_condition("xy_poison"));
	}
}
 
