// tianlong-shengfa ������ by ksusan 08/09/97 ԭ������

inherit SKILL;

mapping *action = ({
([	"action" : "$nһʽ��һέ�ɽ�����ǰ��Žż�Ÿ��࿿��������������ˮ�㻬�����ࡣ\n",
	"dodge"  : 10
]),
([	"action" : "$nһʽ�������Ӳ�����˫��ǰ�죬ȫ������ƽ�ɣ���ʱ������$N���������ơ�\n",
	"dodge"  : 20
]),
([	"action" : "$nһʽ���Ʋ����Ρ����㲻�����ֲ�̧��һת�ۼ���Ƶ���$N�����\n",
	"dodge"  : 30
]),
([	"action" : "$nһʽ������Ӱ����һת��䣬����˷�Ʈ����������$n����Ӱ����$N������롣\n",
	"dodge"  : 40
]),
([	"action" : "$nһʽ���������ա���ȫ���ֱ���εض����ڰ����һת�����䵽����Զ�ĵط���\n",
	"dodge"  : 50
]),
([	"action" : "$nһʽ������˫�ɡ��������������������ݷ����У���$Nͷ����Ծ������\n",
	"dodge"  : 60
]),
([	"action" : "$nһʽ��������ˮ����˫�ŵ�أ�ȫ��Ϊһ����Ӱ����������$N���˼�ת��\n",
	"dodge"  : 70
]),
([	"action" : "$nһʽ���ɷ�鳲�������������ݰ㼱ת�������γ�һ�������У���$N������䣬�������á�\n",
	"dodge"  : 80
])
});

mapping query_action(object me, object weapon)
{
	return action[random(sizeof(action))];
}

int valid_enable(string usage)
{
	return usage == "dodge";
}

int valid_learn(object me)
{
	return 1;
}

string query_dodge_msg(string limb)
{
	object me, ob;
	mapping action;

	me = this_player();
	action = query_action(me, ob);

	return action["action"];
}

int practice_skill(object me)
{
	if(me->query("kee")<40)
		return notify_fail("�������̫���ˣ���������������\n");
	me->receive_damage("kee",30);
	return 1;
}
