// duanyun-fu.c ���Ƹ�
// Modified by Venus Oct.1997

inherit SKILL;

mapping *action = ({
([  "action" : "$N����ڿ�Ծ��˫�ֽ���$w����׼$n��ͷ�������϶��µؿ�����ȥ��
ֻ�ڰ��������һ�ž޴�ĺ�Ӱ",
	"damage":100,
    "damage_type" : "����",
                "post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
]),
([  "action" : "$NͻȻ��һ��������ǰ����������$w���¶��Ϸ���$n����·��$n����
һ������ɫ����Ӱ�����Լ�����֪�����æ�м�",
	"damage":150,
    "damage_type" : "����",
                "post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
]),
([  "action" : "$N��Ȼ����һ��������б����ǰ�����һ��������΢�Σ�����$w�ڿ�
�л���һ����Ӱ�����ٺ�ɨ$n���Ҽ磬��������",
	"damage":200,
    "damage_type" : "����",
                "post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
]),
([  "action" : "$NͻȻ�������ҹ������漴���𣬾��������һ˲�䣬�ѵ�������$w
����$n�����ߣ����ּȿ��Һ�",
	"damage":250,
    "damage_type" : "����",
                "post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
]),
([  "action" : "$N˫�ֺ��$w��ƽɨ$nǰ�أ���ʽδʹ�Ͼ��Ѵ�ס�Ȼ���У�����ֱ
ײ$n��С����",
	"damage":300,
	"damage_type":"����",
                "post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
]),
([  "action" : "$N����������ת��΢�ף�$n��$N¶����������æ������ȴͻȻ����$N
��������ת����������$w��Ѹ�͵�ɨ���Լ�������",
	"damage":400,
    "damage_type" : "����",
                "post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
]),
([  "action" : "$N����΢��������ͬһʱ�������������ҿ����師��$n�����$w�Ӳ�
ͬ�ķ�λ�����Լ���һʱ�侹��֪������м�",
	"damage":500,
    "damage_type" : "����",
                "post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
]),
([  "action" : "$Nǰ���͵�������һ�٣����Ҳ΢΢һ�𣬽��ž���ͷ��ͷ����ת
��Ȧ��$w����������֮��ƽֱ�����ȵ�Ϯ��$n��$n������δ����㣬
�ܿ����������Լ�����һ�ߣ����ɴ�ʧɫ",
    "damage": 600,
    "damage_type" : "����",
                "post_action":  (: call_other, WEAPON_D, "bash_weapon" :),
])
});

int valid_enable(string usage) { return usage=="axe" ||  usage=="parry"; }      

int valid_learn(object me)
{
    if ((int)me->query_skill("force", 1) < 20)
   return notify_fail("����ڹ��ķ���򲻹����޷�ѧ���Ƹ���\n");
	if((int)me->query("max_force")<150)
   return notify_fail("�������̫�����޷������Ƹ���\n");
    return 1;
}


mapping query_action(object me, object weapon)
{
	return action[random(sizeof(action))];
}

int practice_skill(object me)
{
    object weapon;
    if (!objectp(weapon = me->query_temp("weapon"))
    || (string)weapon->query("skill_type") != "axe")
	return notify_fail("��ʹ�õ��������ԡ�\n");
	if((int)me->query("kee")<50)
    return notify_fail("�������̫���ˡ�\n");
	if((int)me->query("force")<20)
   return notify_fail("����������������Ƹ���\n");
	me->receive_damage("kee",35);
	me->add("force",-10);
return 1;
}
string perform_action_file(string action)
{
    return __DIR__"duanyun-fu/" + action;
}

