inherit SKILL;

mapping *action = ({
        ([      "action": "$N����$wһ������һ����һʽ������«�ޡ���$n��$lֱ�̶�ȥ��",
		"damage":100,
                "damage_type":  "����"
        ]),
        ([      "action": "$Nʹ���ط����㽣���еġ�������㡹���У����潣�ƶ�����$n��$l��ȥ��",
		"damage":110,
                "damage_type":  "����"
        ]),
        ([      "action": "$N���쳤Х,һ�С���Ϻ��족��ɽ��������$n��ȥ��",
		"damage":120,
                "damage_type":  "����"
        ]),
        ([      "action": "$N����һԾ��һ�С��Ǻ�һ�㡹$w��Ϊ��㺮�ǣ�����$n��",
		"damage":130,
                "damage_type":  "����"
        ]),
        ([      "action": "$Nƽ��һ��,һƬ������,һ����Ӱ��������һ�С�«���϶ɡ�!",
		"damage":140,
                "damage_type":  "����"
        ]),
        ([      "action": "$N����$w����һȦ��һ�С����·��㡹������$w��Ϊһ��������$n��ȥ!��",
		"damage":150,
                "damage_type":  "����"
        ]),
         ([      "action": "$Nһ�С�����ʧȺ����$w�������£�����һ����,����$n���ʺ�",
		"damage":160,
                "damage_type":  "����"
        ]),
        ([   "action": "$Nһ�С������ϻء�����$w��$n��ȥ����;������һת��$w��ָ��$n��ͷ����",
		"damage":170,
                "damage_type":  "����"
        ]),
      ([    "action": "$N����һ��ת��һ�С����㱯������$w��Ϊ������Ӱ������ס$n��",
		"damage":180,
               "damage_type": "����"
     ]),
      ([    "action": "$Nһ�С���Ӱǧ���$w��Ϊһ�ž��⣬ͻȻ��Ӱ��ɢ,$w��ָ��$n�ʺ�",
		"damage":190,
          "damage_type": "����"
      ]),
      ([    "action": "$N��Цһ��,��һ�С����㼸ʱ����$w��ƮƮ����$n������",
		"damage":200,
          "damage_type": "����"
      ]),
      ([    "action": "$N��ȻһЦ��һ�С�������𡹣���ʱ����������������޹����$w��ֱ��$n���ķ���ȥ��",
		"damage":250,
         "damage_type": "����"
        ]),
});

int valid_learn(object me)
{
        object ob;

        if( (int)me->query("max_force") < 50 )
    return notify_fail("�������������û�а취�����㽣����\n");

        if( (string)me->query_skill_mapped("force")!= "yuxuan-guizhen")
                 return notify_fail("���㽣������������������ķ���������\n");

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
notify_fail("�����������������û�а취��ϰ���㽣����\n");
        me->receive_damage("kee", 30);
        me->add("force", -3);
          write("�㰴����ѧ����һ�����㽣����\n");
        return 1;
}

string perform_action_file(string action)
{
return "/daemon/class/yandang/luoyan-jianfa/"+action;
}
int power_point()	{	return 1.25;	}
