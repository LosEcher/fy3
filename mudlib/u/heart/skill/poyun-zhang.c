//poyun.c ������

inherit SKILL;

mapping *action = ({
([      "action" : "\n$N˫��һ£����צֱ��$n���̣���צȴЮ����֮������$n���䣬һ��һʵ������һ�С����Ƹ��꡹",
        "force" : 170,
        "dodge" : 5,
        "damage_type" : "����",
        "lvl" : 0,
        "damage" : 15,
        "skill_name" : "���Ƹ���"
]),
([      "action" : "\n$N���ζ�������ӥ���հ㡰ٿ���ش�$nͷ��Խ����ʹһ�С���ɽ������˫�Ƽ���$n�Ժ�����",
        "force" : 190,
        "dodge" : 20,
        "damage_type" : "����",
        "damage" : 25,
        "lvl" : 5,
        "skill_name" : "��ɽ����"
]),
([      "action" : "\n$N�͵�һ����ͻȻ����$n��ǰ��ʹһ�С������ơ���˫��ֱ��$nС��",
        "force" : 215,
        "dodge" : 20,
        "damage_type" : "����",
        "damage" : 35,
        "lvl" : 10,
        "skill_name" : "������"
]),
([      "action" : "\n$N���ƻ��أ����������󷢣�һ�С��ƹ����硹����������$n��$l",
        "force" : 245,
        "dodge" : 5,
        "damage_type" : "����",
        "damage" : 45 ,
        "lvl" : 20,
        "skill_name" : "�ƹ�����"
]),
([      "action" : "\n$N΢΢һЦ������ǰ�ˣ�ʹһ�С��λó�Ե����ֱ��$n��ǰ����ҪѨ",
        "force" : 280,
        "dodge" : 25,
        "damage_type" : "����",
        "damage" : 55,
        "lvl" : 35,
        "skill_name" : "�λó�Ե"
]),
([      "action" : "\n$N���ι��죬������ң���Ȼת��$n���һ�С�����ʯ����˫��ֱ��$n�ʺ����",
        "force" : 320,
        "dodge" : 35,
        "damage_type" : "����",
        "damage" : 65,
        "lvl" : 60,
        "skill_name" : "����ʯ"
]),
([      "action" : "\n$Nһ����Х������ͻȻ����ʹ������ˮ���¡����ɰ�������»���$n�پ�������Ӱ������ȫ��ҪѨ",
        "force" : 365,
        "dodge" : 40,
        "damage_type" : "����",
        "damage" : 95,
        "lvl" : 85,
        "skill_name" : "��ˮ����"
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

string query_skill_name(int level)
{
        int i;
        for(i = sizeof(action)-1; i >= 0; i--)
                if(level >= action[i]["lvl"])
                        return action[i]["skill_name"];
}


int practice_skill(object me)
{
        if ((int)me->query("kee") < 30)
                return notify_fail("�������̫���ˡ�\n");
        if ((int)me->query("force") < 20)
                return notify_fail("������������������ơ�\n");
        me->receive_damage("qi", 25);
        me->add("neili", -5);
        return 1;
}

string perform_action_file(string action)
{
        return "/daemon/class/songshan/poyun-zhang/" + action;
}

