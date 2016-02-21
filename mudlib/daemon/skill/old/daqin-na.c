// qinna-shou.c  
// ��������

inherit SKILL;

mapping *action = ({
        ([      "action":               "$Nʹ��һ�С���ɨ�㡹�����������ƣ���
��������ע��ʳ��ָ������$n��˫�ۡ�\n",
                "dodge":                20,
                "parry":                20,
                "force":                25,
                "damage_type":  "����"
        ]),
        ([      "action":               "$Nһ�С�ǧԵ�֡��������ƹ�ʵ�أ���
��һ����$n��$l���¡�\n",
                "dodge":                10,
                "parry":                30,
                "force":                30,
                "damage_type":  "����"
        ]),
        ([      "action":               "$Nʹ��������ָ·��������һ��$n����
�ţ�������β��������ǰ$n�ı���һ�����¡�\n",
                "dodge":                50,
                "parry":                -20,                                
                "force":                30,
                "damage_type":  "����"
        ]),
        ([      "action":               "$NͻȻ���һ����ʹ��һ�С�Ѹ���ҵء�
��˫��һ�֣����ֺ������У����$n��$l���¡�\n",
                "dodge":                20,
                "parry":                20,
                "force":                25,
                "damage_type":  "����"
       ]),
        ([      "action":               "$Nһ�С���ˤ���֡���˫�����$n��
��������$nˤ�˳�ȥ��\n",
                "dodge":                10,
                "parry":                30,
                "force":                30,
                "damage_type":  "����"
        ]),
        ([      "action":               "$N������ת�������Ų���˫��һ��ʹ��
��������ء�������һ�е���$n����ǰײ����\n",
                "dodge":                50,
                "parry":                -20,
                "force":                20,
                "damage_type":  "����"
        ]),
});

int valid_learn(object me)
{
        object ob;

                if( (int)me->query_skill("xiantian-force", 1) < 20 )
             return notify_fail("���������������㣬�޷����������֡�\n");

        if( (int)me->query("max_force") < 30 )
                return notify_fail("�������������û�а취���������֡�\n");

        if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
                return notify_fail("���������ֱ�����֡�\n");
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
notify_fail("�����������������û�а취��ϰ�������֡�\n");
        me->receive_damage("kee", 30);
        me->add("force", -3);
        write("�㰴����ѧ����һ��������֡�\n");
        return 1;
}

