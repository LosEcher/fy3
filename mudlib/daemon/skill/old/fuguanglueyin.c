inherit SKILL;

string *dodge_msg = ({
	"ֻ��$nһ��[��������],˫��һǰһ��,�ƽ�����,��$nһ㶼����˹�����\n",
	"����$nʹ��[���ѵ�ˮ],�ż�վ��,���ζ��������,�������\n",
	 "$nһ��[�ɻ��ڴ�],������ת,ɲ�Ǽ���ԭ��ת���߰�ʮȦ,ͻȻ����
	 ��һ��,ԭ��ת����,ȴʹ$N���˿ա�\n",
	"����$nһ��[�׾Թ�϶],����΢��,����ֱ��,���$N������\n",
	"ȴ��$nʹ��[������Ӱ],��ԭ������һ������,����㵽��һ�ߡ�\n",
	"$n����һ��,[������˹],����ƽƽ�ӳ�,�ڿ�������һ�����Ρ�\n"
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
		return notify_fail("�������̫���ˣ�������������Ӱ��\n");
	me->receive_damage("kee", 35);
	return 1;
}

