// taiji-quan.c ̫��ȭ
// ���Ӳ�ͬ���ܼ�����Ӧ��ѧϰ����ʹ����������, by ReyGod, in 12/17/1996
//      query_skill_name() and query_action()

inherit SKILL;

mapping *action = ({
([	"action" : "$Nʹһ�С���ȸβ����˫�ֻ��˸���Ȧ������$n��$l",
	"damage":50,
	"damage_type" : "����"
]),
([	"action" : "$Nʹһ�С����ޡ��������������£���������ӳ�������$n��$l",
	"damage":56,
	"damage_type" : "����"
]),
([	"action" : "$N���ֻ��գ������ɹ����ƣ���������ʹһ�С�������ʽ������$n��$l��ȥ",
	"damage":62,
        "damage_type" : "����"
]),
([	"action" : "$N˫�ֻ������������ϣ��������£�ʹһ�С��׺����᡹���ֻ�$n�����ź�$l",
	"damage":68,
        "damage_type" : "����"
]),
([	"action" : "$N��������ǰ���£�����΢ת������һ����Ȧ��ʹһ�С�§ϥ�ֲ���������$n��$l",
	"damage":74,
        "damage_type" : "����"
]),
([	"action" : "$N�������������������ںϣ�ʹһ�С��ֻ����á�����$n��$l��ȥ",
	"damage":80,
        "damage_type" : "����"
]),
([	"action" : "$N���ֱ��ƺ�����ǰ����ȭ�����´�����һ�С���׿�����������$n��$l",
	"damage":86,
        "damage_type" : "����"
]),
([	"action" : "$N���ǰ̤�벽������ʹһ�С������롹��ָ������$n��$l��ȥ",
	"damage":92,
        "damage_type" : "����"
]),
([	"action" : "$N�С���ͨ�ۡ������һ���������������Ͼ�����Ʋ������$n��$l��ȥ",
	"damage":98,
        "damage_type" : "����"
]),
([	"action" : "$N��������ԣ�ת�����������·ֱ�ӳ�������ʹһ�С�б��ʽ��������$n��$l",
	"damage":104,
        "damage_type" : "����"
]),
([	"action" : "$N�����鰴������ʹһ�С��������š�����$n��$l��ȥ",
	"damage":110,
        "damage_type" : "����"
]),
([	"action" : "$N˫����ȭ����ǰ��󻮻���һ�С�˫����������$n��$l",
	"damage":116,
        "damage_type" : "����"
]),
([	"action" : "$N�����黮������һ�ǡ�ָ�ɴ�������$n���ɲ�",
	"damage":122,
        "damage_type" : "����"
]),
([	"action" : "$Nʩ��������ʽ�������ֻ���$n��$l�����ֹ���$n���ɲ�",
	"damage":128,
        "damage_type" : "����"
]),
([	"action" : "$N�ɱ۴��֣�����ǰ����������ʹһ�С����֡�������$n��$l",
	"damage":134,
        "damage_type" : "����"
]),
([	"action" : "$N������������ʹһ�С��𼦶���������$n��$l��ȥ",
	"damage":140,
        "damage_type" : "����"
]),
([	"action" : "$N�����ɹ����ƣ�˫���������ϣ�������ǰ�Ƴ�һ�С���̽��",
	"damage":146,
        "damage_type" : "����"
]),
([	"action" : "$N����ʹһʽ�С���Ů���󡹣�������$n��$l��ȥ",
	"damage":152,
        "damage_type" : "����"
]),
([	"action" : "$N���־���ǰ��������ǰƲ����ʹһ�С�����Ʋ��������$n��$l��ȥ",
	"damage":158,
        "damage_type" : "����"
]),
([	"action" : "$N�����鰴������ʹһ�С�ת����ȡ�����$n��$l��ȥ",
	"damage":164,
        "damage_type" : "����"
]),
([	"action" : "$N�������ϻ�������������ʹһ�С�������������$n��$l��ȥ",
	"damage":170,
        "damage_type" : "����"
]),
([	"action" : "$Nʹһ�С��Դ���������§��ϥ���������´���$n��$l",
	"damage":180,
        "damage_type" : "����"
]),
([	"action" : "$N˫���ȱ�����״�����طֿ������������£�һ�С�Ұ����ס�����$n��$l�����Ŵ�ȥ",
	"damage":190,
        "damage_type" : "����"
]),
([	"action" : "$N��������ǰ���£��ұ�΢����ʹһ�С�������ɽ������$n��$l��ȥ",
	"damage":200,
        "damage_type" : "����"
]),
([	"action" : "$N˫�־��¸�����������ǰ����ʮ��״��һʽ��ʮ���֡�����$n��$l��ȥ",
	"damage":210,
        "damage_type" : "����"
]),
([	"action" : "$N���̤һ���鲽��˫�ֽ����ʮ��ȭ��һ�С��������ǡ�����$n��$l��ȥ",
	"damage":220,
        "damage_type" : "����"
]),
([	"action" : "$N��������ڳ���������ֱ���ұ�΢����ʹһ�С���������$n��$l�����Ŵ�ȥ",
	"damage":230,
        "damage_type" : "����"
]),
([	"action" : "$N˫���쿪������Ϊ�ᣬ����������һ����Բ����\nһ�С�ת�����������$n�������¶�������������Ӱ֮��",
	"damage":240,
        "damage_type" : "����"
]),
([	"action" : "$N˫����ȭ�����ֻ����������ʣ����ֻ�����ǰ�Ƴ���\nȭ�������һ�С��乭�仢����ֱ��$n���Ѷ�ȥ",
	"damage":250,
        "damage_type" : "����"
]),
([	"action" : "$N˫������ǰ���ƣ��ɸ�����ǰ�����Ƴ���һ�С�����Ʊա���һ�ɾ���ֱ��$n",
	"damage":260,
        "damage_type" : "����"
]),
});

int valid_learn(object me)
{
        object ob;

        return 1;
}

int valid_enable(string usage)
{
        return usage=="unarmed" || usage=="parry";
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

int practice_skill(object me)
{
        if (me->query_temp("weapon") || me->query_temp("secondary_weapon"))
                return notify_fail("��̫��ȭ������֡�\n");
        if ((int)me->query_skill("taiji-shengong", 1) < 10)
                return notify_fail("���̫���񹦻�򲻹����޷�ѧ̫��ȭ��\n");
	if ((int)me->query("max_force")<100)
                return notify_fail("�������̫�����޷���̫��ȭ��\n");
	if ((int)me->query("kee")<30)
                return notify_fail("�������̫���ˡ�\n");
	if ((int)me->query("force")<20)
                return notify_fail("�������������̫��ȭ��\n");
	me->receive_damage("kee",25);
	me->add("force",-10);
        return 1;
}

string perform_action_file(string action)
{
        return __DIR__"taiji-quan/" + action;
}

int power_point()	{	return 1.5;	}
int hard_point()	{	return 2;	}
