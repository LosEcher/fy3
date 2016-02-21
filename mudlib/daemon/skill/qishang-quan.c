// qishang-quan.c -����ȭ
// pal 1997.05.26

inherit SKILL;

mapping *action = ({
([	"action" : "$N������ɽ��һʽ�����������˫ȭ���ƶ���������$n��$l",
	"damage":130,
	"damage_type" : "����"
]),
([	"action" : "$N�������أ�����������һʽ��ľ�ѳ��ۡ���������$n�Ƴ�",
	"damage":140,
        "damage_type" : "����"
]),
([	"action" : "$N�������飬����������ޣ�һʽ��ˮ�����¡�����$n�޿ɶ���",
	"damage":150,
        "damage_type" : "����"
]),
([	"action" : "$N����Ծ��һʽ���𺣵�ɽ����˫ȭ���ջ��£��Ʋ��ɵ�",
	"damage":200,
        "damage_type" : "����"
]),
([	"action" : "$N����һ����һʽ�������������ȭ���¶��ϣ�����$n",
	"damage":160,
        "damage_type" : "����"
]),
([	"action" : "$N����һת��һʽ������Ҳҡ�������$n����ǰ���",
	"damage":170,
        "damage_type" : "����"
]),
([	"action" : "$N���λ�λ������ȭ����һʽ���������ա�������˷�����ȭӰ",
	"damage":180,
        "damage_type" : "����"
]),
([	"action" : "$N��Хһ������ǰ̤��һ����˫ȭ�й�ֱ����һʽ�����߽��ˡ�����Ȼ����$n��ǰ��",
	"damage":190,
        "damage_type" : "����"
])
});

int valid_enable(string usage) { return  usage=="unarmed" || usage=="parry"; }

int valid_learn(object me)
{
	return 1;
}


mapping query_action(object me, object weapon)
{
	return action[random(sizeof(action))];
}

int practice_skill(object me)
{
	if ((int)me->query("kee")<30)
		return notify_fail("�������̫���ˡ�\n");
	if((int)me->query("force")<20)
		return notify_fail("�����������������ȭ��\n");
	me->receive_damage("kee",30);
	me->add("force",-10);
	return 1;
}

string perform_action_file(string action)
{
	return __DIR__"qishang-quan/" + action;
}

int power_point()	{	return 1.75;	}
int hard_point()        {       return 3;	}
