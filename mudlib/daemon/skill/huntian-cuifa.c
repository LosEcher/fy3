// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
//�����촸��??

/*
  dodge  15    parry  -15    damage  30
�䴸��ֱ��ֱȥ������Ϊʵ���ƴ����ͣ��мֵܵ�
��Ϊ���ף�һ���������˺����󡣵������ǲ�����
ӯ��
*/

inherit SKILL;

mapping *action = ({
   ([   "action":   "$N����$wһת������һ��ǿ���ķ�������$n��$l��
��һ���ּ����ͣ��ƴ����ݣ��ۼ��͵���$n��ǰ",
	"damage":100,
     "damage_type":   "����",
	"post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
   ]),
   ([   "action":   "$N˫��һ������$w�д������װ����������ͷ�����ؾ���$n���˹�ȥ",
	"damage":150,
     "damage_type":   "����",
	"post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
   ]),
   ([   "action":   "$N��$w�߾ٹ��磬�����������׼$n��$l��������һ��",
	"damage":200,
     "damage_type":   "����",
	"post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
   ]),
   ([   "action":   "$N�������飬����$w���Ϻ��£�����׽������ȥ·��
����$nһ��㱼䣬��ৡ�������$n��$l",
	"damage":250,
     "damage_type":   "����",
	"post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
   ]),
   ([   "action":   "$N����$n����֮������ת$w�����Ѵ�����$n��
��һ���������о��������Ϣ�ĵ�����$n��$l",
	"damage":300,
     "damage_type":   "����",
	"post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
   ]),
   ([   "action":   "$N����$w�ͻ��˸���Բ�����������ɳ�����
��$n���ܱ���֮�ǣ�����$wбб������$n��$l",
	"damage":350,
     "damage_type":   "����",
	"post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
   ]),
});

int valid_learn(object me)
{
        object ob;

        if( (int)me->query("max_force") < 50 )
                return notify_fail("�������������û�а취�����촸��\n");

        if( !(ob = me->query_temp("weapon"))
        ||      (string)ob->query("skill_type") != "hammer" )
                return notify_fail("���������һ���󴸲��������촸��\n");

        return 1;
}

int valid_enable(string usage)
{
        return usage=="hammer" || usage=="parry";
}

mapping query_action(object me, object weapon)
{
        return action[random(sizeof(action))];
}

int practice_skill(object me)
{
        if( (int)me->query("kee") < 50
        ||      (int)me->query("force") < 50 )
                return
notify_fail("�����������������û�а취��ϰ���촸��\n");
        me->receive_damage("kee", 30);
	me->add("force",-10);
        write("�㰴����ѧ����һ����촸��\n");
        return 1;
}

string perform_action_file(string action)
{
	return __DIR__"huntian-cuifa/"+action;
}

