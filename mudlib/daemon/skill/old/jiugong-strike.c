// jiugong-strike 
// �Ź�������

inherit SKILL;

mapping *action = ({
	([	"action":		"$Nŭ��һ��������һԾ�����ơ�ֱ����ɽ��������ʮ��������$n��$l����һ��",
		"dodge":		20,
		"parry":		20,
		"force":		25,
		"damage_type":	"����"
	]),
	([	"action":		"$N����һ�������ơ����缲�¡������ı���$n��$l����",
		"dodge":		10,
		"parry":		30,
		"force":		30,
		"damage_type":	"����"
	]),
	([	"action":		"$N���Ʊ��������������ָ��ꪣ�һ�С�˳��ǣ�򡹣�����$n��$l��",
		"dodge":		50,
		"parry":		-20,
		"force":		20,
		"damage_type":	"����"
	]),
	([	"action":		"$N˫�Ƽ�����һ�ǡ��乭��񡹣�һǰһ����$n��$l����",
		"dodge":		-50,
		"parry":		30,
		"force":		50,
		"damage_type":	"����"
	]),
	([	"action":		"$N˫��һ�����������ߣ�����һ�������ơ�б�ڵ��ޡ�����$n��$l����",
		"dodge":		-20,
		"parry":		40,
		"force":		60,
		"damage_type":	"����"
	]),
	([	"action":		"$NͻȻ����һ�֣�б���ϲ������ƺᵲ������һ����һ�С���ȸ����������$n��$lһ��",
		"dodge":		50,
		"parry":		-20,
		"force":		30,
		"damage_type":	"����"
	]),
	([	"action":		"$Nһ̽�����Ⱥ�ɨ����������һʽ��ǣԵ�֡���׼$n��$l����",
		"parry":		30,
            "dodge":          45,
		"force":		40,
		"damage_type":	"����"
	]),
	([	"action":		"$Nһ�����ƣ�һ�С����Ƽ��ա���������Ϣ�ػ���$n��$l",
		"dodge":		10,
		"parry":		40,
		"force":		40,
		"damage_type":	"����"
	]),
	([	"action":		"$NͻȻ���ƺ�أ�һ�ǡ��ֻ����á�����$n��$l����",
		"dodge":		-50,
		"parry":		-20,
		"force":		75,
		"damage_type":	"����"
	]),
       ([	"action":	"$N�ҽ�����һ�ף��ұ�һ�������һ����һʽ���ٻ����졹����$n��$l����",
		"dodge":		-50,
		"parry":		-20,
		"force":		75,
		"damage_type":	"����"
	]),
});
int valid_learn(object me)
{
        object ob;

                if( (int)me->query_skill("xiantian-force", 1) < 20 )
                return notify_fail("���������������㣬�޷����Ź�������
��\n");

        if( (int)me->query("max_force") < 50 )
                return notify_fail("�������������û�а취���Ź�������
��\n");

        if( me->query_temp("weapon") || me->query_temp("secondary_weapon") )
                return notify_fail("���Ź������Ʊ�����֡�\n");
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
        if( (int)me->query("kee") < 30
        ||      (int)me->query("force") < 3 )
                return
notify_fail("�����������������û�а취��ϰ�Ź������ơ�\n");
        me->receive_damage("kee", 30);
        me->add("force", -3);
        write("�㰴����ѧ����һ��Ź������ơ�\n");
        return 1;
}

