// huashan-ken.c ��ɽȭ��
// Modified by Venus Oct.1997

inherit SKILL;

mapping *action = ({
    ([  "action":      "$Nʹһ�С�����Ǭ������ȭ������������ʽʹ�ϣ���ȭ�Ѵ���ȭ֮�״�������׼$n��$l��������һȭ",
	"damage":50,
   "damage_type":  "����"
    ]),
    ([  "action":      "$N��ȭͻȻ�ſ���ȭ�����ƣ�ֱ����Ϊ��ɨ��һ�С����￴��������$n��$l�к���ȥ",
	"damage":100,
   "damage_type":  "����"
    ]),
    ([  "action":      "$N���ֻ�����ԣ�����һȦ��һ�С������������$n��$l����",
	"damage":150,
   "damage_type":  "����"
    ]),
    ([  "action":      "$N����һ������ȭ���һ�У���ȭʹ����÷��ŪӰ������$n$l",
	"damage":200,
   "damage_type":  "����"
    ]),
});

int valid_learn(object me)
{
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
	if( (int)me->query("kee")<30)
   return notify_fail("������������ˣ���Ϣһ�������ɡ�\n");
	me->receive_damage("kee",25);
    return 1;
}

