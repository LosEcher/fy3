#include <ansi.h>
inherit F_CLEAN_UP;
void remove_effect(object me, int amount);
int exert(object me, object target)
{
        int skill;
        if( target != me ) return 
notify_fail("��ֻ���ú������������Լ���ս������\n");
        if( (int)me->query("force") < 500 )     return 
notify_fail("�������������\n");
        if( (int)me->query_temp("powerup") ) return 
notify_fail("���Ѿ����˹����ˡ�\n");
        skill = me->query_skill("force");
        me->add("bellicosity", 100 + skill/2 );
        me->add("force", -500);
        me->add("force", -skill/10);
        me->receive_damage("kee", skill/10);
        message_vision(
                HIB 
"$N΢һ����ȫ��һ�������Ĭ�˺���������\n" NOR, me);
        me->add_temp("apply/attack", skill/6);
        me->add_temp("apply/dodge", skill/5);
        me->set_temp("powerup", 1);
        me->start_call_out( (: call_other, __FILE__, "remove_effect", me, 
skill/4 :), skill);
        if( me->is_fighting() ) me->start_busy(2);
        return 1;
}
void remove_effect(object me, int amount)
{
        me->add_temp("apply/attack", - amount);
        me->add_temp("apply/dodge", - amount);
        me->delete_temp("powerup");
        tell_object(me, "��ĺ�������������ϣ��������ջص��\n");
}

