#include <ansi.h>
inherit FORCE;

int valid_enable(string usage)
{
        return usage == "force";
}

// #include "force.h"

int valid_learn(object me)
{
        int i, nb, nf, nh;
//        nb = (int)me->query_skill("dacheng-fofa", 1);
        nf = (int)me->query_skill("force", 1);
        nh = (int)me->query_skill("emei-xinfa", 1);

//        if ( nb < 10 && nb <= nh )
//                return notify_fail("��Ĵ�˷���Ϊ�������޷�����������ټ�ʮ��ׯ��\n");

        if ( nf < 15)
 return notify_fail("��Ļ����ڹ���򻹲������޷�����ü�ķ���\n");
          return 1;
     //   return valid_public(me);
}


int practice_skill(object me)
{
        return notify_fail("��ü�ķ�ֻ����ѧ(learn)�������������ȡ�\n");
}

string exert_function_file(string func)
{
        return __DIR__"emei-xinfa/" + func;
}
mapping exercise_msg(object me)
{
  return ([
    "status_msg" : HIR + me->name()+"���Ϻ�����֣�˫�ִ�����ϥ����" NOR,
    "start_my_msg" : HIR"��ϯ�ض������������죬���Ϻ��ʱ��ʱ�֣���Ϣ˳��������������\n"NOR,
    "start_other_msg" : MAG + me->name() +"ϯ�ض������������죬���Ϻ��ʱ��ʱ�֡�\n"NOR,
    "halt_msg" : HIW"$N����һ����������Ϣ�������˻�ȥ��վ��������\n"NOR,
    "end_my_msg" : HIC"�㽫��Ϣ���˸�С���죬���ص���չ�վ��������\n"NOR,
"end_other_msg" : HIR"��һ���"+me->name()+"��������ĵ�վ��������\n"NOR
                    ]);
}
