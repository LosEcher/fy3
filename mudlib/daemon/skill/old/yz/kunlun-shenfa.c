 // kunlun-shenfa.c by wangzc 30/8/97
 // ������

inherit SKILL;

string *dodge_msg = ({
    "$nʹ��һʽ���������ء�������΢�ڣ�������Ͼȴ�䲻�ݷ��Ķ����$N�Ĺ�����\n",
   "$nһ�С���ӥչ�᡻��Ѹ���ޱȵ�һ���Ծ����$N�����$N������ȫ�����˿մ���\n",
    "$n������ת��ʹ��һʽ��������ҡ���������ת��һ���������ױܿ���$N�Ĺ�����\n",
   "$n���е�ʹ��һ�С���Ů���󡻣��û����������Σ�ʹ$N�Ĺ����޴��ɷ���\n",
   "$nͻȻƽ������棬����һ�����а�ת����һʽ����ӥ���á����˿�ȥ��\n",
});
string *dodge_msg_low = ({
// above item is not dodge skill in wuxian-steps, but is ���ܷ�Ӧ
    "$n����ʹ��һʽ���������ء������μ��ڣ���ǿ�����$N�Ĺ�����\n",
    "$nһ�С���ӥչ�᡻�������ˮ��һ���Ծ����$N�����$N���������ȫ����$n���ϡ�\n",
   "$n������ת��ʹ��һʽ��������ҡ���������ת��һ�����ݿ����ܿ���$N�Ĺ�����\n",
   "$n����ʹ������Ů���󡻣��û����������Σ���ȴ��㱻$N�Ĵ��С����գ�\n",
   "$nͻȻƽ������棬����һ��������ſ����һʽ����ӥ���á���ͷ�������˿�ȥ��\n",
});

int valid_enable(string usage) { return (usage == "dodge");}

int valid_learn(object me) { return 1; }

string query_dodge_msg(string limb)
{
        return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
        if( (int)me->query("kee") < 20 )
        return notify_fail("�������̫���ˣ��޷���ϰ�����ķ���\n");
        me->receive_damage("kee",25);
        return 1;
}

