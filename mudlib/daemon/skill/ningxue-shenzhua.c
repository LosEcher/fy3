// yunlong-zhua.c -��Ѫ��צ

inherit SKILL;

mapping *action = ({
([	"action" : "$Nȫ��εض��𣬰����һ�����һʽ����ӥϮ�á���Ѹ�͵�ץ��$n��$l",
	"damage":60,
	"damage_type" : "ץ��"
]),
([	"action" : "$N����ֱ����˫��ƽ�죬һʽ����ӥչ�᡹��˫צһǰһ��£��$n��$l",
	"damage":80,
        "damage_type" : "ץ��"
]),
([	"action" : "$Nһʽ���γ�ӥ�ɡ���ȫ����б��ƽ�ɣ�����һ����˫צ����$n�ļ�ͷ",
	"damage":100,
        "damage_type" : "����"
]),
([	"action" : "$N˫צ�����Ͼ٣�ʹһʽ��ӭ��������һ�����ֱ�Ϯ��$n����Ҹ����",
	"damage":120,
        "damage_type" : "����"
]),
([	"action" : "$Nȫ�������ǰ��һʽ��������צ������צͻ�������Ȱ�ץ��$n���ؿ�",
	"damage":140,
        "damage_type" : "����"
]),
([	"action" : "$N���ػ��У�һʽ���������ء�������Ϯ�����д�Ѩ�����ַ�ץ$n���ɲ�",
	"damage":160,
        "damage_type" : "����"
]),
([	"action" : "$N��������צ���棬һʽ���������ա��������������ƿն�����Ѹ���ޱȵػ���$n",
	"damage":180,
        "damage_type" : "����"
]),
([	"action" : "$N�ڿո߷����ɣ�һʽ��ӥ�����������ж�ʱ�Գ�һ������צӰ����������$n",
	"damage":200,
        "damage_type" : "����"
]),
([	"action" : "$N���Ĳ��ض���ʹһʽ��������ˮ�������λ���һ����������$n",
	"damage":210,
        "damage_type" : "����"
]),
([	"action" : "$N΢΢һЦ��ʹһʽ������ڡ���˫�ֻó�������,ֱ����$n��$l",
	"damage":220,
        "damage_type" : "����"
])
});

int valid_enable(string usage) { return usage=="unarmed"||usage=="parry"; }


int valid_learn(object me)
{
	if (me->query_temp("weapon") || me->query_temp("secondary_weapon"))
		return notify_fail("����Ѫ��צ������֡�\n");
	if ((int)me->query_skill("yunlong-xinfa",1)<50)
		return notify_fail("��������ķ���򲻹����޷�ѧ��Ѫ��צ��\n");
	if ((int)me->query_skill("force", 1) < 50)
		return notify_fail("��Ļ����ڹ���򲻹����޷�ѧ��Ѫ��צ��\n");
	if ((int)me->query("max_force") < 350)
		return notify_fail("�������̫�����޷�����Ѫ��צ��\n");
	if ((int)me->query_skill("unarmed",1) <40)
		return notify_fail("��Ļ���������򲻹����޷�ѧ��Ѫ��צ��\n");
	return 1;
}


mapping query_action(object me, object weapon)
{
    return action[random(sizeof(action))];
}

int practice_skill(object me)
{
	if ((int)me->query("kee") < 30)
		return notify_fail("�������̫���ˡ�\n");
	if ((int)me->query("force") < 20)
		return notify_fail("���������������Ѫ��צ��\n");
	me->receive_damage("kee", 30);
	me->add("force", -10);
	return 1;
}

mixed hit_ob(object me, object victim, int damage_bonus, int factor)
{
	if(me->query_skill("yunlong-xinfa")>70)	{
	if( random(me->query_skill("ningxue-shenzhua"))>30){
            victim->apply_condition("zhua_poison", random(me->query_skill("ningxue-shenzhua")/10) + 1 +
			victim->query_condition("zhua_poison"));
	}
	}
}

string perform_action_file(string action)
{
	return __DIR__"ningxue-shenzhua/"+action;
}

int power_point()	{	return 1.75;	}
int hard_point()	{	return 2;	}

