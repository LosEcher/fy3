#include <ansi.h>
inherit SKILL;

mapping *action = ({
      ([        "action":
"$Nһ����̾��$w���һ��"+MAG"�����Ĵ���ϧ���㡹"NOR+"����$n��$l���̶�ȥ",

                 "damage": 160,
                 "damage_type": "����"
       ]),
        ([      "action":
"$N����üͷ���������к����Թ��$wһ��������һ��"+MAG"���콫��������"NOR+"����$n��$l",
 
                 "damage": 200,
                "damage_type": "����"
         ]),
         ([      "action":
"$N���첻������ӹ�һ˿�ǳ$w�ݻ���һ��"+MAG"������İ������ݡ�"NOR+
"ңң����$n��$l",

                "damage": 260,
                "damage_type": "����"
          ]),
          ([      "action":
"$N����������������˼,��Ȼ���У�\n"
"��Ȼ�����ϯ��������������$n��$l,��һ��"+RED"������¥�е�Ϧ����"NOR,

         
                "damage": 300,
                 "damage_type": "����"
           ]),
           ([      "action":
"$N���Ƿ��裬�����滺���裬�������\n"
"һ��"+MAG"�������죬ˮãã��"NOR+"��$w����$n��$l",
 
                  "damage": 360,
                 
                 "damage_type": "����"
           ]),
           ([      "action":
"$N΢��˫Ŀ��һ����į�����鲼�����ϣ���������,������ʱѹ������\n"
"һ��"+MAG"�����˹�·��೤��"NOR+"�ɴ�$n��$l",

                  "damage": 400,
                  "damage_type": "����"
           ]),
           ([      "action":
"$Nб�г�������Х����ȴ�����˿�ɬ����ζ��$w�����·��̶���\n"
"һ��"+MAG"����˼������ƾ�"NOR+"����$n��$l",
 
                   "damage": 450,
                   "damage_type": "����"
             ]),
             ([      "action":
"$N����ҡͷ��˫Ŀ�������������$w��ӳ�Ų԰׵Ĺ�â"
"�������ֵ����ֶ���,һ��"+YEL"��Ī�򻨼�����С�"NOR+"����$n��$l",

                  "damage": 650,
                  "damage_type": "����"
              ]),
});

int valid_learn(object me)
{
        object ob;

        if( (int)me->query("max_force") < 200 )
    return notify_fail("�������������û�а취�����㽣����\n");

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
notify_fail("�����������������û�а취��ϰ���轣����\n");
        me->receive_damage("kee", 30);
        me->add("force", -3);
          write("�㰴����ѧ����һ�鳤�轣����\n");
        return 1;
}

string perform_action_file(string action)
{
return "/daemon/class/yandang/changge-jianfa/"+action;
}
int power_point()       {       return 1.25;    }

