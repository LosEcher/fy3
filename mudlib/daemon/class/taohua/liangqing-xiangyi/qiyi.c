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

        extra = me->query_skill("liangqing-xiangyi",1);
        if ( extra < 60) return notify_fail("������������������������죡\n");
        if( !target ) target = offensive_target(me);
        if( !target
        ||      !target->is_character()
        ||      !me->is_fighting(target) )
                return notify_fail(HIB"��������"NOR+"ֻ�ܶ�ս���еĶ���ʹ�á�\n");
        if (me->query("force")<=200) return notify_fail("����������㣬�޷�ʹ��"+HIB"��������"NOR+"\n");

        map = me->query_skill_map();


        if( undefinedp(map["sword"]) ) 
                return notify_fail("��û��enable����\n");
          if( map["sword"] != "liangqing-xiangyi" )
                 return notify_fail("�㲢û��ʹ�ý���\n");
        weapon = me->query_temp("weapon");      
        if( !objectp(weapon) || weapon->query("skill_type")!= "sword" )
                return notify_fail("�㲢û��ʹ�ý���\n");
        rir = target->query_skill("dodge",1);
        me->add("force",-180);
        me->add("sen",-50);
        message_vision("$Nʹ��������������֮����֮�ء�"+HIB"��������"NOR+"��\n",me);
        me->start_busy(1);
        if (random(me->query("combat_exp")*(extra/20+1))>target->query("combat_exp")*(rir/30+1))
        {
          weapon = me->query_temp("weapon");
            message_vision(HIM "$N����һת��������֮�ӿ죬������һ������ʹ�������̳�����,
���ֻ��˸���Բ��ס���ţ�\n" NOR,me,target);
         if ( extra > 200)
               {
          COMBAT_D->do_attack(me,target, weapon);  
          COMBAT_D->do_attack(me,target, weapon);  
          COMBAT_D->do_attack(me,target, weapon);  
          COMBAT_D->do_attack(me,target, weapon);  
          COMBAT_D->do_attack(me,target, weapon);  
          message_vision(HIC "$Nһ���ݳ�������,$n����������æ���ң�\n" NOR,me,target);
               }  
             else if ( extra > 150)
              {
          COMBAT_D->do_attack(me,target, weapon);  
          COMBAT_D->do_attack(me,target, weapon);  
          COMBAT_D->do_attack(me,target, weapon);  
          COMBAT_D->do_attack(me,target, weapon);  
          message_vision(HIC "$Nһ���ݳ�������,$n����������æ���ң�\n" NOR,me,target);
              } else if ( extra > 100)
             {
          COMBAT_D->do_attack(me,target, weapon);  
          COMBAT_D->do_attack(me,target, weapon);  
          COMBAT_D->do_attack(me,target, weapon);  
          message_vision(HIC "$Nһ���ݳ�������,$n����������æ���ң�\n" NOR,me,target);
             } else
             {
          COMBAT_D->do_attack(me,target, weapon);  
          COMBAT_D->do_attack(me,target, weapon);  
          message_vision(HIC "$Nһ���ݳ������У�$n����������æ���ң�\n" NOR,me,target);
             }
          target->receive_damage("kee",0,me);
          target->start_busy(1);
        }
        else
        {
          message_vision("��$n����$N����ͼ�����Ʒ���������\n",me,target);
          weapon = target->query_temp("weapon");
          COMBAT_D->do_attack(target,me,weapon);
        }
        return 1;
}

