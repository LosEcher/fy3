// taiji-jian.c ̫����
// cleansword 2/15/96
// Marz 5/21/96

inherit SKILL;

mapping *action = ({
([	"action" : "$N�鲽������һ�С����ѵ�ˮ��������$w���������һ��������$n��$l",
	"force" : 60,
	"dodge" : 20,
	"parry" : 10,
	"damage" : 85,
        "lvl" : 0,
	"damage_type" : "����"
]),
([	"action" : "$N��ǰ����һ�������ֽ���������$wʹ��һʽ��ָ���롹ֱ��$n��$l",
	"force" : 70,
	"dodge" : 15,
	"parry" : 10,
	"damage" : 80,
        "lvl" : 4,
	"damage_type" : "����"
]),
([	"action" : "$N��������һ�죬���ֽ���������$wʹ��һʽ������ǡ�����$n��$l",
	"force" : 80,
	"dodge" : 15,
	"parry" : 10,
	"damage" : 100,
        "lvl" : 9,
	"damage_type" : "����"
]),
([	"action" : "$N˫ϥ�³�������$wʹ��һʽ��̽��ʽ�������¶��ϼ���$n��$l",
	"force" : 90,
	"dodge" : 15,
	"parry" : 10,
	"damage" : 100,
        "lvl" : 14,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С������Ӳ�����$w���϶��»���һ���󻡣�ƽƽ����$n��$l��ȥ",
	"force" : 100,
	"dodge" : 15,
	"parry" : 15,
	"damage" : 100,
        "lvl" : 19,
	"damage_type" : "����"
]),
([	"action" : "$N���������һš��һ�С�������β��������$w������$n��$l��ȥ",
	"force" : 110,
	"dodge" : 15,
	"parry" : 15,
	"damage" : 120,
        "lvl" : 24,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С�����ɨ����һ�С�����ɨ��������ƽָ��һ���ǳɺ�ɨ$n��$l",
	"force" : 120,
	"dodge" : 10,
	"parry" : 15,
	"damage" : 120,
        "lvl" : 29,
	"damage_type" : "����"
]),
([	"action" : "$N������ϥ������$wбָ��һ�С�����Ͷ�֡�����$n��$l",
	"force" : 130,
	"dodge" : 15,
	"parry" : 15,
	"damage" : 120,
        "lvl" : 34,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С�������ˮ����$w���¶��ϻ���һ���󻡣�ƽƽ�ػ���$n��$l",
	"force" : 140,
	"dodge" : 15,
	"parry" : 15,
	"damage" : 151,
        "lvl" : 39,
	"damage_type" : "����"
]),
([	"action" : "$Nʹ�����������¡���$w��������ԲȦ������ֱ�������಻�ϻ���$n��$l",
	"force" : 150,
	"dodge" : 10,
	"parry" : 20,
	"damage" : 153,
        "lvl" : 44,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С�����Ҷ����$w����ػ�������Բ����Ѹ�ٵ���$n��$l��ȥ",
	"force" : 160,
	"dodge" : 15,
	"parry" : 20,
	"damage" : 175,
        "lvl" : 49,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С�����ͷ����$w����һ������ҸߵĴ󻡣�бб��ն��$n��$l",
	"force" : 170,
	"dodge" : 15,
	"parry" : 20,
	"damage" : 177,
        "lvl" : 54,
	"damage_type" : "����"
]),
([	"action" : "$Nʹ����ʨ��ҡͷ����$w�������󻮳�һ�����֣���$nȦ������",
	"force" : 180,
	"dodge" : 15,
	"parry" : 20,
	"damage" : 179,
        "lvl" : 59,
	"damage_type" : "����"
]),
([	"action" : "$N���̤ʵ���ҽ���㣬һ�С�����ָ·��������$w����һ�Ž���������$n��$l",
	"force" : 190,
	"dodge" : 5,
	"parry" : 20,
	"damage" : 181,
        "lvl" : 64,
	"damage_type" : "����"
]),
([	"action" : "$N����Ծ��һ�С�Ұ����������$w�ڰ���л�ΪһȦ��â������$n��$l",
	"force" : 200,
	"dodge" : 15,
	"parry" : 20,
	"damage" : 183,
        "lvl" : 69,
	"damage_type" : "����"
]),
([	"action" : "$N����ǰ���󹭣�һ�С�����ʽ��������$wֱ��$n��$l",
	"force" : 210,
	"dodge" : 20,
	"parry" : 20,
	"damage" : 185,
        "lvl" : 74,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С�С���ǡ�����������һ�죬���ֽ���������$wƽƽ����$n��$l��ȥ",
	"force" : 220,
	"dodge" : 40,
	"parry" : 20,
	"damage" : 187,
        "lvl" : 79,
	"damage_type" : "����"
]),
([	"action" : "$N������ϣ�һ�С���Գ�׹���������$wбб����$n��$l��ȥ",
	"force" : 230,
	"dodge" : 30,
	"parry" : 20,
	"damage" : 189,
        "lvl" : 84,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С�ӭ�絧������$w���������һ�ӣ�$nȴ����һ�ɾ���ӭ��Ϯ����",
	"force" : 240,
	"dodge" : 20,
	"parry" : 25,
	"damage" : 191,
        "lvl" : 89,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С�˳ˮ���ۡ���$w���϶��»���һ���󻡣�ƽƽ����$n��$l��ȥ��",
	"force" : 250,
	"dodge" : 45,
	"parry" : 25,
	"damage" : 193,
        "lvl" : 94,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С����Ǹ��¡���$w����$n��$l",
	"force" : 260,
	"dodge" : 35,
	"parry" : 25,
	"damage" : 195,
        "lvl" : 99,
	"damage_type" : "����"
]),
([	"action" : "$NͻȻ�̶���������һ�С��������¡���$w���¶��ϵ���$n��$l��ȥ",
	"force" : 270,
	"dodge" : 25,
	"parry" : 25,
	"damage" : 197,
        "lvl" : 104,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С�����ʽ����$w���¶������컮��һ���󻡣�ƽƽ����$n��$l��ȥ",
	"force" : 280,
	"dodge" : 35,
	"parry" : 25,
	"damage" : 99,
        "lvl" : 209,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С��Ʒ��붴����$w���϶��»���һ���󻡣�ƽƽ����$n��$l��ȥ",
	"force" : 290,
	"dodge" : 40,
	"parry" : 25,
	"damage" : 202,
        "lvl" : 114,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С�����չ�᡹������Ծ������$w����$n��$l",
	"force" : 300,
	"dodge" : 45,
	"parry" : 25,
	"damage" : 206,
        "lvl" : 119,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С����ֽ�����$w����һƬ���̣�ƽƽ����$n��$l��ȥ",
	"force" : 310,
	"dodge" : 45,
	"parry" : 25,
	"damage" : 220,
        "lvl" : 124,
	"damage_type" : "����"
]),
([	"action" : "$N��������棬������ǰһ�ˣ�һ�С������пա���$w��$n��$l��ȥ",
	"force" : 320,
	"dodge" : 45,
	"parry" : 30,
	"damage" : 125,
        "lvl" : 229,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С���ɨ÷����������Ծ�ڰ�գ�����$wɨ��$n��$l",
	"force" : 330,
	"dodge" : 45,
	"parry" : 30,
	"damage" : 230,
        "lvl" : 90,
	"damage_type" : "����"
]),
([	"action" : "$Nһ�С�ȴ���齣�������Ծ����أ�$w�س飬���ֹ���$n��$l",
	"force" : 340,
	"dodge" : 35,
	"parry" : 30,
	"damage" : 240,
        "lvl" : 139,
	"damage_type" : "����"
]),
([	"action" : "$N���Ȱ�����ף�һ�С�����Ʊա���������ָ��ת������$n��$l",
	"force" : 350,
	"dodge" : 25,
	"parry" : 30,
	"damage" : 250,
        "lvl" : 144,
	"damage_type" : "����"
]),
([  "action" : "$N����š���������鱧��һ�С�����հ�ա���$w�й�ֱ��������$n��$l",
	"force" : 380,
	"dodge" : 35,
	"parry" : 30,
	"damage" : 260,
        "lvl" : 149,
	"damage_type" : "����"
]),
});

int valid_learn(object me)
{
        object ob;

                if( (int)me->query_skill("taiji-shengong", 1) < 20 )
                        return notify_fail("���̫���񹦻���㣬�޷���̫������
��\n");

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

