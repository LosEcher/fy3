// lingbo-steps.c 
// written by xzz

inherit SKILL;

string *dodge_msg = ({
        "$n��������������બ�Ѿ���һ�С��������ӡ�����������\n",
        "$n������һ�˪�����һ�֣�һ�С��������ޡ��ѱ��˿�ȥ��\n",
        "$nһ�С�΢����������$Nֻ����ǰһ����������$n����Ӱ��\n",
        "$nһ�С��������á�������΢�Σ��Է�����˼�ĽǶȱܿ���$N��һ�С�\n",
        "����$nһ�С�հ���ں�ʹ������Ȼ�Ƶ�$N���ᣡ\n",     
        "ȴ��$nһ�С��貨���ӡ����������һ�����ۣ��������ۡ�\n",        
        "����$nʹһ�С��������ˡ�����������ɴһ��Ʈ�˿�ȥ��\n",
});

int valid_enable(string usage) { return (usage == "dodge");}

int valid_learn(object me) { return 1; }
string query_dodge_msg(string limb)
{
        return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
        if( (int)me->query("kee")<40)
                return notify_fail("�������̫���ˣ��������貨΢��\n");
        me->receive_damage("kee",30);
        return 1;
}
int power_point()       {       return 2;       }
int hard_point()        {       return 3;       }

