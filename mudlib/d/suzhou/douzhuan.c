inherit FORCE;

int valid_enable(string usage) { return usage=="parry";}

int valid_learn(object me) { return 1; }

int practice_skill(object me)
{
        return 
notify_fail("��ղ�����ֻ����ѧ�ġ�\n");
}

 
int effective_level() { return 20;}

string *absorb_msg = ({
		"$nʹ����ת���ƣ�����������ת��$N�����ϡ�\n",
});

string query_absorb_msg()
{
        return absorb_msg[random(sizeof(absorb_msg))];
}

int bounce_ratio()
{
        return 10;
}

int learn_bonus()
{
        return -10;
}
int practice_bonus()
{
        return -5;
}
int black_white_ness()
{
        return 20;
}
