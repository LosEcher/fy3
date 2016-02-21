inherit SKILL;

mapping *action = ({
([      "action" : "$N˫��һ£����צֱ��$n���̣���צȴЮ����֮������$n���䣬һ��һʵ������һ�С����Ƹ��꡹",
        "damage_type" : "����",
        "damage" : 15,
]),
([      "action" : "$N���ζ�������ӥ���հ㡰ٿ���ش�$nͷ��Խ����ʹһ�С���ɽ������˫�Ƽ���$n�Ժ�����",
        "damage_type" : "����",
        "damage" : 25,
]),
([      "action" : "$N�͵�һ����ͻȻ����$n��ǰ��ʹһ�С������ơ���˫��ֱ��$nС��",
        "damage_type" : "����",
        "damage" : 35,
]),
([      "action" : "$N���ƻ��أ����������󷢣�һ�С��ƹ����硹����������$n��$l",
        "damage_type" : "����",
        "damage" : 45 ,
]),
([      "action" : "$N΢΢һЦ������ǰ�ˣ�ʹһ�С��λó�Ե����ֱ��$n��ǰ����ҪѨ",
        "damage_type" : "����",
        "damage" : 55,
]),
([      "action" : "$N���ι��죬������ң���Ȼת��$n���һ�С�����ʯ����˫��ֱ��$n�ʺ����",
        "damage_type" : "����",
        "damage" : 65,
]),
([      "action" : "$Nһ����Х������ͻȻ����ʹ������ˮ���¡����ɰ�������»���$n�پ�������Ӱ������ȫ��ҪѨ",
        "damage_type" : "����",
        "damage" : 95,
])
});

int valid_enable(string usage) { return usage=="unarmed" ||  usage=="parry"; }

int valid_learn(object me)
{
        if (me->query_temp("weapon") || me->query_temp("secondary_weapon"))
                return notify_fail("�������Ʊ�����֡�\n");
        if ((int)me->query("max_force") < 80)
                return notify_fail("�������̫�����޷�ѧ�����ơ�\n");
        if ((int)me->query("str") < 25)
                return notify_fail("��ı���̫��޷�ѧ�����ơ�\n");
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
                return notify_fail("������������������ơ�\n");
        me->receive_damage("kee", 25);
        me->add("force", -5);
        return 1;
}

string perform_action_file(string action)
{
        return "/daemon/class/songshan/poyun-zhang/" + action;
}


