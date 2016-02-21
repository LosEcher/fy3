#include <ansi.h>
 
inherit SSERVER;
 
int perform(object me)
{
        string msg;
        object weapon, target;
        int skill, ap, dp;
        int force_wound, kee_wound ;

        me->clean_up_enemy();
        target = me->select_opponent();

        skill = me->query_skill("xiake-shengong",1);

        if( !(me->is_fighting() ))
                return notify_fail("��̫���ơ�ֻ�ܶ�ս���еĶ���ʹ�á�\n");
 
        if( skill < 100)
                return notify_fail("��ġ������񹦡��ȼ�����, ����ʹ����̫���ơ���\n");

        if( me->query("force") < 350 )
                return notify_fail("��������������޷��˹���\n");
 
        msg = HIC "$Nʹ��һ�С�̫���ơ�����$n���ؿڻ�ȥ��\n"NOR;

        message_vision(msg, me, target);

        ap = me->query("combat_exp") + skill * 600;
        dp = target->query("combat_exp") / 3;

        if( dp < 1 )
                dp = 1;
        if( random(ap) > dp )
        {
                if(userp(me))
                        me->add("force",-100);

                msg = HIG "$nֻ������ǰһ�ڣ����ۡ���һ�����һ����Ѫ��\n"NOR;
                force_wound = 2000 + random(skill);
                if(force_wound > target->query("kee"))
                        force_wound = target->query("kee");


                kee_wound = force_wound / 3;
                kee_wound = force_wound / 2;

                target->add("force", -force_wound);
                target->add("kee", -kee_wound);
        target->add("eff_kee",-kee_wound);
                target->start_busy(3);
                me->start_busy(random(2));
        }
        else
        {
                msg = HIG "ֻ��$n���Ų�æ������һ���������$N�ı�ɱһ����\n"NOR;
                if(userp(me))
                        me->add("force",-100);
                me->start_busy(3);
        }
        message_vision(msg, me, target);

        return 1;
}
