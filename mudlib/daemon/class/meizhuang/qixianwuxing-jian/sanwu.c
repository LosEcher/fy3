//tianyu-qijian
#include <ansi.h>
#include <combat.h>
inherit SSERVER;
//	inherit F_CLEAN_UP;
int perform(object me, object target)
{
        string msg, tparryskill;
        int mjianb, mjianh, tparryb, tparryh, mneili, tneili, mexp, texp, damage;
        object weapon,tweapon;
        weapon = me->query_temp("weapon");
        mjianb= (int)me->query_skill("sword",1);
        mjianh= (int)me->query_skill("qixianwuxing-jian",1);
        mneili = (int)me->query("force");
        mexp = (int)me->query("combat_exp");
        msg = "";
        if(!objectp(weapon)||(string)weapon->query("skill_type")!="sword")
        return notify_fail("���ý���ʹ�������н�����");
        if ( mjianh < 80) return notify_fail("����������ν����������\n");
        if( !target ) target = offensive_target(me);
        if( !target
        ||      !target->is_character()
        ||      !me->is_fighting(target) )
                return notify_fail("���������ޡ�ֻ����ս����ʹ�á�\n");
        if ((int)me->query("force")<300)
                return notify_fail("�������������\n"); 
        tweapon = target->query_temp("weapon");  //  Here might be wrong, need to check.
        tparryb= (int)target->query_skill("parry",1);
        tneili = (int)target->query("force");
        texp = (int)target->query("combat_exp");
        tparryskill = target->query_skill_mapped("parry");
        tparryh=target->query_skill(tparryskill,1);
        me->add("force",-300);
        me->receive_damage("sen", 20);
     message_vision(HIC"$N��ʽһ�䣬����"+weapon->name()+"бָ���£�˫��ĮȻ��һ��������������̬��ȴʹ����÷ׯ�ľ�ѧ--���������ޡ���\n\n" NOR,me,target);        


    message_vision(CYN"$N��ǰ��һ����ƽ�-�޻��ش̳�һ��������ȴ˻˻���졣\n"NOR,me);
     message_vision(CYN"��һ�С���ζ��ƴ����������\n\n"NOR,me);
     if (random(mexp)>(int)(texp/10) && random(mneili) > (int)(tneili/3)&&
          (int)me->query("max_force")+mneili > (int)target->query("max_force") + tneili) 
        {
             msg = HIC"$nֻ����һ�ɾ�������ǧ��öϸ��һ�������������\n"
                                "���ۡ���һ����$n���һ�����Ѫ���������������ˣ�\n\n"NOR;
damage= (int)(((int)me->query("max_force")/2+mneili -  (int)target->query("max_force")/2 - tneili)/3);
 if(damage<1)damage = 1;
 target->receive_damage("kee", me->query("eff_kee")*damage/80, me);
 target->receive_wound("kee", me->query("eff_sen")*damage/100, me);
     message_vision(msg, me, target);
     COMBAT_D->report_status(target);
     }
     else {
             msg = HIC"$næ�˹��򿹣�����������$N�Ľ�������ɢ�ˡ�\n\n"NOR;
            message_vision(msg, me, target);
        }


       message_vision(CYN"$N�ɾ�ת����һ���㼱��磬��̤���ţ��������У�������$n���벻���ķ�λ������Ϣ�ش̳���\n" NOR,me,target);
        message_vision(CYN"��һ�С������������ǽ�����\n\n" NOR,me,target);
if(random(mexp)>(int)(texp/10)&& random((int)(mjianb + mjianh*3/2))>(int)((tparryb+tparryh)/2))
 {msg = HIC"$n������æ���ң���֪�����ȥ�м��⾲����ڤ�������Ľ�����\n"
        "����Ȼ��$N��"+weapon->name()+"�������У�$n�������±��̵ı������ˣ�\n\n"NOR;
       damage=random(100)+me->query("force_factor");
       if(damage<1)damage = 1;
       target->receive_damage("kee", me->query("eff_kee")*damage/80, me);
       target->receive_wound("kee", me->query("eff_sen")*damage/100, me);
       message_vision(msg, me, target);
       COMBAT_D->report_status(target);
     }
else{
         msg = HIC"$nȴ�ľ���ˮ��˿�����Ի��ң����в��У��߽���$N�������Ĺ��ơ�\n\n"NOR;
            message_vision(msg, me, target);
        }


          message_vision(CYN"$NͻȻ��ס���Σ��ز������������ڱ�������ʤ���У�����ʤ���Ρ�\n"NOR,me);
          message_vision(CYN"��һ�С����Ρ��ȵ��Ǿ��飡\n\n"NOR,me);
if(random(mexp)>(int)(texp/2))
{msg = HIC"$n��Ȼ�ϵ�����Ϊ$N¶����������ϲ֮�£���æ��ǰ��������\n"
"$N΢΢һЦ����$n����������һ�����価������ֱ̽$n���ؿڡ�\n"
"$n����Ӱ��û�������Ͳ���������͸������\n\n"NOR;
damage=(int)(random((int)(mjianh/2))+me->query("force_factor")*3/2);
if(damage<1)damage = 1;
target->receive_damage("kee", me->query("eff_kee")*damage/80, me);
target->receive_wound("kee", me->query("eff_sen")*damage/100, me);
     message_vision(msg, me, target);
     COMBAT_D->report_status(target);
     }
else{
         msg = HIC"$n���������е���ʵ�����ƾͼƣ���װ����ǰ��ȴ��$N������һ˲���ڿշ-�������־�����һ�У�\n\n"NOR;
            message_vision(msg, me, target);
        COMBAT_D->do_attack(target, me, tweapon);
        }
        
        me->start_busy(3);
        
     
        return 1;
}








