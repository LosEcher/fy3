// mohe-steps.c
// Ħڭ��
// made by cwj 97/7/6

inherit SKILL;

string *dodge_msg = ({
	"$n��һ�Σ���һ����ʹ��һ��'���˷���ȥ'�����ܿ�$N�Ĺ��ơ�\n",
	"ֻ��$n��������һ�ݣ�ʹ��һ��'����������'����������$N�Ĺ�����\n",
	"$n���²�֪����ƶ���������䡣ʹ��һ��'���Իӽ�'\n",
	"����$n���β�����ʹ��һ��'ǧ�ﲻ����'��������һ��������$N�ı���\n",
	"ȴ��$n����������ŵع��˿�ȥ���Ǳ��Ķ��$N������һ�С�\n",
	"$n����������������£���һ�С�������Ϊ�᡹�����$N�Ľ�����\n",
	"��Ȼ$nԾ���գ�����һŤ��ʹ��һ��'��������'�����ɵıܿ���$N�Ľ�����\n",
});

int valid_enable(string usage) { return (usage == "dodge");}

int valid_learn(object me) { return 1; }

string query_dodge_msg(string limb)
{
        return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
	if( me->query("kee")<40)
		return notify_fail("�������̫���ˣ��޷���ϰ�������ǲ���\n");
		me->receive_damage("kee",15);
	write("�㰴��ѧ����һ�顸�������ǲ�����\n");
        return 1;
}

