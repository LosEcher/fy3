// jinyu-quan.c ����ȭ

inherit SKILL;

mapping *action = ({
([	"action" : "$Nһ�С������á���˫ȭһ��һ��, ��$n��ȥ",
	"damage":50,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С������Ͻ𡹣��ó�һƬȭӰ��������磬����$n��ͷ��",
	"damage":80,
	"damage_type" : "����"
]),
([	"action" : "$N��Ӱ����Ʈ������΢Ц��һ�С��������񡹣���������$n��$l",
	"damage":110,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С��������⡹��˫ȭһ�ϣ�$nֻ��������$N��ȭӰ",
	"damage":140,
	"damage_type" : "����"
]),
([	"action" : "$N����$nһת���������ߣ�ȭ����磬��������$n������һ��
���������á�",
	"damaeg":170,
	"damage_type" : "����"
]),
([	"action" : "ֻ��$Nһ�������˲���������Σ�ͻȻ�Ϳ��������ѵ�$n��ǰ��
��ȭ���������Ⱦ������ף�Ѹ����ף�һ�С���ʯ�ɽ𡹻���$n��ǰ��",
	"damage":200,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С��ڿ���𡹣�����$n���ƺ�$n��ȫ����ȭӰ����",
	"damage":220,
	"damage_type" : "����"
]),
});

int valid_enable(string usage) { return usage=="unarmed" || usage=="parry";}


int valid_learn(object me)
{
    if ((int)me->query_skill("kurong-changong",1) < 20)
		return notify_fail("��Ŀ���������򲻹����޷�������ȭ��\n");
	if (me->query_temp("weapon") || me->query_temp("secondary_weapon"))
		return notify_fail("������ȭ������֡�\n");
	if((int)me->query("max_force")<100)
		return notify_fail("�������̫�����޷�������ȭ��\n");
	return 1;
}

int practice_skill(object me)
{
	if((int)me->query("kee")<50)
		return notify_fail("�������̫���ˡ�\n");
	if((int)me->query("force")<20)
		return notify_fail("�����������������ȭ��\n");
	me->receive_damage("kee",30);
	me->add("force",-10);
	return 1;
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}


