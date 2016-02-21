// liuyangstrike.c  ��ɽ������

inherit SKILL;

mapping *action = ({
	([	"action":		"$Nʹ��һ�С�����է������˫��һ�ϣ����ƻ��أ����ƻ���$n��$l",
		"dodge":		20,
		"parry":		20,
		"force":		25,
		"damage_type":	"����"
	]),
	([	"action":		"$Nһ�С�������ѩ���������ƹ�ʵ�أ����ƻ���Ϊʵ����$n��$l",
		"dodge":		10,
		"parry":		30,
		"force":		30,
		"damage_type":	"����"
	]),
	([	"action":		"$Nʹ����������Υ��������ͻȻ��ʧ�ˣ����ȴת��$n�ı���һ������",
		"dodge":		50,
		"parry":		-20,
		"force":		20,
		"damage_type":	"����"
	]),
	([	"action":		"$N����������ʹ�����������ա���˫�ƻ���������Ӱͬʱ��$n��ȫ����",
		"dodge":		-50,
		"parry":		30,
		"force":		50,
		"damage_type":	"����"
	]),
	([	"action":		"$N���һ����һ�С������ƻ𡹴���һ��������Ϣ�����˻���$n$l",
		"dodge":		-20,
		"parry":		40,
		"force":		60,
		"damage_type":	"����"
	]),
	([	"action":		"$NͻȻʹһ�С�����������������Ȱ�����$n��ǰ��һ������$n��$l",
		"dodge":		50,
		"parry":		-20,
		"force":		30,
		"damage_type":	"����"
	]),
	([	"action":		"$N˫��һ��һ�С�������������׼$n��$l�����ĳ�����",
		"parry":		30,
		"force":		40,
		"damage_type":	"����"
	]),
	([	"action":		"$N����������Ȧ��ʹ��һ�С�Ϧ����Ӱ��������������Ϣ�ػ���$n",
		"dodge":		10,
		"parry":		40,
		"force":		40,
		"damage_type":	"����"
	]),
	([	"action":		"$N��ɫ���أ�˫�ƻ������Ƴ���ʹ���������������˲ʱ���Ϊ֮һ��",
		"dodge":		-50,
		"parry":		-20,
		"force":		75,
		"damage_type":	"����"
	]),
});

string *interattack = ({
        "$N˫������״���Ż�������\n",
});

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

int valid_enable(string usage)
{
        return usage=="unarmed" || usage=="parry";
}


int valid_learn(object me)
{
	if( (int)me->query_skill("duzun-force", 1) < 20 )
		return notify_fail("��İ˻�����Ψ�Ҷ��𹦻���㣬�޷������ɽ�����ơ�\n");
	return 1;
}

int practice_skill(object me)
{
	if( (int)me->query_skill("duzun-force", 1) < 20 )
		return notify_fail("��İ˻�����Ψ�Ҷ��𹦻���㣬�޷������ɽ�����ơ�\n");
	if((int)me->query("kee")<30)
		return notify_fail("������������ˣ���Ϣһ�������ɡ�\n");
	if((int)me->query("force")<10)
		return notify_fail("������������ˣ���Ϣһ�������ɡ�\n");
	 me->receive_damage("kee", 30);
       me->add("force", -10);
	write("�㰴����ѧ����һ����ɽ�����ơ�\n");
	return 1;
}
