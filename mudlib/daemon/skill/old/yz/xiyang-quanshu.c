// fonxansword.c

#include <ansi.h>
inherit SKILL;
mapping *action = ({
        ([      "action":               
"$N���ֻ��棬���֡�ֱȭ���������磬ֱ��$n��$l����",
			"dodge":                30,
		"damage":               50,
		"parry":		50,
		"damage_type":"����"
        ]),
        ([      "action":               
"$N˫��΢�������о���һ������ȭ���������߻���$n��$l",
		"dodge":                40,
		"damage":               50,
		"parry":		40,
		"force":		40,
	"damage_type":  "����"
        ]),
        ([      "action":               
"$N���һ��������һ�ǡ���ȭ�����ź�������ֱ��$n��$l",
		"dodge":		40,
		"damage":               50,
		"parry":		40,
		"force":		40,
		"damage_type":  "����"
        ]),
        ([      "action":               
"$N����΢�㣬������գ�ʹ������ȭ��������$n��$l�ͻ���ȥ",
		"dodge":		40,
		"parry":		60,
		"force":		30,
		"damage":		80,
		"damage_type":  "����"
        ]),
        ([      "action":               
"$Nʩչ����ȭ����˫ȭ�������ǣ�����$n��$l��������",
		"dodge":		40,
		"parry":		80,
		"force":		70,
		"damage":		90,
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
