#include <ansi.h>
inherit SSERVER;
int perform(object me, object target)
{
        string msg;
        int skill, damage, rir;
        string classname;
        classname = me->query("family/family_name");
        if(classname!="����ɽ��")
                return notify_fail("�㲻�ǰ���ɽ�ɵĵ��ӣ�����ʹ�ý��߳�����\n");
        if( !target ) target = offensive_target(me);
        if( !target
        ||      !target->is_character()
        ||      !me->is_fighting(target) )
                return notify_fail("���߳��� ֻ�ܶ�ս���еĶ���ʹ�á�\n");
        if( ( skill = (int)me->query_skill("shexing-diaoshou",1)) < 30)
                return notify_fail("������ε����ƺ���û���������\n");
        if( (int)me->query("force")< 150 )
                return notify_fail("�������������\n"); 
        msg = HIY "ֻ��$N����Ʈ����˫������һ��ץ��$n ... \n" NOR;
        message_vision(msg, me, target);
        rir = target->query_skill("parry",1),
        me->start_busy(2);
        me->add("force", -150);
        me->add("sen", -20);
         if( random(me->query("combat_exp")*(skill/30+1)) > (int)target->query("combat_exp")*(rir/50+1)) 
        {
           {     
         msg =HIW "$N����û�а취�㿪����ץ�˸����ţ�\n" NOR;
        damage =40+random((int)me->query("str") * (int)me->query_skill("unarmed") /10);
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

