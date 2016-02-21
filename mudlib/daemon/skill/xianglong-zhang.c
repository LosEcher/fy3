// xianglong-zhang.c ����ʮ����
// modified by Venus Oct.1997

inherit SKILL;

mapping *action = ({
([      "action": "$N˫��ƽƽ�ᵽ��ǰ����ɫ���صĻ���ʩ���������лڡ�����$n��$l",
	"damage":100,
    "damage_type": "����"
]),
([      "action": "$NͻȻ���η���˫�ƾӸ�����һ�С��������졹����$n��$l",     
	"damage":120,
    "damage_type": "����"
]),
([      "action": "$N����һ�С����������Ѹ���ޱȵ�����$n��$l",
	"damage":140,
    "damage_type": "����"
]),
([      "action": "$N˫��ʩ��һ�С��轥��½�����������ŷ�������$n��$l",
	"damage":160,
    "damage_type": "����"
]),
([      "action": "$N���ƾ۳�ȭ״������һ�С�Ǳ�����á���������$n��$l",
	"damage":180,
    "damage_type": "����"
]),
([      "action": "$Nʩ��һ�С�����󴨡������Ʋ�������������$n��$l",
	"damage":200,
    "damage_type": "����"
]),
([      "action": "$Nʹ����ͻ�������������ƴӲ����ܵĽǶ���$n��$l�Ƴ�",
	"damage":220,
    "damage_type": "����"
]),
([      "action": "$N���һ����˫��ʹ�����𾪰��������һ�а����$n",
	"damage":240,
    "damage_type": "����"
]),
([      "action": "$Nʹ������Ծ��Ԩ������$n��$l��������",
	"damage":260,
    "damage_type": "����"
]),
([      "action": "$N���λ�����˫��ʹһ�С�˫��ȡˮ��һǰһ����$n��$l",
	"damage":280,
    "damage_type": "����"
]),
([      "action": "$Nʹ������Ծ��Ԩ�������η���˫�Ʋ���һ����$n��$l����",     
	"damage":300,
    "damage_type": "����"
]),
([      "action": "$N˫������ʹ����ʱ����������$n��������",
	"damage":320,
    "damage_type": "����"
]),
([      "action": "$Nʹ�������Ʋ��꡹�����Ʒ�ס$n����·������бб������$l",     
	"damage":340,
    "damage_type": "����"
]),
([      "action": "$Nʹ�����������ڡ���˫�������������$n��$l",
	"damage":360,
    "damage_type": "����"
]),
([      "action": "$N����һת��ͻȻ�۵�$n��ǰ��һ�С���ս��Ұ������$n��$l",     
	"damage":380,
    "damage_type": "����"
]),
([      "action": "$N�Ż��󿪣�һ�С���˪��������$n��$l��ȥ",
	"damage":400,
    "damage_type": "����"
]),
([      "action": "$Nʹ��������ެ����˫���������ϻ���$n��$l",
	"damage":420,
    "damage_type": "����"
]),
([      "action": "$N���ƻ��أ�����ʹһ�С�������β�����»ζ��Ż���$n��$l",     
	"damage":440,
    "damage_type": "����"
]),
});

int valid_enable(string usage) { return usage=="unarmed" ||  usage=="parry"; }  

int valid_learn(object me)
{
    if (me->query_temp("weapon") || me->query_temp("secondary_weapon"))
   return notify_fail("������ʮ���Ʊ�����֡�\n");
    if ((int)me->query_skill("huntian-qigong", 1) < 20)
   return notify_fail("��Ļ���������򲻹����޷�������ʮ���ơ�\n")
;
	if((int)me->query("max_force")<100)
   return notify_fail("�������̫�����޷�������ʮ���ơ�\n");
    return 1;
}

mapping query_action(object me, object weapon)
{
    return action[random(sizeof(action))];
}

int practice_skill(object me)
{
	if((int)me->query("kee")<40)
   return notify_fail("�������̫���ˡ�\n");
	if((int)me->query("force")<10)
   return notify_fail("�����������������ʮ���ơ�\n");
	me->receive_damage("kee",30);
	me->add("force",-5);
    return 1;
}
string perform_action_file(string action)
{
    return __DIR__"xianglong-zhang/" + action;
}
int power_point()	{	return 2;	}
int hard_point()        {       return 2.5;	}


