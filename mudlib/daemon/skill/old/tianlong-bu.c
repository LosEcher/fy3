inherit SKILL;

string *dodge_msg = ({
        "$n������ת��ٿ����һ��Ų�������ߣ��ܹ�����һ�С�\n",
        "$nչ���Ṧ����һ���̰��Ƶ���$N����󲻴�������һ������һ������
          ��һȦ����תһȦ��ˢˢ���й�����\n",
        "$n��Ȼ�����ΰ����ڿ��м�����������ת�ĸ�Ȧ�ӣ���ת���ߣ�
          ����һ��ת�ۣ��������ɵ���������֮�⡣ \n",
       "$n���Ӳ�δվֱ������ת���㼴��������������һ�����̣����ʮ���ɼ䣬                 ��Ʈ����$N��ǰ��$N���ŵñ�ͷ��ܡ�\n",
});

int valid_enable(string usage)
{
        return (usage == "dodge") || (usage == "move");
}

int valid_learn(object me) { return 1; }

string query_dodge_msg(string limb)
{
        return dodge_msg[random(sizeof(dodge_msg))];
}

int practice_skill(object me)
{
        if( (int)me->query("qi") < 40 )
                return notify_fail("�������̫���ˣ���������������\n");
        if (me->query_skill("tianlong-bu", 1) < 30)
                me->receive_damage("qi", 10);
        else if (me->query_skill("tianlong-bu", 1) < 60)
                me->receive_damage("qi", 20);
        else
                me->receive_damage("qi", 30);
        return 1;
}


//  98.6.7  chushuai
