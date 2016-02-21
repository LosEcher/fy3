inherit SKILL;

mapping *action = ({
        ([      "action": "$N����$wһ������һ����һʽ������«�ޡ���$n��$lֱ�̶�ȥ��",
          "lvl":10,
                "damage_type":  "����"
        ]),
        ([      "action": "$Nʹ���ط����㽣���еġ�������㡹���У����潣�ƶ�����$n��$l��ȥ��",
          "lvl":18,
                "damage_type":  "����"
        ]),
        ([      "action": "$N���쳤Х,һ�С���Ϻ��족��ɽ��������$n��ȥ��",
          "lvl":26,
                "damage_type":  "����"
        ]),
        ([      "action": "$N����һԾ��һ�С��Ǻ�һ�㡹$w��Ϊ��㺮�ǣ�����$n��",
          "lvl":32,
                "damage_type":  "����"
        ]),
        ([      "action": "$Nƽ��һ��,һƬ������,һ����Ӱ��������һ�С�«���϶ɡ�!",
            "lvl":38,
                "damage_type":  "����"
        ]),
        ([      "action": "$N����$w����һȦ��һ�С����·��㡹������$w��Ϊһ��������$n��ȥ!��",
          "lvl":44,
                "damage_type":  "����"
        ]),
         ([      "action": "$Nһ�С�����ʧȺ����$w�������£�����һ����,����$n���ʺ�",
          "lvl":48,
                "damage_type":  "����"
        ]),
        ([   "action": "$Nһ�С������ϻء�����$w��$n��ȥ����;������һת��$w��ָ��$n��ͷ����",
          "lvl":52,
                "damage_type":  "����"
        ]),
      ([    "action": "$N����һ��ת��һ�С����㱯������$w��Ϊ������Ӱ������ס$n��",
          "lvl":55,
               "damage_type": "����"
     ]),
      ([    "action": "$Nһ�С���Ӱǧ���$w��Ϊһ�ž��⣬ͻȻ��Ӱ��ɢ,$w��ָ��$n�ʺ�",
          "lvl":58,
          "damage_type": "����"
      ]),
      ([    "action": "$N��Цһ��,��һ�С����㼸ʱ����$w��ƮƮ����$n������",
          "lvl":61,
          "damage_type": "����"
      ]),
      ([    "action": "$N��ȻһЦ��һ�С�������𡹣���ʱ����������������޹����$w��ֱ��$n���ķ���ȥ��",
          "lvl":65,
         "damage_type": "����"
        ]),
});

int valid_learn(object me)
{
        object ob;

        if( (int)me->query("max_force") < 50 )
    return notify_fail("�������������û�а취���ط����㽣����\n");

        if( (string)me->query_skill_mapped("force")!= "luoyan-xinfa")
                 return notify_fail("�ط����㽣��������������ķ���������\n");

        if( !(ob = me->query_temp("weapon"))
        ||      (string)ob->query("skill_type") != "sword" )
                return notify_fail("���������һ�ѽ�������������\n");

        return 1;
}

int valid_enable(string usage)
{
        return usage=="sword" || usage=="parry";
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
notify_fail("�����������������û�а취��ϰ�ط����㽣����\n");
        me->receive_damage("kee", 30);
        me->add("force", -3);
          write("�㰴����ѧ����һ��ط����㽣����\n");
        return 1;
}

string perform_action_file(string action)
{
    return CLASS_D("xiake")+"/luoyan-sword/"+action;
}
 
