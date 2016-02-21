// jinshe-sword.c ���߽��� by ksusan 7/26/97 19:00
// 

inherit SKILL;

string *dodge_msg = ({
        "ͻȻ֮�䣬$N������������࣬��ʱ�ֻص���ԭ�أ������$N��һ�С�\n",
        "$n�ֱۻ�ת����$N������һ�ƣ�˳������һ�ԡ�\n",
        "$n�����������$N������Ѹ���ޱȵ�һ����˳������һ�ԡ�\n",
        "$n����Ʈ����������ȣ�ת�˼�ת���Ʋ���$N����󣬶����$N��һ�С�\n",
        "$Nֻ����ǰһ�����ƺ�����$n����һ�ϣ����漴�ּ�$n�ص�ԭ�أ�ȴ�ƴ�δ�뿪��\n",
	"$N�۾�һ����$n��û����Ӱ��ͻȻ$n���������һ��$N��ͷ������Ծ����\n",
	"$n�ѽ�һ�ᣬ���������ǿ����ʱ�̵�$N�۾�һ�ᣬ$N����֪����Ǻã�ͣס�˹�����\n",
});

mapping *action = ({
([      "action":"ͻȻ֮�䣬$N������ǰ�������࣬��ʱ�ֻص���ԭ�أ��������û���ƶ���",
        "force" : 80,
        "dodge" : -40,
        "damage": 40,
        "lvl" : 0,
        "skill_name" : "���߳���",
        "damage_type":  "����"
]),
([      "action":"$N����һ�٣�������𣬽�����$n������Ѹ���ޱȵ�һ�㣬$n��Щ�����Լ���ͷ",
        "force" : 100,
        "dodge" : -30,
        "damage": 50,
        "lvl" : 0,
        "skill_name" : "��������",
        "damage_type":  "����"
]),
([      "action":"ͻȻ�佣��һ����$N��$n���۾���$w��������ʱ�����ϣ��ڵ�$n�������Ծ��ԭ��",
        "force" : 120,
        "dodge" : -60,
        "damage": 70,
        "lvl" : 25,
        "skill_name" : "���߲���",
        "damage_type":  "����"
]),
([      "action":"$NͻȻ���з�һ�䣬$w�󿪴��أ��Խ��е�������ʽ������ס�$n����֮�з������",
        "force" : 140,
        "dodge" : -40,
        "damage": 50,
        "lvl" : 5,
        "skill_name" : "�з�һ��",
        "damage_type":  "����"
]),
([      "action":"$N����Ʈ����������ȣ�����Ұڣ��Ʋ���$n����࣬$n�ε�����",
        "force" : 160,
        "dodge" : -40,
        "damage": 110,
        "lvl" : 10,
        "skill_name" : "�������",
        "damage_type":  "����"
]),
([      "action":"$Nһ����Ц������Ｒ����ǰ��һ˲֮�䣬��$n����Ѳ���һ�ߣ�$w�漴�ݳ�",
        "force" : 140,
        "dodge" : -5,
        "damage": 120,
        "lvl" : 10,
        "skill_name" : "������ǰ",
        "damage_type":  "����"
]),
([      "action":"$N�ȵ������ã������㼴�γ�$w�����������������������μ�׷����",
        "force" : 180,
        "dodge" : -30,
        "damage": 70,
        "lvl" : 0,
        "skill_name" : "��������",
        "damage_type":  "����"
]),
([      "action":"$nֻ����ǰһ�����ƺ�����$N����һ�ϣ����漴�ּ�$N�ص�ԭ�أ�ȴ�ƴ�δ�뿪",
        "force" : 200,
        "dodge" : -80,
        "damage": 120,
        "lvl" : 20,
        "skill_name" : "��ǰһ��",
        "damage_type":  "����"
]),
([      "action":"$N����ˣ�$n��׷������ͻȻ��$Nһ����ͣ������$w��ָ��$n��$l��",
        "force" : 220,
        "dodge" : -10,
        "damage": 60,
        "lvl" : 5,
        "skill_name" : "�����",
        "damage_type":  "����"
]),
([      "action":"$N��س嵽$n��ǰ������$wֱ��$n�ʺ�$n��æ�мܣ�����$N��$wͻȻת��",
        "force" : 240,
        "dodge" : 4,
        "damage": 120,
        "lvl" : 45,
        "skill_name" : "ֱ���ʺ�",
        "damage_type":  "����"
]),
([      "action":"$N����Ծ��$ņ��һ����������$N����ͷ�½���ֱ����£�����$w����$n��$l",
        "force" : 340,
        "dodge" : 20,
        "damage": 95,
        "lvl" : 64,
        "skill_name" : "����Ծ��",
        "damage_type":  "����"
]),
([      "action":"$N���μ�ת��$n��ǰ�·�ͻȻ������������$N��������$wһ�����$n",
        "force" : 380,
        "dodge" : 60,
        "damage": 110,
        "lvl" : 79,
        "skill_name" : "���μ�ת",
        "damage_type":  "����"
]),
});


int valid_enable(string usage) 
{ 
    return usage == "sword" || usage == "dodge" || usage == "parry"; 
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
        level   = (int) me->query_skill("jinshe-sword",1);
        for(i = sizeof(action); i > 0; i--)
                if(level > action[i-1]["lvl"])
                        return action[random(i)];
}

string query_dodge_msg(string limb)
{
        return dodge_msg[random(sizeof(dodge_msg))];
}

int valid_learn(object me)
{
		object ob;
		ob = present("jinshe sword", me);
		if (!ob){
        	return notify_fail("���߽���ֻ��ͨ����ϰ���߽��ϵġ��������š�����ߡ�\n");
		}
		return 1;
}

