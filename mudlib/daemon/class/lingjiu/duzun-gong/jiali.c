#include <ansi.h>
inherit F_CLEAN_UP;
void remove_effect(object me, int amount);
int exert(object me, object target)
{
        int skill;
        if( target != me ) return 
   notify_fail("��ֻ�����������ս������\n");
        if( (int)me->query("force") < 300 )     return 
notify_fail("�������������\n");
        if( (int)me->query_skill("duzun-gong",1) < 40 )     return 
   notify_fail("��Ķ��𹦲�����򣬲��ܼ�����\n");
        if( (int)me->query_temp("lingjiu_jiali") ) return 
notify_fail("���Ѿ����˹����ˡ�\n");
        if ((me->query("family/family_name") != "���չ�")) return
         notify_fail("�㲻�����չ����Ӳ���ʹ�����������\n");
        skill = me->query_skill("force");

        me->add("bellicosity", 100 + skill/2 );
        me->add("force", -300);
        me->add("eff_sen", -50);
        me->receive_damage("kee", skill/10);
         message_vision(HIW"����ָ�죬������������ȫ�����һ���� ...\n"NOR, me);
        me->add_temp("apply/attack", skill/4);
        me->add_temp("apply/dodge", skill/6);
        me->add_temp("apply/parry", skill/6);
        me->set_temp("lingjiu_jiali", 1);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, 
        skill/4 + random(10) :), skill);
        if( me->is_fighting() ) me->start_busy(2);
        return 1;
}
void remove_effect(object me, int amount)
{
        me->add_temp("apply/attack", - amount);
        me->add_temp("apply/dodge", - amount);
        me->add_temp("apply/parry", - amount);
        me->delete_temp("lingjiu_jiali");
        tell_object(me, WHT"����񹦼�������ʧ���ָ���ԭ״̬��\n"NOR);
}

