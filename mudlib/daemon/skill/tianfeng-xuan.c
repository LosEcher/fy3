inherit SKILL;

string *dodge_msg = ({
	"$nһ�С����������ܡ���̤���а��ԣ����缸���ܿ���$N�Ĺ�����\n",
	"$nʹ�������罭�Ϻ�����������ƽƽ�ӳ���������$N�Ĺ�����\n",
	"���������Ȼ��$n����磬��$NĿ�ɿɴ��У�������$N���\n",
	"$n���弱תһ�С���Ҷ����硹����������,��תֱ��,�������ڼ���֮�⡣\n",
	"����$nһ�С�ˮ�����Ƶ���˫�Ų�����ƽƽ�ƿ�,$N�������˿գ�\n",
	"ֻ��$nƽ��Ծ��,���ڽ���������һ��,��������$Nͷ��,����һ�С����缸�����\n",
	"$nһʽ������ϸ����������һ�ӣ�ƽ�ط��𣬷�ɳ��ʯ��$N����Ӱ����������\n",
	"$nʹ�����ٷ���ĺ������ֻ���м�,������Ȼ����,$N�Ȼ�����˿��С�\n",
});

int valid_enable(string usage) { return (usage == "dodge");}

int valid_learn(object me) { return 1; }

string query_dodge_msg(string limb)
{
        return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
        if( (int)me->query("qi") < random(40) )
		return notify_fail("�������������ã��޷���ϰ�������\n");
		me->receive_damage("gin",30);
        return 1;
}

