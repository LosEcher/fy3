inherit SKILL;
mapping *action = ({
    ([
      "action":
"$N����һ����$w���⻯Ϊ����׹⣬�ֱ���$n���ʺ����Ҽ硢�����ҽ��󼲴�",
      "dodge":		0,
      "parry":	        0,
      "damage":		20,
      "damage_type":	"����",
      "name":		"���ֻ����ҡ�",
      ]),
    ([
      "action":
"$N���²�������������$w����ǰһ��,һƬ���ΰ׹���$n��ȥ��\n"
"$nʶ�����С�����С�ȡ�����������æ��ܲ���",
      "dodge":		10,
      "parry":		-20,
      "damage":		30,
      "damage_type":	"����",
      "name":		"������С�ȡ�",
      ]),
    ([
      "action":
"$N����Ծ������$w����������⣬��$n�����ŵ�ȥ��\n"
"���С��������ޡ���Ȼ��$n�Ƶ���æ����",
      "dodge":		5,
      "parry":	       -10,
      "damage":		20,
      "damage_type":	"����",
      "name": 		"���������ޡ�",
      ]),
	
    ([
      "action":
"$N���类�������,ȹ��ƮƮ������$w��$n������£�\n"
"���С��������ˡ�����ǳ�����������,$n��ֱ������",
      "dodge":		5,
      "parry":	        -5,
      "damage":		30,
      "damage_type":	"����",
      "name": 		"���������ˡ�",
      ]),
    ([
      "action":
"$N����Ʈ��,���μ�ת,ת�ۼ�ͳ���һƬ����һ������Ӱ����л���$n!\n"
"���С��������衹�ȱ���,���˵�,�����ڲ���֮��",
      "dodge":		10,
      "parry":	        -10,
      "damage":		35,
      "damage_type":	"����",
      "name": 		"���������衹",
      ]),
    ([
      "action":
"$N���潣�ߣ�Ѹ�����׵���$n��Χ����һ��������\n"
"$nֻ����Χ������Ӱ����ʱ���п�����һ��$w�����벻����\n"
"λ�ô�����ʵ����Σ������",
      "dodge":	       0,
      "parry":		-15,
      "damage":		15,
      "damage_type":	"����",
      "name": 		"���������á�",
      ]),
});

int valid_learn(object me)
{
    object ob;
    
    if (me->query("family/family_name") != "���ϰ�����")
	return notify_fail("�㲻�ǰ����ִ���,�޷���ϰ�����������\n");
    if ((int)me->query("max_force") < 100)
	return notify_fail("����������㣬�������򽣷��ľ���֮����\n");
    
    if (!(ob = me->query_temp("weapon"))
	||	(string)ob->query("skill_type") != "sword" )
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
    if (me->query("family/family_name") != "���ϰ�����")
	return notify_fail("�㲻�ǰ����ֵ���,�޷���ϰ�����书��\n");
    if ((int)me->query("kee") < 30)
	return notify_fail("�����̫�ͣ�������ȥ����Σ�յģ�\n");
    if ((int)me->query("force") < 5)
	return notify_fail("�������������û�а취���÷��ɽ�����\n");
    me->receive_damage("kee", 30);
	me->add("force", -5);
    write("�㰴����ѧ����һ����ɽ�����\n");
    return 1;
}
