 // chushan-jianfa.c
//��ɽ����(δ��ƪ)

inherit SKILL;

mapping *action = ({
        ([      "action": "$N��������������������ɽ֮��������$w��ǰһ����һ��ֱ��$n��$l���˹�ȥ��",
          "lvl":40,
                "damage_type":  "����"
        ]),
        ([      "action": "$N��������������Ѧ�����Ů�ܡ���˫�۴���������飬����$wҲӦ���ŷ����������ˡ������죬��$n��$l��ȥ��",
          "lvl":65,
                "damage_type":  "����"
        ]),
        ([      "action": "$N������������������������Ц������ʹ�����һ�����������ֽ���ȴֱ��$n��$l���˹�����",
          "lvl":90,
                "damade_type":  "����"
        ]),
        ([      "action": "$N�ƺ�����ʲô�����Ƶģ��������������������Ľ�������񻡹����$w���϶��»���һ����Բ������ָ�أ���ʱ��$nȫ�������������ޱߵĽ������У�",
          "lvl":150,
                "damade_type":  "����"
        ]),
 
});

int valid_learn(object me)
{
        object ob;

        if( (int)me->query("max_force") < 50 )
    return notify_fail("�������������û�а취����ɽ������\n");

        if( (string)me->query_skill_mapped("force")!= "kunlun-xinfa")
                 return notify_fail("��ɽ����������ϳ�ɽ�ķ���������\n");

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
notify_fail("�����������������û�а취��ϰ��ɽ������\n");
        me->receive_damage("kee", 30);
        me->add("force", -3);
          write("�㰴����ѧ����һ���ɽ������\n");
        return 1;
}

string perform_action_file(string action)
{
    return CLASS_D("xiake")+"/chushan-jianfa/"+action;
}

