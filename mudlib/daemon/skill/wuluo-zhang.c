// wuluo-zhang.c ����������

inherit SKILL;

mapping *action = ({
([  "action" : "$N��Ϣ����������һ�ơ��������������������������$n",
	"damage":50,
	"damage_type" : "����"
]),
([  "action" : "$N����ǳЦ���Ƶ�$n�����������������ӵ$n���䡣$n��
ü���㣬$N����һ�С��������ơ���������Ϣ��$n��$l�ĵ�",
	"damage":80,
	"damage_type" : "����"
]),
([  "action" : "$Nһ�С��̺����Ρ���˫�ƻû���һƬ��Ӱ����һ�����̣�
��$nϸϸ���ܵ���������",
	"damage":110,
	"damage_type" : "����"
]),

([  "action" : "$N����Խ��Ȧ�⣬����һ�С��������졹��ԶԶ����$n��$l
�����ĳ����ƣ��Ʒ�ε�����Ȼ��ʢֱ��$n����������",
	"damage":140,
    "damage_type" : "����"
]),
([  "action" : "$N���ƴ�������Χ��������ƮƮ����$n��ȥ������$n������
�ܣ�����ȴ���ؿڼ���Ȧ����һ�С��������������ϳ����ƣ�����$n��$l",
	"damage":170,
    "damage_type" : "����"
]),
([  "action" : "$N˫�����ƣ�����һ�󾢷磬һ�С�������ɢ����һ�ɿ���
����$n",
	"damage":200,
    "damage_type" : "����"
]),
});

int valid_enable(string usage) { return usage=="unarmed" || usage=="parry"; }


int valid_learn(object me)
{
	if (me->query_temp("weapon") || me->query_temp("secondary_weapon"))
		return notify_fail("�����������Ʊ�����֡�\n");
	return 1;
}
mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

int practice_skill(object me)
{
	if((int)me->query("kee")<50)
		return notify_fail("�������̫���ˡ�\n");
	if((int)me->query("force")<20)
		return notify_fail("����������������������ơ�\n");
	me->receive_damage("kee",30);
	me->add("force",-10);
	return 1;
}


