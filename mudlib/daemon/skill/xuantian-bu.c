//���첽��
inherit SKILL;

string *dodge_msg = ({
		"$nһ�С�������Ʒɡ��������ɵر��˿�ȥ��\n",
		"ֻ��$n��Ӱһ�Σ�һʽ�����������С����ѱ����߳�֮�⡣\n",
		"$nʹ������������·�����������ɵ�������\n",
		"$n����һ�㣬һ�С�̤ѩ���޺ۡ��ڿն��𣬱��˿�ȥ��\n",
		"����$nʹһ�С���������ࡹ����������Ʈ�˿�ȥ��\n",
		"$n��Ӱ΢�����Ѿ���һ�С���Ҷ���޸�������������\n",
		"����$nһ�С����������ࡹʹ���������Ƶ�$N���ᣡ\n",
		"����$n����Ʈ��������һ�ݣ�һ�С��������ɡ����ܿ���һ����\n",
		"$n��������һ�Σ�һ�С�����ƾ��Ծ����һ��ת����������֮�⡣\n",
});

int valid_enable(string usage)
{
	return (usage=="dodge");
}

int valid_learn(object me)
{

        return 1;
}

string query_dodge_msg(string limb)
{
        return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
		if( (int)me->query("kee") < 30)
			return notify_fail("��������������������첽����\n");
        me->receive_damage("kee", 30);
        return 1;
}
