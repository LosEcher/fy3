// mohe-steps.c
// Ħڭ��
// made by cwj 97/7/6

inherit SKILL;

string *dodge_msg = ({
	"$n��һ�Σ���һ���������ܿ�$N�Ĺ��ơ�\n",
	"ֻ��$n��������һ�ܣ�ͻȻ��������������Ľ����������$N�Ĺ�����\n",
	"$n���²�֪����ƶ���������䡣\n",
	"����$n���β�������������һ��������$N�ı���\n",
	"ȴ��$n����������ŵع��˿�ȥ���Ǳ��Ķ��$N������һ�С�\n",
	"$n����������������£���һ�С������š������$N�Ľ�����\n",
	"��Ȼ$nԾ���գ�ͷ�½���ͻȻ׹�أ����յıܿ���$N�Ľ�����\n",
});

int valid_enable(string usage) { return (usage == "dodge");}

int valid_learn(object me) { return 1; }

string query_dodge_msg(string limb)
{
        return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
        if( (int)me->query("qi") < 40 )
		return notify_fail("�������̫���ˣ��޷���ϰĦڭ����\n");
		me->receive_damage("kee",30);
        return 1;
}

