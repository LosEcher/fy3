#include <ansi.h>

int exert(object me)
{       
        int nh, improve;
        nh = (int)me->query_skill("emei-xinfa");
        improve = nh * 3 / 2;
        if( me->is_fighting() )
                return notify_fail("ս�����˹���������\n");

        if (me->is_busy() )
        return notify_fail("����æ���ģ�\n");

        if ((int)me->query_skill("emei-xinfa", 1) < 150)
                return notify_fail("��Ķ�ü�ķ���Ϊ��������\n");

        if( (int)me->query("force") < 150 )
                return notify_fail("�������������\n");
        
      if( me->query_temp("yun_yinyang")   )
                return notify_fail("���������ö�ü�ķ��ġ��������־���\n");
        write(HIW"�㰵��������ׯ����ȡ�����������۾��������پ�����������\n"NOR, me);

        message_vision(HIW"ֻ��$N����ƣ������ת˲��㾫���ӡ�\n"NOR,me);

        me->add("eff_sen", improve );
        me->add("sen", improve);
        me->add("eff_gin", improve);
        me->add("gin", improve);
        me->add("max_kee", improve);
        me->add("kee", improve);
        me->set_temp("yun_yinyang", 1);  
        me->add("force", - 150);    
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, improve :), nh * 3/2);
        return 1;
}
void remove_effect(object me, int improve)
{
      me->add("eff_gin", - improve);
      me->add("max_kee", - improve);
      me->add("eff_sen", - improve);
      me->delete_temp("yun_yinyang");
 tell_object(me, HIR"��Ķ�ü�ķ����������־��˹���ϣ�����������ɫ�ö��ˡ�\n"NOR);
}
