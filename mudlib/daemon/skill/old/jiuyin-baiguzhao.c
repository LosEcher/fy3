//jiuyin-baiguzhao.c
#include <ansi.h>
inherit SKILL;

mapping *action = ({
([  "action" : "$N��צ��Σ���צ������һ�С�������ǡ�ֱ����$n��$l",
    "force" : 320,
    "dodge" : -30,
    "parry" : -10,
    "damage": 30,
    "lvl"   : 0,
    "skill_name" : "�������" ,
        "damage_type" : "ץ��"
]),
([  "action" : "$N˫��������צ��צצ����$n������������������$n��$lץ��",
    "force" : 400,
    "dodge" : -40,
    "parry" : -20,
    "damage": 60,
    "lvl"   : 20,
    "skill_name" : "��������" ,
        "damage_type" : "ץ��"
]),
([  "action" : "$N����Χ$nһת��ʹ�������޵�������$n��$l����ȫ������צӰ��",
    "force" : 600,
    "dodge" : -50,
    "parry" : -30,
    "damage": 90,
    "lvl"   : 40,
    "skill_name" : "���޵���" ,
        "damage_type" : "ץ��"
]),
([  "action" : "$Nʹһ�С������ơ���˫צ�ó�����צӰץ��$nȫ��",
    "force" : 800,
    "dodge" : -50,
    "parry" : -40,
    "damage": 120,
    "lvl"   : 60,
    "skill_name" : "������" ,
        "damage_type" : "ץ��"
]),
([  "action" : "$N����������һ�С�Ψ�Ҷ���˫צ������$n�������",
    "force" : 1000,
    "dodge" : -50,
    "parry" : -50,
    "damage": 150,
    "lvl"   : 80,
    "skill_name" : "Ψ�Ҷ���" ,
    "damage_type" : "ץ��"
]),
([ "action" : "$N˫�Ʋ�ס�غ���������ֱ۹ؽڿ������죬����һ��������ž��һ�³�$n$l��ȥ",
   "force" : 300,
   "dodge" : -45,
   "parry" : -60,
   "damage": 170,
   "lvl" : 100,
   "damage_type" : "����"
]),
([ "action" : "$N���δ춯���������������ų�$n�������ƣ�һ�ƿ���һ�ƣ�һ������һ��",
   "force" : 600,
   "dodge" : -50,
   "parry" : -70,
   "damage": 190,
   "lvl" : 110,
   "damage_type" : "����"
]),
([ "action" : "$N���ر�צΪ�ƣ����Ӳ������ұ۶�����Ǳ��������һ�Ƴ�$n$l��ȥ",
   "force" : 900,
   "weapon" : "��Ե",
   "dodge" : -35,
   "parry" : -80,
   "damage": 210,
   "lvl" : 120,
   "damage_type" : "����"
]),
([ "action" : "$Nһ����Х������Ʈ�磬����������е�ֿ������$n����δ������������Ѹ���Ѽ�",
   "force" : 1000,
   "dodge" : -10,
   "parry" : -90,
   "damage": 230,
   "lvl" : 130,
   "damage_type" : "����"
]),
});


int valid_enable(string usage) { return usage=="unarmed" ||  usage=="parry"; }
int valid_learn(object me)
{      if (me->query_temp("weapon") || me->query_temp("secondary_weapon"))
        return notify_fail("�������׹�צ������֡�\n");
       if ((int)me->query("max_force") < 700)
        return notify_fail("�������̫�����޷��������׹�צ��\n");
       if ((int)me->query_skill("jiuyin-shengong", 1) < 1)
        return notify_fail("��û�о����񹦵ĸ����������������׹�צ�� \n");
       if ((int)me->query_skill("unarmed", 1) < 150)
        return notify_fail("���ͽ�ֲ�����򲻹����޷�ѧϰ��\n");
       if ((int)me->query_skill("jiuyin-shengong", 1) < (int)me->query_skill("jiuyin-baiguzhao",1))
        return notify_fail("����ô������񹦻���ѧ�����׹�צ��\n");
       if (!(me->query("family/master_id") == "zhou zhiruo") &&  (!(present("jiuyin zhenjing", me)) ))
        return notify_fail("�����׹�צ����ޱȣ����������ǲ���������,ȥ��<�����澭>������?\n");
        return 1;
}

string query_skill_name(int level)
{
        int i;
        for(i = sizeof(action); i > 0; i--)
                if(level >= action[i-1]["lvl"])
                        return action[i-1]["skill_name"];
}

mapping query_action(object me, object weapon)
{
        int i, level;
    level   = (int) me->query_skill("jiuyin-baiguzhao",1);
        for(i = sizeof(action); i > 0; i--)
                if(level > action[i-1]["lvl"])

        return action[random(sizeof(action))];
}
int practice_skill(object me)
{      if (me->query_temp("weapon") || me->query_temp("secondary_weapon"))
        return notify_fail("�������׹�צ������֡�\n");
        if ((int)me->query("kee") < 30)
                return notify_fail("�������̫���ˡ�\n");
        if ((int)me->query("force") < 20)
        return notify_fail("������������������׹�צ��\n");
       if ((int)me->query_skill("jiuyin-shengong", 1) < 1)
        return notify_fail("��û�о����񹦵ĸ�������ôҲѧ��������׹�צ�� \n");
       if ((int)me->query_skill("unarmed", 1) < 150)
        return notify_fail("���ͽ�ֲ�����򲻹����޷�ѧϰ��\n");
       if ((int)me->query_skill("jiuyin-shengong", 1) < (int)me->query_skill("jiuyin-baiguzhao",1))
        return notify_fail("�㲻��ǿ�����񹦾�ȥ�������׹�צ���߻���ħ��!! \n");
       if (!(me->query("family/master_id") == "zhou zhiruo") &&  (!(present("jiuyin zhenjing", me)) ))
        return notify_fail("�����׹�צ����ޱȣ����������ǲ���������,ȥ��<�����澭>������?\n");
        me->receive_damage("kee", 30);
       me->add("force", -20);
        return 1;
}
void skill_improved(object me)
{
    tell_object(me, HIR "���Ȼ���ĵ�����һ�ɶ��ɱ��ɱ��ɱ����Ҫɱ�������ˣ�\n" NOR );
    me->add("mingwang", -(me->query_skill("jiuyin-shengong", 1)*500));
}
mixed hit_ob(object me, object victim, int damage_bonus)
{
        if( damage_bonus < 100 ) return 0;

        if( random(damage_bonus/2) > victim->query_str() ) {
                victim->receive_wound("qi", (damage_bonus - 100)/2);
                return HIR "��������������һ�����죬�����ǹ����������\n" NOR;
        }
}
string perform_action_file(string action)
{
        return __DIR__"jiuyin-baiguzhao/" + action;
}
