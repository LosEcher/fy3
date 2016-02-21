//    �Կ��Ϻ�ӧ���⹳˪ѩ���������հ����������ǡ�    
//    �������ǣ�ǧ�ﲻ���С����˷���ȥ�������������
//    �й����������ѽ�ϥǰ�ᡣ������캥������Ȱ��Ӯ��
//    ������Ȼŵ��������Ϊ�ᡣ�ۻ����Ⱥ�������������
//    ���Իӽ𴸣��������𾪡�ǧ���׳ʿ���Ӻմ����ǡ�
//    ���������㣬�²�����Ӣ��˭������£�����̫������

// xkx-str.c
// ������
// made by yaorong 97/7/23

inherit SKILL;

mapping *action = ({
        ([      "action":               "$Nʹ��һ�С��Կ��Ϻ�ӧ���������գ�˫��һ�ϣ�����$n��$l",
		"dodge":		30,
		"parry":		20,
                "force":                50,
		"damage_type":	"����"
	]),
        ([      "action":               "$Nʹ�����⹳˪ѩ������ͻȻ��˫������һ�㣬����$n��$l��",
		"dodge":		30,
		"parry":		30,
                "force":                50,
		"damage_type":	"����"
	]),
        ([      "action":               "$N����������ʹ���������հ�����˫�ִ�����������ͬʱ��$n��ȫ����",
		"dodge":		-20,
		"parry":		30,
                "force":                70,
		"damage_type":	"����"
	]),
        ([      "action":               "$N���һ����һ�С��������ǡ���˫ȭ�������಻�ϵ����˹���$n��$l",
		"dodge":		-10,
		"parry":		30,
                "force":                70,
		"damage_type":	"����"
	]),
        ([      "action":               "$NͻȻʹһ�С�ʮ��ɱһ�ˡ���˫�ۺݺݵĵ�ס$n,˫��ͬʱ����$n��$l",
		"dodge":		50,
		"parry":		50,
                "force":                70,
		"damage_type":	"����"
	]),
        ([      "action":               "$N˫��һ��һ�С��ѽ�ϥǰ�᡹��׼$n��$l�����ĳ�����",
                "dodge":                30,
                "parry":                30,
                "force":                70,
		"damage_type":	"����"
	]),
        ([      "action":               "$Nʹ��һ�С�������캥����ȫ����һ���׵�Ӱ����ȫ������$n",
		"dodge":		75,
		"parry":		20,
                "force":                80,
		"damage_type":	"����"
	]),
        ([      "action":               "$N��ɫ���أ�˫���˹�������أ�˫��ʩȫ��ʹ�������Իӽ𴸡������Ϊ֮��ɫ",
		"dodge":		-55,
		"parry":		-30,
                "force":                100,
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
                return notify_fail("�������б�����֡�\n");
        if( (int)me->query_skill("force", 1) < 20 )
                return notify_fail("��Ļ����ڹ�����㣬�޷��������С�\n");
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
        write("�㰴����ѧ����һ�������С�\n");
	return 1;
}
