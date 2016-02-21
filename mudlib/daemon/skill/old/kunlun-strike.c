// kunlun-strike.c   �����Ʒ�  by wangzc & ppl      2/9/97       copy form  �嶾������

inherit SKILL;

mapping *action = ({
    ([  "action":       "$Nʹ��һ�С������������˫�ƿ��ϼ����һ��ǿ���������$n����һ�ϼ�$N��˫���Ѱ�����$n��$l",
		"dodge":		30,
		"parry":		30,
		"force":		45,
		"damage":		120,
		"damage_type":	"����",
	]),
    ([  "action":       "$Nһ�С����ͽ�������Ȼ��һ���޺ȣ�˫�����籩��㹥��$n������",
		"dodge":		-20,
		"parry":		40,
		"force":		40,
		"damage":		150,
		"damage_type":	"����",
	]),
    ([  "action":       "$Nʹ������ӥ���á���һ���ֱ�����죬�漴ͷ�½��ϵ�ֱ��$n����$n���˫�Ƶ�ʱ$N���ҽ��ѷ�����$n�ĺ���",
		"dodge":		40,
		"parry":		10,
		"force":		30,
		"damage":		180,
		"damage_type":	"����",
	]),
      ([  "action":       "$N���μ�ת��һ�С�����է������ɲ�Ǽ�ó�ǧ���Ӱ�ӣ�˫�����Һϻ���$n",
		"dodge":		-50,
		"parry":		-30,
		"force":		90,
		"damage":		200,
		"damage_type":	"����",
	]),

});

int valid_learn(object me)
{
        object ob;

         if( (int)me->query_skill("kunlun-xinfa", 1) < 20 )
            return notify_fail("��������ķ�����㣬�޷��������Ʒ���\n");
		
        if( (int)me->query("max_force") < 50 )
                  return notify_fail("�������������û�а취�������Ʒ���\n");

	if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
        return notify_fail("�������Ʒ�������֡�\n");
        return 1;
}

int valid_enable(string usage)
{
        return usage=="unarmed" || usage=="parry";
}

int practice_skill(object me)
{
        if( (int)me->query("kee") < 30
        ||      (int)me->query("force") < 3 )
                return 
notify_fail("�����������������û�а취��ϰ�����Ʒ���\n");
        me->receive_damage("kee", 20);
        me->add("force", -3);
        write("�㰴����ѧ����һ�������Ʒ���\n");
        return 1;
}

string perform_action_file(string action)
{
        return CLASS_D("xiake") + "/kunlun-strike/" + action;
}
mixed hit_ob(object me, object victim, int damage_bonus, int factor)
{
    if( random(me->query_skill("kunlun-xinfa")) > 5) {
		victim->apply_condition("xy_poison", random(2) + 1 +
			victim->query_condition("xy_poison"));
	}
}
 
