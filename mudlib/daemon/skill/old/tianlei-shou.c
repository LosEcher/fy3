// tianlei-shou.c
// ������
// made by cwj 97/7/6

inherit SKILL;

mapping *action = ({
	([	"action":		"$Nʹ��һ�С������ܲ����������գ�˫��һ�ϣ�����$n��$l",
		"dodge":		30,
		"parry":		20,
		"force":		20,
		"damage_type":	"����"
	]),
	([	"action":		"$Nʹ��������է�֡���ͻȻ��˫�ִ󿪴��أ����һ������$n��$l��",
		"dodge":		30,
		"parry":		30,
		"force":		20,
		"damage_type":	"����"
	]),
	([	"action":		"$N����������ʹ���������������˫�ִ�����������ͬʱ��$n��ȫ����",
		"dodge":		-20,
		"parry":		30,
		"force":		50,
		"damage_type":	"����"
	]),
	([	"action":		"$N���һ����һ�С��������ס��������಻�ϵ����˹���$n��$l",
		"dodge":		-10,
		"parry":		30,
		"force":		50,
		"damage_type":	"����"
	]),
	([	"action":		"$NͻȻʹһ�С��׵���������˫�ۺݺݵĵ�ס$n,˫��ͬʱ����$n��$l",
		"dodge":		50,
		"parry":		50,
		"force":		50,
		"damage_type":	"����"
	]),
	([	"action":		"$N˫��һ��һ�С�������ת����׼$n��$l�����ĳ�����",
          "dodge":             30,
              "parry":		30,
		"force":		40,
		"damage_type":	"����"
	]),
	([	"action":		"$Nʹ��һ�С��ڲ���������ȫ����һ���׵�Ӱ����ȫ������$n",
		"dodge":		75,
		"parry":		20,
		"force":		30,
		"damage_type":	"����"
	]),
	([	"action":		"$N��ɫ���أ�˫���˹�������أ�˫��ʩȫ��ʹ�����׹��״����˲ʱ��ؼ�ֻ����������",
		"dodge":		-55,
		"parry":		-30,
		"force":		75,
		"damage_type":	"����"
	]),
});

string *interattack = ({
        "$N˫��£���Ż�������\n",
});


string query_interattack(object me, object target)
{
	return interattack[random(sizeof(interattack))];
}

mapping query_action(object me, object weapon)
{
	return action[random(sizeof(action))];
}

int valid_enable(string usage) 
{ 
     return (usage=="unarmed") || (usage=="parry");
}

int valid_learn(object me)
{
 mapping weapons;
 if ( mapp(weapons = me->query_temp("weapon")) && sizeof(weapons) )
		return notify_fail("�������ֱ�����֡�\n");
	if( (int)me->query_skill("jimie-dafa", 1) < 10 )
		return notify_fail("��İ����޼���󷨻���㣬�޷��������֡�\n");
	return 1;
}

int practice_skill(object me)
{
	if( (int)me->query("kee") < 30 )
		return notify_fail("������������ˣ���Ϣһ�������ɡ�\n");
	if( (int)me->query("sen") < 20 )
		return notify_fail("���Ԫ�񲻼��ˣ���Ϣһ�������ɡ�\n");

	me->receive_damage("kee", 10);
	me->receive_damage("sen", 10);
	write("�㰴����ѧ����һ�������֡�\n");
	return 1;
}
