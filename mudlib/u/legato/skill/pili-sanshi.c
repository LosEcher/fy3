inherit SKILL;

mapping *action = ({
([      "action": "$N���ȵ�أ����ϰγ����࣬$w����ó�������Ӱ��
$n��ס�����д��һ��[������]��ֻ��������������������$n��$1��ȥ",
        "damage":410,
    "damage_type": "����"
]),
([      "action": "$N��Ц��������������һ������˳�Ƽ�ת��ͻȻ��ͣ��
$n����ǰԾȥ�����г�Х�����Ʊ䡹�����ɨ$n��$l",     
        "damage":420,
    "damage_type": "����"
]),
([      "action": "$N˫Ŀ���Ⱪ��������ŭ���ɶ���һʽ[���ŭ]���Ʊ�ȭ
ֱ��$n��$l����$n������Ӧ��$w��Ȼ�����·��Ƶ���$nȫ��������ȥ���ٶȼ�
��$nֻ����ǰ���ǵ�Ӱ��������",
        "damage":440,
    "damage_type": "����"
]),

});

int valid_enable(string usage) { return usage == "blade" || usage == "parry"; }

int valid_learn(object me)
{
        if ((int)me->query("max_force") < 500)
                return notify_fail("�������������\n");
        if ((int)me->query_skill("force", 1) < 150)
                return notify_fail("��ġ������ڹ������̫ǳ��\n");
        return 1;
}


 mapping query_action(object me, object weapon)
{
    return action[random(sizeof(action))];
}
int practice_skill(object me)
{
        object weapon;

        if (!objectp(weapon = me->query_temp("weapon"))
        || (string)weapon->query("skill_type") != "blade")
                return notify_fail("��ʹ�õ��������ԡ�\n");
        if ((int)me->query("kee") < 50)
                return notify_fail("���������������������ʽ����\n");
        me->receive_damage("kee", 25);
        return 1;
}

string perform_action_file(string action)
{
return "/daemon/class/yandang/pili-sanshi/" + action;
}
int power_point()       {       return 1.75;     }
int hard_point()        {       return 3;       }

