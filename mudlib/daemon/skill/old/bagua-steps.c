// bagua-step.c
// �Ź����Բ�

inherit SKILL;

string *dodge_msg = ({
	"$nһ�С�˲Ϣǧ���̣Ǭλ���������ɵرܿ���$N�Ĺ�����\n",
	"ֻ��$n����һת��һʽ������ж�ס���Ȼ̣������λ������Ȼ��������$N�Ĺ�����\n",
	"����$nʹһ�С���˷���롹����λ̣ȥ��$N��ǰһ�����Ѿ�������$n����Ӱ��\n",
	"$n���弱תһ�С��������衹��ͻȻ����һ������$N����һ��$n�Ѿ����˿�λ��\n",
	"����$nһ�С����������̣��λ��Ծ����һ�󲽣�$N��������$n���½�Ҳû������$n��\n",
	"ֻ��$nһʽ�����ϵر������Ѿ���$N��ͷ��Ծ������λ��\n",
	"$nһʽ���ߵ�������̣���λ�����Ϊ֮ɫ�䣬$N��ɫһ�䣬�������˽�����\n",
	"ֻ��$nͻȻʹ��һ�С�Ǭ�����á�����$N��֪�����о͵�����λ��\n",
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
		return notify_fail("�������̫���ˣ��޷���ϰ�Ź����Բ���\n");
		me->receive_damage("kee",30);
        return 1;
}

