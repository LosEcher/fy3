//tanzhi 
#include <ansi.h>
inherit SSERVER;
int perform(object me, object target)
{
        string msg;
        int skill, damage;
        string classname;
        classname = me->query("family/family_name");
        if(classname!="����μ�")
                return notify_fail("�㲻�Ǵ���μҵĵ��ӣ���ô��ʹ��һ��ָ��\n");
        if( !target ) target = offensive_target(me);
        if( !target
        ||      !target->is_character()
        ||      !me->is_fighting(target) )
                return notify_fail("һ��ָֻ�ܶ�ս���еĶ���ʹ�á�\n");
        if( ( skill = (int)me->query_skill("yiyang-zhi",1)) < 80)
                return notify_fail("���һ��ָ�ƺ���û���������\n");
        if( (int)me->query("force")< 300 )
                return notify_fail("�������������\n"); 
        msg = HIR "$N΢һ����, �����ζ�, �����ճ����־�. ���ֵ��һָ����$n \n" NOR;
        message_vision(msg, me, target);
        me->start_busy(1);
        me->add("force", -300);
         if( random(me->query("combat_exp")*skill/30) > (int)target->query("combat_exp")*7/2 ) 
        {
           {     
         msg =HIR "$N�������������޴룬ָ��ֱ͸$N����Ѩ��\n" NOR;
         damage =40+random((int)me->query("spi") * (int)me->query_skill("force") /12);
         message_vision(msg,target);
         target->receive_damage("kee",damage);
           } 
          COMBAT_D->report_status(target);
          return 1;
         }else {
                msg = "$n�����㿪���У���Ҳ���ų���һ���亹��\n" NOR;
        }
        message_vision(msg, me, target);
        return 1;
}

