// ����

inherit SKILL;

string *dodge_msg = ({
	"ֻ��$n����һ�����ȣ����ˤ����ȴ�պö����$N�Ĺ�����\n",
});

mapping *action = ({
([      "action":"$Nһ�����ģ��ƺ���Щ���֣�����֮���������$n��Ҫ����",
        "force" : 200,
        "dodge" : -100,
        "damage": 100,
        "skill_name" : "һ����",
        "damage_type":  "����"
]),

([      "action":"$N��Ų����ҽ��ϣ������Լ�һ��ͷ��$w�ѷ���$n��Ҫ����",
        "force" : 100,
        "dodge" : -80,
        "damage": 100,
        "skill_name" : "��������",
        "damage_type":  "����"
]),
});

int valid_enable(string usage) 
{ 
    return usage == "sword" || usage == "dodge" || usage == "parry"; 
}

mapping query_action(object me, object weapon)
{
        int i;
        for(i = sizeof(action); i > 0; i--)
                        return action[random(i)];
}

string query_dodge_msg(string limb)
{
        return dodge_msg[random(sizeof(dodge_msg))];
}

