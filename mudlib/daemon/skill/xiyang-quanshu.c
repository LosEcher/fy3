// fonxansword.c

#include <ansi.h>
inherit SKILL;
mapping *action = ({
        ([      "action":               
"$N���ֻ��棬���֡�ֱȭ���������磬ֱ��$n��$l����",
		"damage":100,
		"damage_type":"����"
        ]),
        ([      "action":               
"$N˫��΢�������о���һ������ȭ���������߻���$n��$l",
		"damage":200,
	"damage_type":  "����"
        ]),
        ([      "action":               
"$N���һ��������һ�ǡ���ȭ�����ź�������ֱ��$n��$l",
		"damage":300,
		"damage_type":  "����"
        ]),
        ([      "action":               
"$N����΢�㣬������գ�ʹ������ȭ��������$n��$l�ͻ���ȥ",
		"damage":400,
		"damage_type":  "����"
        ]),
        ([      "action":               
"$Nʩչ����ȭ����˫ȭ�������ǣ�����$n��$l��������",
		"damage":500,
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
        return 1;
}
