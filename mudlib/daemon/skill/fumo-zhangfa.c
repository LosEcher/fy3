// TIE@FY3
inherit SKILL;
mapping *action = ({
        ([      "action":               
"$Nʹһ�С��������������$w�趯��ɣ�ɨ��$n���̣�",
		"damage":100,
                "post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
                "damage_type":  "����"
        ]),
        ([      "action":               
"$N����$w��һ�С���Ŀ������������$wֻ�����أ�����$n$l��",
		"damage":200,
                "post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
                "damage_type":  "����"
        ]),
        ([      "action":               
"$N�������$w��ʹ�������Ӻ�ա�������$w���ն��£�����$n$l��",
		"damage":300,
                "post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
                "damage_type":  "����"
        ]),
        ([      "action":               
"$Nʹ��һ�С��ຣ�Ⱥ�����$w�󿪴�ϣ�ײ��$n$l��",
		"damage":400,
                "post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
                "damage_type":  "����"
        ]),
        ([      "action":
"$N����$w��һ�С���Ŀ������������$wֻ�����أ�����$n$l��",
		"damage":500,
                "post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
                "damage_type":  "����"
        ]),
        ([      "action":
"$N�������$w��ʹ�������Ӻ�ա�������$w���ն��£�����$n$l��",
		"damage":600,
                "post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
                "damage_type":  "����"
        ]),
});

int valid_learn(object me)
{
	if((int)me->query_str()<35)
                return 
notify_fail("���������������Ҳ�����һ����������ǿ������\n");

        return 1;
}

int valid_enable(string usage)
{
        return (usage=="staff") || (usage=="parry");
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

int practice_skill(object me)
{
        object weapon;

        if( !objectp(weapon = me->query_temp("weapon"))
        ||      (string)weapon->query("skill_type") != "staff" )
                return 
notify_fail("���������һ��ľ�Ȼ��������Ƶ��������������ȷ���\n");

        if( (int)me->query("kee") < 60 )
                return 
notify_fail("������������������ȷ�����������Ϣ��Ϣ�ɡ�\n");
	me->receive_damage("kee",50);
        return 1;
}
 
string perform_action_file(string action)
{
	return __DIR__"fumo-zhangfa/"+action;
}

