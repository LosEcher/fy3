// taiji-jian.c ̫����
// cleansword 2/15/96
// Marz 5/21/96

inherit SKILL;

mapping *action = ({
([	"action" : "$N�鲽������һ�С����ѵ�ˮ��������$w���������һ��������$n��$l",
	"damage":120,
	"damage_type" : "����"
]),
([	"action" : "$N��ǰ����һ�������ֽ���������$wʹ��һʽ��ָ���롹ֱ��$n��$l",
	"damage":120,
	"damage_type" : "����"
]),
([	"action" : "$N��������һ�죬���ֽ���������$wʹ��һʽ������ǡ�����$n��$l",
	"damage":120,
	"damage_type" : "����"
]),
([	"action" : "$N˫ϥ�³�������$wʹ��һʽ��̽��ʽ�������¶��ϼ���$n��$l",
	"damage":120,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С������Ӳ�����$w���϶��»���һ���󻡣�ƽƽ����$n��$l��ȥ",
	"damage":120,
	"damage_type" : "����"
]),
([	"action" : "$N���������һš��һ�С�������β��������$w������$n��$l��ȥ",
	"damage":140,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С�����ɨ����һ�С�����ɨ��������ƽָ��һ���ǳɺ�ɨ$n��$l",
	"damage":140,
	"damage_type" : "����"
]),
([	"action" : "$N������ϥ������$wбָ��һ�С�����Ͷ�֡�����$n��$l",
	"damage":140,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С�������ˮ����$w���¶��ϻ���һ���󻡣�ƽƽ�ػ���$n��$l",
	"damage":140,
	"damage_type" : "����"
]),
([	"action" : "$Nʹ�����������¡���$w��������ԲȦ������ֱ�������಻�ϻ���$n��$l",
	"damage":140,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С�����Ҷ����$w����ػ�������Բ����Ѹ�ٵ���$n��$l��ȥ",
	"damage":160,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С�����ͷ����$w����һ������ҸߵĴ󻡣�бб��ն��$n��$l",
	"damage":160,
	"damage_type" : "����"
]),
([	"action" : "$Nʹ����ʨ��ҡͷ����$w�������󻮳�һ�����֣���$nȦ������",
	"damage":160,
	"damage_type" : "����"
]),
([	"action" : "$N���̤ʵ���ҽ���㣬һ�С�����ָ·��������$w����һ�Ž���������$n��$l",
	"damage":160,
	"damage_type" : "����"
]),
([	"action" : "$N����Ծ��һ�С�Ұ����������$w�ڰ���л�ΪһȦ��â������$n��$l",
	"damage":160,
	"damage_type" : "����"
]),
([	"action" : "$N����ǰ���󹭣�һ�С�����ʽ��������$wֱ��$n��$l",
	"damage" : 185,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С�С���ǡ�����������һ�죬���ֽ���������$wƽƽ����$n��$l��ȥ",
	"damage" : 187,
	"damage_type" : "����"
]),
([	"action" : "$N������ϣ�һ�С���Գ�׹���������$wбб����$n��$l��ȥ",
	"damage" : 189,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С�ӭ�絧������$w���������һ�ӣ�$nȴ����һ�ɾ���ӭ��Ϯ����",
	"damage" : 191,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С�˳ˮ���ۡ���$w���϶��»���һ���󻡣�ƽƽ����$n��$l��ȥ��",
	"damage" : 193,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С����Ǹ��¡���$w����$n��$l",
	"damage" : 195,
	"damage_type" : "����"
]),
([	"action" : "$NͻȻ�̶���������һ�С��������¡���$w���¶��ϵ���$n��$l��ȥ",
	"damage" : 197,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С�����ʽ����$w���¶������컮��һ���󻡣�ƽƽ����$n��$l��ȥ",
	"damage":200,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С��Ʒ��붴����$w���϶��»���һ���󻡣�ƽƽ����$n��$l��ȥ",
	"damage" : 202,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С�����չ�᡹������Ծ������$w����$n��$l",
	"damage" : 206,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С����ֽ�����$w����һƬ���̣�ƽƽ����$n��$l��ȥ",
	"damage" : 220,
	"damage_type" : "����"
]),
([	"action" : "$N��������棬������ǰһ�ˣ�һ�С������пա���$w��$n��$l��ȥ",
	"damage":200,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С���ɨ÷����������Ծ�ڰ�գ�����$wɨ��$n��$l",
	"damage" : 230,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С�ȴ���齣�������Ծ����أ�$w�س飬���ֹ���$n��$l",
	"damage" : 240,
	"damage_type" : "����"
]),
([	"action" : "$N���Ȱ�����ף�һ�С�����Ʊա���������ָ��ת������$n��$l",
	"damage" : 250,
	"damage_type" : "����"
]),
([  "action" : "$N����š���������鱧��һ�С�����հ�ա���$w�й�ֱ��������$n��$l",
	"damage" : 260,
	"damage_type" : "����"
]),
});

int valid_learn(object me)
{
        object ob;

                if( (int)me->query_skill("taiji-shengong", 1) < 20 )
			return notify_fail("���̫���񹦻���㣬�޷���̫��������\n");

        if( (int)me->query("max_force") < 50 )
                return notify_fail("�������������û�а취��̫��������\n");

        if( !(ob = me->query_temp("weapon"))
        ||      (string)ob->query("skill_type") != "sword" )
                return notify_fail("���������һ�ѽ�������������\n");

        return 1;
}

int valid_enable(string usage)
{
        return usage=="sword" || usage=="parry";
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
notify_fail("�����������������û�а취��ϰ̫��������\n");
        me->receive_damage("kee", 20);
        me->add("force", -3);
        write("�㰴����ѧ����һ��̫��������\n");
        return 1;
}

string perform_action_file(string action)
{
       return __DIR__"taiji-jian/" + action;
}
int power_point()	{	return 1.75;	}
int hard_point()	{	return 3;	}
