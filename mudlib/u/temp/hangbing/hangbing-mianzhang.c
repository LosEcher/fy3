// hannbing-mianzhang.c ��������
inherit SKILL;
mapping *action = ({
([      "action" : "$N����Ȼһ�䣬ʹ��һʽ���������������Ӱǧ����ã���$n�޷�����",
        "dodge": 20,
        "force": 100,
      "poison": 20,
        "damage_type": "����"
]),
([      "action" : "$N�ٿ�һ�ɣ��εض��𣬽����е�$w��$n��$l�ͻ���ȥ,$n��ʱ������ң���һ��[�仨ʽ]",
        "dodge": 30,
        "force": 120,
      "poison": 30,
        "damage_type": "����"
]),
([      "action" : "$Nʹһʽ������ɽɫ����������΢����棬������ϸ�����ֱȡ$n��$l",
        "dodge": 40,
        "force": 130,
      "poison": 50,
        "damage_type": "����"
]),
([      "action" : "$N����һ�֣�һʽ�������׺���������������������$n�����ȥ",
        "dodge": 50,
        "force": 240,
      "poison": 70,
        "damage_type": "����"
]),
([      "action" : "$N����һת��ʹ��һʽ��ˮ�����١���ֻ��������Ӱ��ס��$n��ȫ��",
        "dodge": 60,
        "force": 150,
      "poison": 90,
        "damage_type": "����"
]),
([      "action" : "$N����¶�������Ц�ݣ�����������ɫ��˫��ɨ��$n��$l",
        "dodge": 50,
        "force": 160,
      "poison": 80,
        "damage_type": "����"
]),
([      "action" : "$Nʹһʽ����ѩ��ɽ����˫��Ю��籩ѩ֮�ƣ��͵�����$n��$l",
        "dodge": 80,
        "force": 160,
      "poison": 90,
        "damage_type": "����"
]),
([      "action" : "$NͻȻ������ת��������$n��˫�Ʒ���������$n��$l",
        "dodge": 90,
        "force": 230,
      "poison": 100,
        "damage_type": "����"
]),
([      "action" : "$N�������������֣�һ�С���ʬ���������ޱȵ�ץ��$n��$l",
        "dodge": 100,
        "force": 100,
      "poison": 100,
        "damage_type": "����"
]),
([      "action" : "$N˫��Ю��һ���ȳ�֮������$n��$l",
        "dodge": 100,
        "force": 100,
      "poison": 120,
        "damage_type": "����"
])
});

int valid_enable(string usage)
{
        return usage=="strike" || usage=="parry" ;
}

int valid_learn(object me)
{
        if (me->query_temp("weapon") || me->query_temp("secondary_weapon"))
                return notify_fail("���������Ʊ�����֡�\n");
        if ((int)me->query_skill("force", 1) < 20)
                return notify_fail("��Ļ����ڹ���򲻹����޷�ѧ�������ơ�\n");
        if ((int)me->query("max_neili") < 100)
                return notify_fail("�������̫�����޷����������ơ�\n");
        return 1;
}

string query_skill_name(int level)
{
        int i;
        for(i = sizeof(action)-1; i >= 0; i--)
                if(level >= action[i]["lvl"])
                        return action[i]["skill_name"];
}

mapping query_action(object me, object weapon)
{
        int i, level;
        level   = (int) me->query_skill("hanbing-mianzhang",1);
        for(i = sizeof(action); i > 0; i--)
                if(level > action[i-1]["lvl"])
                        return action[NewRandom(i, 20, level/4)];
}

int practice_skill(object me)
{
        if ((int)me->query("qi") < 30)
                return notify_fail("�������̫���ˡ�\n");
        if ((int)me->query("neili") < 40)
                return notify_fail("��������������������ơ�\n");
        me->receive_damage("qi", 30);
        me->add("neili", -10);
        return 1;
}

mixed hit_ob(object me, object victim, int damage_bonus, int factor)
{
if( random(me->query_skill("hanbing-mianzhang")) > 10 )
        victim->apply_condition("ice_poison", random(me->query_skill("hanbing-mianzhang")/8) + 1 + victim->query_condition("ice_poison"));
}

string perform_action_file(string action)
{
        return __DIR__"hanbing-mianzhang/" + action;
}

