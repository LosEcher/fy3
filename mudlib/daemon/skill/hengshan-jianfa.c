// hengshan-jian.c ��ɽ����
// Made by deaner
// Modified by Venus Oct.1997
#include <ansi.h>
inherit SKILL;

mapping *action = ({
([  "action" : "$N�鲽������һ��"+HIC"����ʵ�޻���"NOR+"�����п���ƽ��ȴ�������ţ�����$w����$n��$l",
	"damage":50,
    "damage_type" : "����",
]),
([  "action" : "$Nʹ��һʽ"+HIC"�����ż�ɽ��"NOR+"������$wֱ��$n��$l",      
	"damage":60,
    "damage_type" : "����",
]),
([  "action" : "$N����һ��"+HIC"������������"NOR+"������$w���Ⱪ����������$n��$l",
	"damage":70,
    "damage_type" : "����",
]),
([  "action" : "$N˫���ս���һ��"+WHT"��Զ�볾����"NOR+"��$w��������ػ���$n��$l",
	"damage":80,
    "damage_type" : "����",
]),
([  "action" : "$Nʩչ��"+HIW"������������"NOR+"�����ֺ�ʲ΢����ţ�����$w�����������$n��$l",
	"damage":90,
    "damage_type" : "����",
]),
([  "action" : "$N����ʹ��"+HIW"���ľ�������"NOR+"��$w����ǰ������Ȧ��Ϊ��������$n��$l",
	"damage":100,
    "damage_type" : "����",
]),
([  "action" : "$N˫��һ�㣬һ��"+MAG"����ħ����"NOR+"�����Ȱ�����$n��ǰ��$w����һ����â����$n��$l",
	"damage":110,
    "damage_type" : "����",
]),
([  "action" : "$Nԭ��һת��ʹ��"+HIM"����ħ���塻"NOR+"��$nȴ������˷�����$N��������$w��˸���������Լ���$l",
	"damage":120,
    "damage_type" : "����",
]),
([  "action" : "$N����Ծ�𣬼���"+HIR"����ٲ�����"NOR+"��$w����һ�������Ӱ��������$n��$l",
	"damage":130,
    "damage_type" : "����",
]),
([  "action" : "$N����΢΢һ��һ��"+HIB"���������ߡ�"NOR+"�����پ��׵�������ϣ�����$wƮ������������$n��$l",
	"damage":150,
    "damage_type" : "����",
]),
([  "action" : "$N��ɫƽ�͵�΢΢���ף�һ��"+YEL"���ɷ���ǡ�"NOR+"��$w�������Ʋ����ش���$n��$l",
	"damage":170,
    "damage_type" : "����",
]),
([  "action" : "$N˫�ֺ�ʲ��ʹ��һ��"+HIY"���ɽ�������"NOR+"��$wƽƽ�طɳ�����$n��$l",
	"damage":190,
    "damage_type" : "����",
]),
([  "action" : "$N��¶΢Ц��һ��"+HIY"���ն�������"NOR+"��$wһ������������Ž�������$n��$l",
	"damage":200,
    "damage_type" : "����",
])
});


int valid_enable(string usage) { return (usage == "sword") || (usage == "parry")
; }

int valid_learn(object me)
{
    if ((string)me->query("gender") != "Ů��" )
   return notify_fail(HIY"��������Ľ���ֻ��Ů�Ӳ��ʺ�ѧ��\n"NOR);
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
    || (string)weapon->query("skill_type") != "sword")
   return notify_fail("��ʹ�õ��������ԡ�\n");
	if((int)me->query("kee")<50)
   return notify_fail("���������������ɽ������\n");
	me->receive_damage("kee",30);
    return 1;
}

string perform_action_file(string action)
{
    return __DIR__"hengshan-jian/" + action;
}
int power_point()	{	return 1.25;	}
int hard_point()	{	return 2;	}

