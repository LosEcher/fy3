// piaohua-hand.c Ʈ����Ҷ��
// By temp,1999,12,14

inherit SKILL;

mapping *action = ({
([	"action" : "$N�����ľ���˫�֣�ƽƽ����$n��ȥ",
	"force" : 180,
	"dodge" : 5,
	"damage":15,
	"lvl" : 0,
	"skill_name" : "ƽ����",
	"damage_type" : "����"
]),
([	"action" : "$NͻȻ����һ��������ֱϮ$n������",
	"force" : 200,
	"dodge" : 5,
	"damage": 20,
	"lvl" : 10,
	"skill_name" : "����׷��",
        "damage_type" : "����"
]),
([	"action" : "$NͻȻʹ��һ�С�����ԾӰ�����Ӳ���ײ��$n",
	"force" : 230,
	"dodge" : 15,
	"damage": 35,
	"lvl" : 22,
	"skill_name" : "����ԾӰ",
        "damage_type" : "����"
]),
([	"action" : "$N����һԾ����Ȼ�ӿ������¹���$n����һ�� ������Ʈ�䡹 ",
	"force" : 270,
	"dodge" : 5,
	"damage": 40,
	"lvl" : 34,
	"skill_name" : "����Ʈ��",
        "damage_type" : "����"
]),
([	"action" : "$NͻȻ����ǰ�壬˫��ֱϮ$n�����ֶ�ȥ��ԭ������Ҷ�ַɡ����������ַ�",
	"force" : 320,
	"dodge" : 10,
	"damage": 50,
	"lvl" : 48,
	"skill_name" : "��Ҷ�ַ�",
        "damage_type" : "����"
]),
([	"action" : "$N����⧷���������Ȼ��ն��ȥ������Ҷ��ɢ����Х������$n",
	"force" : 380,
	"dodge" : 25,
	"damage": 62,
	"lvl" : 60,
	"skill_name" : "��Ҷ��ɢ",
        "damage_type" : "����"
]),
([	"action" : "$N����$n΢΢һЦ��Ȼ��ͻȻ��Ȼ�ӳ����ƣ�ֻ����һ�����䣬�Ʒ��ѳ�",
	"force" : 450,
	"dodge" : 15,
	"damage": 74,
	"lvl" : 68,
	"skill_name" : "���ɢȥ",
        "damage_type" : "����"
]),
([	"action" : "$N�������Ȼ���𣬼�ӭ���ϣ����ط�Ҷ���������Ʒ���$n������Ϯȥ",
	"force" : 530,
	"dodge" : 20,
	"damage": 90,
	"lvl" : 75,
	"skill_name" : "�ط�Ҷ��",
        "damage_type" : "����"
]),
([	"action" : "$N�Ȼ�ζ�������ͻȻ�粨����������仨���������˫��ȴ��$n��ȥ",
	"force" : 530,
	"dodge" : 20,
	"damage": 81,
	"lvl" : 95,
	"skill_name" : "�仨����",
        "damage_type" : "����"
]),
([	"action" : "$N��Ц����������$N���ߵ�����Ѫ�ƵĿ�Х��գ�һ�ɺ���ֱ��$n��ȥ",
	"force" : 530,
        "parry" : 5,
	"dodge" : 20,
	"damage": 91,
	"lvl" : 109,
	"skill_name" : "��Ҷ����",
        "damage_type" : "����"
]),
([	"action" : "$NͻȻ�����ı���������һ�С���Ҷ���֡�������Ʒ磬��Ϯ$n������",
	"force" : 530,
        "parry" : 10,
	"dodge" : 20,
	"damage": 94,
	"lvl" : 129,
	"skill_name" : "��Ҷ����",
        "damage_type" : "����"
]),
([	"action" : "$Nʹ������Ҷ���ࡹ�ƾ�������Σ����ĳ����ƣ���Ȼ����$n",
	"force" : 530,
        "parry" : 15,
	"dodge" : 20,
	"damage": 100,
	"lvl" : 149,
	"skill_name" : "��Ҷ����",
        "damage_type" : "����"
]),
([	"action" : "$N�����Ȼ�������ң�����һ���뻡����һ������һ������$n",
	"force" : 530,
        "parry" : 25,
	"dodge" : 20,
	"damage": 210,
	"lvl" : 110,
	"skill_name" : "��ҹ����",
        "damage_type" : "����"
])
});

int valid_enable(string usage) { return  usage=="hand" || usage=="unarmed" || usage=="parry" ; }

int valid_learn(object me)
{
	if (me->query_temp("weapon") || me->query_temp("secondary_weapon"))
		return notify_fail("Ʈ����Ҷ��ֻ�ܿ�����ϰ��\n");
	if ((int)me->query("max_neili") < 50)
		return notify_fail("�������̫�����޷�ѧϰƮ����Ҷ�֡�\n");
	return 1;
}

string query_skill_name(int level)
{
        int i;
        for(i = sizeof(action)-1; i >= 0; i--)
                if(level >= action[i]["lvl"])
                        return action[i]["skill_name"];
}

mapping query_action(object me, object weapon)
{
        int i, level;
	level   = (int) me->query_skill("piaohua-hand",1);
        for(i = sizeof(action); i > 0; i--)
                if(level > action[i-1]["lvl"])
                        return action[NewRandom(i, 20, level/5)];
}

int practice_skill(object me)
{
	if ((int)me->query("qi") < 30)
		return notify_fail("�������̫���ˣ�������ϰƮ����Ҷ�֡�\n");
	me->receive_damage("qi", 25);
	return 1;
}

string perform_action_file(string action)
{
	return __DIR__"piaohua-hand/" + action;
}
