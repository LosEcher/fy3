//pomopima-dao, perform pomo
//by tianson
#include <ansi.h>

inherit SSERVER;

int perform(object me, object target)
{
        object weapon;
        int pomo,times;
        string shu;
        pomo = (int)me->query_skill("pomopima-dao", 1);  
        weapon = me->query_temp("weapon");
      
        if( !target ) target = offensive_target(me);
        
       
        if( !target
        ||      !target->is_character()
        ||      target->is_corpse()
        ||      target==me)
                return notify_fail("��Ҫ��˭ʩչ��һ�С���ī�ŵ�����\n");

        if(!me->is_fighting())
                return notify_fail("����ī�ŵ���ֻ����ս����ʹ�ã�\n");
         
        if(!objectp(weapon = me->query_temp("weapon"))
           ||(string)weapon->query("skill_type")!="blade")
                return notify_fail("����ī�ŵ���Ҫ�õ����ܷ���������\n");

        if((int)me->query("max_force") < 300 )
                return notify_fail("�������������\n");

	if((int)me->query("force") < 300 )
		return notify_fail("����������㣡\n");

        if((int)me->query("sen") < (int)(me->query("max_sen")/2) )
                return notify_fail("��ľ����㣬û����ʩչ��ī�ŵ���\n");

        if(pomo < 40)
                return notify_fail("�����ī���鵶���𻹲�����\n");
        else 
            if(pomo <70){
                times = 3;        
                shu = "��";}
            else
                if (pomo <100){
                    times = 4;
                    shu = "��";}
                else 
                    if( pomo<130){
                        times = 5;
                        shu = "��";}
                    else
                        if(pomo <160 ){
                           times = 6;
                           shu = "��";}
                        else 
                            if (pomo < 190){
                               times = 7;
                               shu = "��";}
                            else
                                if (pomo < 220){
                                    times = 8;
                                    shu = "��";}
                                else{ 
                                     times = 9;
                                     shu = "��";}

        me->delete("env/brief_message");
	target->delete("env/brief_message");


message_vision(HIC"\n$Nһ����Х������һת�������������$n������"+shu+"��������Ҫ����\n"NOR,me,target);

        for(int i=1;i<=times;i++)
        COMBAT_D->do_attack(me, target, weapon);
        
        me->receive_damage("sen", 20);
        me->add("force", -(times*50+150));

        if( !target->is_fighting(me) ) {
                if( living(target) ) {
                        if( userp(target) ) target->fight_ob(me);
                        else target->kill_ob(me);
                }
        }

        me->start_busy(3);
        return 1;
}

