#include <ansi.h>
#include <combat.h>
inherit SSERVER;
static object *enemy = ({});
int perform(object me, object target)
{
        string msg;                                
        int extra;
        int rir;
        mapping map;
        object weapon;
        if(me->is_busy())
                return notify_fail("������û�գ���\n");
        extra = me->query_skill("lingshe-zhangfa",1);
        if ( extra < 80) return notify_fail("��������ȷ����������죡\n");
        if( !target ) target = offensive_target(me);
        if( !target
        ||      !target->is_character()
        ||      !me->is_fighting(target) )
                return notify_fail("�������� ֻ�ܶ�ս���еĶ���ʹ�á�\n");
        if (me->query("force")<=200) return notify_fail("����������㣬�޷�ʹ�� ��������!\n");
        map = me->query_skill_map();
        if( undefinedp(map["staff"]) ) 
                return notify_fail("��û�� enable �ȷ�!\n");
        if( map["staff"] != "lingshe-zhangfa" )
                return notify_fail("�㲢û��ʹ�������ȷ�!\n"); 
        weapon = me->query_temp("weapon");      
        if( !objectp(weapon) || weapon->query("skill_type")!= "staff" )
                return notify_fail("�㲢û��ʹ���ȷ�!\n");
        rir = target->query_skill("parry",1);
        me->add("force",-180);
        me->add("sen",-30);
        message_vision(HIC"$N��������һ�䣬ʹ�������ȷ��е���������!\n\n" NOR,me);
        me->start_busy(2);
        if (random(me->query("combat_exp")*(extra/40+1))>random(target->query("combat_exp"))*(rir/40+1))
        {
          weapon = me->query_temp("weapon");
          if(extra > 140){
          message_vision(HIB "$N��ɫ��Ĺ���Ť����������ͷ����������̵Ĺ�â������������������$n������\n\n" NOR,me,target); 
          COMBAT_D->do_attack(me,target, weapon);  
          COMBAT_D->do_attack(me,target, weapon);  
          COMBAT_D->do_attack(me,target, weapon);  
          COMBAT_D->do_attack(me,target, weapon);  
          target->receive_damage("kee",0,me);
          target->start_busy(2);
        }
        else
          if(extra > 80){
          message_vision(HIG "$N��ɫ��Ĺ���Ť����������ͷ����������̵Ĺ�â������������������$n������\n\n" NOR,me,target);
          COMBAT_D->do_attack(me,target, weapon);  
          COMBAT_D->do_attack(me,target, weapon);  
          COMBAT_D->do_attack(me,target, weapon);  
          target->receive_damage("kee",0,me);
          target->start_busy(2);
        }
           }
        else
        {
       message_vision("��$n����$N����ͼ�����Ʒ���������\n",me,target);
        }
        return 1;
}

