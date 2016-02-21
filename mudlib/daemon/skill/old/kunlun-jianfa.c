 // kunlun-jianfa.c
//���ؽ���--------------- Write by Wangzc & Ppl

inherit SKILL;

mapping *action = ({
        ([      "action": "$N����$wһ������һ����һʽ���ֻ���������$n��$lֱ�̶�ȥ��",
          "lvl":10,
                "damage_type":  "����"
        ]),
        ([      "action": "$Nʹ�����ؽ����еġ����ҷ�Դ�����У������������⣬��$n��$l��ȥ��",
          "lvl":18,
                "damage_type":  "����"
        ]),
        ([      "action": "$N��ɫһ��������$w��ע������ һ�С�ΡΡ���ء���ɽ��������$n��ȥ��",
          "lvl":26,
                "damage_type":  "����"
        ]),
        ([      "action": "$N����һԾ��һ�С�����׽Ӱ��$w��Ϊ��㺮�ǣ�����$n��",
          "lvl":32,
                "damage_type":  "����"
        ]),
        ([      "action": "$N΢΢һЦ����Ӱ��Ȼ����������һ�С�˫����ɡ�����$n���๥����",
            "lvl":38,
                "damage_type":  "����"
        ]),
        ([      "action": "$N����һ�Σ�һ�С�������Ϣ��������$w���಻�ϵ���$n��ȥ���·������޾���",
          "lvl":44,
                "damage_type":  "����"
        ]),
         ([      "action": "$NͻȻ����һ�࣬����$n,һ�С����·ת����$w��в�´���������$n���ʺ�",
          "lvl":48,
                "damage_type":  "����"
        ]),
        ([   "action": "$Nһ�С�������ʯ������$w��$n��ȥ����;������һת��$w��$n�������Ѳ������磡",
          "lvl":52,
                "damage_type":  "����"
        ]),
      ([    "action": "$NͻȻ��Ŀ��һ�ͣ�һ�С�����������$w���߰������ס$n��",
          "lvl":55,
               "damage_type": "����"
     ]),
      ([    "action": "$N����һ����һ�С�ʯ���쾪����$wЮ����������������$nͷ���̵���",
          "lvl":58,
          "damage_type": "����"
      ]),
      ([    "action": "$N����ƽ�٣���ؼ�·�ֻ��$Nһ���ˣ�һ�С���˫�޶ԡ���ɱ��$n��æ���ң�",
          "lvl":61,
          "damage_type": "����"
      ]),
      ([    "action": "$N��ȻһЦ��һ�С�������ġ�����ʱ���Ϊ֮��Ȼ��$w��ֱ��$n���ķ���ȥ��",
          "lvl":65,
         "damage_type": "����"
        ]),
});

int valid_learn(object me)
{
        object ob;

        if( (int)me->query("max_force") < 50 )
    return notify_fail("�������������û�а취�����ؽ�����\n");

        if( (string)me->query_skill_mapped("force")!= "kunlun-xinfa")
                 return notify_fail("���ؽ���������������ķ���������\n");

        if( !(ob = me->query_temp("weapon"))
        ||      (string)ob->query("skill_type") != "sword" )
                return notify_fail("���������һ�ѽ�������������\n");

        return 1;
}

int valid_enable(string usage)
{
           return usage=="sword";
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
notify_fail("�����������������û�а취��ϰ���ؽ�����\n");
        me->receive_damage("kee", 30);
        me->add("force", -3);
          write("�㰴����ѧ����һ�����ؽ�����\n");
        return 1;
}

string perform_action_file(string action)
{
    return CLASS_D("xiake")+"/kunlun-jianfa/"+action;
}
 
