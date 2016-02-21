// dagou-bang.c �򹷰���
// Modified by Venus Oct.1997
// write by Xiang

inherit SKILL;

mapping *action = ({
([  "action": "$Nʹ��һ�С�����˫Ȯ��������$w���������������$n��$l",
	"damage":100,
	"limb":"���",
    "damage_type": "����"
]),
([  "action": "$N����$w���һζ���һ�С�����Ѱ�ߡ���$n��$l��ȥ",
	"damage":150,
	"limb":"�ʺ�",
    "damage_type": "����"
]),
([  "action": "$N����$w���Ӹ�����ʹһ�С���ݾ��ߡ�����$n��$l",
	"damage":150,
    "damage_type": "����"
]),
([  "action": "$Nʩ�����������졹��$w����������$n��$l��ȥ",
	"damage":200,
	"limb":"�ɲ�",
    "damage_type": "����"
]),
});

int valid_enable(string usage) { return (usage == "staff") || (usage == "parry"); }

int valid_learn(object me)
{
	if ((int)me->query("max_force")<100)
      return notify_fail("�������������\n");
    return 1;
}

mapping query_action(object me, object weapon)
{
    if (random(me->query_skill("staff",1)) > 60 &&
        me->query_skill("force",1) > 60 &&
	me->query("force")>100 &&
	objectp(weapon) &&
        (string)weapon->query("id") == "yuzhu zhang" ) {
	me->add("force",-100);
        return ([
      "action": "$N�������һ����â������������ʹ���������޹���������ǵ�����",
      "damage": 500,
      "damage_type": "����"]);
    }
    return action[random(sizeof(action))];
}

int practice_skill(object me)
{
    object weapon;

    if (!objectp(weapon = me->query_temp("weapon"))
    || (string)weapon->query("skill_type") != "staff")
      return notify_fail("��ʹ�õ��������ԡ�\n");
	if ((int)me->query("kee")<50)
      return notify_fail("��������������򹷰�����\n");
	me->receive_damage("kee",40);
    return 1;
}

string perform_action_file(string action)
{
        return __DIR__"dagou-bang/" + action;
}
int power_point()	{	return 2;	}
int hard_point()	{	return 3;	}
