// lingboweibu.c �貨΢��

inherit SKILL;

string *dodge_msg = ({
	"ֻ��$n��һ������һ��������׾ٵĶ��$N��һ�С�\n",
	"����$n����һ�����Ӳ���˼��ĽǶ�ת���������ܿ���$N�Ĺ�����\n",
	"Ȼ��$nȴ���˷��������²�����Ī�⣬��ʹ$N�Ĺ���ȫ����ա�\n"
        "����$n����Ʈ������ǰ���󣬺�����ң���$N�޷����֡�\n",
        "����$n������ת���Ų�΢�䣬�˾���������֮�⣬��������һ�С�\n",
        
        });

int valid_enable(string usage) 
{ 
	return usage=="dodge";
}

int valid_learn(object me) { return 1; }

string query_dodge_msg(string limb)
{
        return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
	if((int)me->query("kee")<40)
                return notify_fail("�������̫���ˣ��������貨΢����\n");
	me->receive_damage("kee",30);
        return 1;
}

int power_point()	{	return 2;	}
int hard_point()	{	return 3;	}

