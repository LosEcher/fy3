#include <ansi.h>

int exert(object me)
{       
        int improve;

        if( me->is_fighting() )
                return notify_fail("ս�����˹����ˣ�������\n");

        if (me->is_busy() )
        return notify_fail("����æ���ģ�\n");

        if ((int)me->query_skill("emei-xinfa", 1) < 100)
                return notify_fail("��Ķ�ü�ķ���Ϊ��������\n");

        if( (int)me->query("force") < 150 )
                return notify_fail("�������������\n");
        
      if( me->query_temp("yun_fengyun")   )
        return notify_fail("���������ö�ü�ķ��ġ����ơ��־���\n");
write(MAG"�㰵�˷�����ׯ����˼����Ʈ��֮���л�����Ĭ���絴��֮Ѹ�ٽ���һ�ɵ���������ע��֫�ٺ�������������������ࡣ\n"NOR, me);
        message_vision(MAG"ֻ��$N΢��˫�ۣ���������һȦ����˲Ϣ��һ���������������ָ�������\n"NOR, me);
        improve = (int)me->query_skill("dodge") * 2;
        me->add_temp("apply/dexerity", improve);
        me->set_temp("yun_fengyun", 1);  
        me->add("force", - 100);    
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, improve :), improve * 3/2 );
        return 1;
}
void remove_effect(object me, int improve)
{
        
      me->add_temp("apply/dexerity", - improve);        
      me->delete_temp("yun_fengyun");
      tell_object(me, HIR"������й��Ѿã��Ծ����ĳ�����һЩ��\n"NOR);
}
