// wuxian-step.c by ksusan 7/12/97 7/27/97 10:00
//�������粽

inherit SKILL;

string *dodge_msg = ({
	"$nʹ��һʽ��������ͷ��������΢�ڣ�������Ͼȴ�䲻�ݷ��Ķ����$N�Ĺ�����\n",
	"$nһ�С�����Ծ����Ѹ���ޱȵ�һ���Ծ����$N�����$N������ȫ�����˿մ���\n",
	"$n������ת��ʹ��һʽ����Ы�κ�����������ת��һ���������ױܿ���$N�Ĺ�����\n",
	"$nͻȻƽ������棬����һ�����а�ת����һʽ������ǧ�������˿�ȥ��\n",
	"$n���е�ʹ��һ�С����ڹ�һ�����û����������Σ�ʹ$N�Ĺ����޴��ɷ���\n",
});
string *dodge_msg_low = ({
// above item is not dodge skill in wuxian-steps, but is ���ܷ�Ӧ
	"$n����ʹ��һʽ��������ͷ�������μ��ڣ���ǿ�����$N�Ĺ�����\n",
	"$nһ�С�����Ծ���������ˮ��һ���Ծ����$N�����$N���������ȫ����$n���ϡ�\n",
	"$n������ת��ʹ��һʽ����Ы�κ�����������ת��һ�����ݿ����ܿ���$N�Ĺ�����\n",
	"$nͻȻƽ������棬����һ��������ſ����һʽ������ǧ������ͷ�������˿�ȥ��\n",
	"$n����ʹ�������ڹ�һ�����û����������Σ���ȴ��㱻$N�Ĵ��С����գ�\n",
});

int valid_enable(string usage) { return (usage == "dodge");}

int valid_learn(object me) { return 1; }

string query_dodge_msg(string limb)
{
        return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
        if( (int)me->query("kee") < 40 )
		return notify_fail("�������̫���ˣ��޷���ϰ�������粽��\n");
		me->receive_damage("kee",20);
        return 1;
}

