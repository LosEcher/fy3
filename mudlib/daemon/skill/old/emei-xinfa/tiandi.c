#include <ansi.h>

int exert(object me, object target)
{      if( me->is_fighting() || target->is_fighting())
                return notify_fail("ս�����޷��˹����ˣ�\n");

        if( !target || target == me)
              {if( me->is_fighting() )
                return notify_fail("ս�����˹����ˣ�������\n");

              if (me->is_busy() )
                return notify_fail("����æ���ģ�\n");

               if ((int)me->query_skill("emei-xinfa", 1) < 30)
                return notify_fail("��Ķ�ü�ķ���Ϊ��������\n");
               if( (int)me->query("force") < 30 )
                return notify_fail("�������������\n");
               if( (int)me->query("eff_kee") >= (int)me->query("max_kee")  )
                return notify_fail("��û�����ˡ�\n");
               if( (int)me->query("eff_kee") < (int)me->query("max_kee") / 5 )
                return notify_fail("���Ѿ����˹��أ�ֻ��һ��������������Σ�գ�\n");

               write(HIY"��ϰ�ض�����Ĭ���ü�ķ�����ء����������ü�ķ�����ʼ���ˡ�\n" NOR);
               message_vision(HIW"ֻ��$N�³�һ����Ѫ����ɫ�������ö��ˡ�\n" NOR,me);

               me->receive_curing("kee", 10 + (int)me->query_skill("force") / 5 );
               me->add("force", -30);
               me->set("force_factor", 0);

               return 1;
              }


        if( (int)me->query("max_force") < 300 )
                return notify_fail("���������Ϊ������\n");

        if( (int)me->query("force") < 150 )
                return notify_fail("�������������\n");

        if( (int)target->query("eff_lee") < (int)target->query("max_kee") / 10 )
                return notify_fail( target->name() +
                        "�Ѿ����˹��أ����ܲ����������֮�𵴣�\n");
       if( (int)target->query("eff_kee") >= (int)target->query("max_kee") )
              return notify_fail( target->name() + "����ȥ����û��ʲô����,�ƺ����������ˡ�\n");
        message_vision(
 MAG "$Nϰ�ض�����Ĭ���ü�ķ�����ء����������ü�ķ���ʼΪ$n����... \n"
                "$N�����֮������������,һ������$n�����,һ�ư���$n����,���۵ĵõ�������������$n����...  \n"
              "���˲���,ֻ��$n���Կ�ʼ����˿˿����,����Խ��ԽŨ... \n\n"
              "ֻ��$n�³�һ����Ѫ����ɫ�������ö��ˡ� \n" NOR,
                me, target );

        target->receive_curing("kee", 20 + (int)me->query_skill("force")/2 );
       target->receive_curing("gin", 10 + (int)me->query_skill("force")/3 );
        target->add("kee", 10 + (int)me->query_skill("force")/3 );
        if( (int)target->query("kee") > (int)target->query("eff_kee") ) target->set("kee", (int)target->query("eff_kee"));

        me->add("force", -150);
        me->set("force_factor", 0);
                me->start_busy(1);
                target->start_busy(5);
        return 1;
}
