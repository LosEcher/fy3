inherit SKILL;

string *dodge_msg = ({
	"ֻ��$nʹ��[�����貨],�¾�ƮƮ,�������貨̤ˮ,���ټ���,�ѱܿ�������\n",
	"����$nʹ��[������],��������,�ڿ��������߲�,����$NѰ��֮�⡣\n",
	 "$nһ��[��������],��̤����,�Ʒ�����,�������ܹ�$N��һ�С�\n",
	"����$nһ��[������ӿ],�����类�������,ƮƮ�����䵽$N���\n",
	"ȴ��$nʹ��[�������],һ��ż���,��������,��������,$N���п����˿ա�\n",
	"$nʹ��[�����ɪ],һ������,ͦ��ǰ��,����׳ʿһȥ������֮��,
	$N������������,ֻ���˿���\n"
});

int valid_enable(string usage) { return (usage == "dodge"); }

int valid_learn(object me) { return 1; }

string query_dodge_msg(string limb)
{
	return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
	if( (int)me->query("kee") < 45 )
		return notify_fail("�������̫���ˣ��������������\n");
	me->receive_damage("kee", 35);
	return 1;
}

