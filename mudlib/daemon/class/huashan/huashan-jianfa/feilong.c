#include <ansi.h>

inherit SSERVER;
int perform(object me, object target)
{
        int damage;
        string msg;

        if( !target ) target = offensive_target(me);

        if( !target || !target->is_character() || !me->is_fighting(target) )
                return notify_fail("�������ֻ�ܶ�ս���еĶ���ʹ�á�\n");

                
        if( (int)me->query_skill("huashan-jianfa",1)< 60)
        return notify_fail("��Ļ�ɽ����������죬����ʹ�����������\n");
        if( (int)me->query_skill("zixia-shengong",1)< 60)
        return notify_fail("�����ϼ�񹦲�����񣬲���ʹ�����������\n");
                        
        if( (int)me->query("force")<200)
        return notify_fail("����������̫��������ʹ�����������\n");
        if(me->query_temp("have_pfm"))
        return notify_fail("���չʩ��������ʽ����Ϣ��û����������\n");
        me->set_temp("have_pfm",1);

        msg = CYN "$N���������һ�������������̽����˾��ڱۣ�����һ����$n���˳�ȥ��\n"NOR;
        if(random(me->query("combat_exp"))>target->query("combat_exp")/3)       {

        target->start_busy(random(3));
        damage=(me->query_str()-target->query_con())*random(me->query_cor());
        if(damage<0)    damage=10;
	if( damage>600)	damage=600;
                
        target->receive_damage("kee",damage,me);
        target->receive_wound("kee",damage/3,me);
        me->add("force",-damage/5);
	if( (int)me->query("force")<0)	me->set("force",0);

        if( damage < 40 ) msg += HIC"���$n��$N����һ�����ƺ�һ����\n"NOR;
        else if( damage < 60 ) msg += HIY"���$n��$N����������Ѫ�����ء�\n"NOR;
        else if( damage < 120 ) msg += RED"$n��æԾ�𣬵����������ֻ��һ���ʹ������������������Ѫ�ɽ���Ƥ����𣡣�\n"NOR;
        else msg += HIR"���$n��$N�Ľ������ģ���ǰһ�ڣ��������ɳ�������\n"NOR;
        } else 
        {
        me->start_busy(1);
        me->add("force",-50);
                msg += CYN"����$p������$P����ͼ����û���ϵ���\n"NOR;
        }
        message_vision(msg, me, target);
        call_out("do_reset",3,me);
        return 1;
}

void do_reset(object me)
{
        if( !objectp(me))       return;
        if( (int)me->query_temp("have_pfm"))
                me->delete_temp("have_pfm");
}
