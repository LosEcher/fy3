// duanjia-sword.c �μҽ�

inherit SKILL;

mapping *action = ({
([  "action" : "$N��ǰ����һ����һ�С��ƺ����롹������$w����������$n��$l
������ȥ",
	"damage":60,
    "damage_type" : "����"
]),
([  "action" : "$N����Ծ�����ֽ���������һ����$w�����������٣�һʽ������
ֱ�¡�ֱ��$n��$l",
	"damage":80,
    "damage_type" : "����"
]),
([  "action" : "$Nһ�С�ѩӿ���ء���$w�����������⣬���¶��Ϸ���$n��$l",
	"damage":100,
    "damage_type" : "����"
]),
([  "action" : "$Nһ�С����ͻ�𡹣�����$w���ƺ�ɨʵ��б��������$n��$l",
	"damage":120,
    "damage_type" : "����"
]),
([  "action" : "$Nʹ����ҹ��̽������$w����������������಻�ϻ���$n��$l",
	"damage":140,
    "damage_type" : "����"
]),
([  "action" : "$Nһ�С�̩ɽѹ����������һ�󽣾�������$w���϶����������
��ֱ��$n��$l������ȥ",
	"damage":160,
    "damage_type" : "����"
]),
([  "action" : "$Nһ�С�����滨�������ڰ�գ�$w�س飬���ֹ���$n��$l",
	"damage":180,
    "damage_type" : "����"
]),
([  "action" : "$N��Ӱһ��, �Ƶ�$n����һ�С���¹��ԭ����������$n��$l����",
	"damage":200,
    "damage_type" : "����"
]),
});


int valid_enable(string usage) { return (usage == "sword")||(usage=="staff")||(usage=="parry"); }

int valid_learn(object me)
{
	if((int)me->query("max_force")<100)
       return notify_fail("�������������\n");
    if ((int)me->query_skill("kurong-changong", 1) < 20)
       return notify_fail("��Ŀ����������̫ǳ��\n");
    return 1;
}
mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

string perform_action_file(string action)
{
	return __DIR__"duanjia-jian/"+action;
}
int power_point()	{	return 1.3;	}
