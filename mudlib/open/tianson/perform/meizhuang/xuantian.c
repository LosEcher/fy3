//����ȭ֮������ڤ 
// tianson
#include <ansi.h>

inherit SSERVER;

int perform(object me, object target)
{
        string msg;
        int damage, ap, dp;

        if( !target ) target = offensive_target(me);

        if( !target
        ||      !target->is_character()
        ||      target->is_corpse()
        ||      target==me)
                return notify_fail("��Ҫ��˭ʩչ��������ڤ����\n");

        if((int)me->query("force") < 200+(int)me->query("force_factor") )
                return notify_fail("�������������\n");

        if((int)me->query("sen") < (int)me->query("max_sen")/2 )
                return notify_fail("��ľ����޷����У�ʩ�ò�����������ڤ����\n");

	if((int)me->query_skill("xuantian-quan", 1) <40)
		return notify_fail("�������ȭ���𻹲�����\n");

        me->add("force", -200-(int)me->query("force_factor"));
        me->receive_damage("sen", 20);

	msg = HIC
"\n$N�������һ�죬����ͻȻͣס����������һ����ɫ�Ĺ�â��˫ȭ����̧��ȭ����ԣ�\n"
"��������ʵ��죬һ�α��۵�$n����ǰ��������Ϣ��ʹ������ȭ֮��ѧ--��������ڤ����\n\n" 
"$nֻ����һ�ɾ���ӭ����������ۺͺ������е����ѣ�������˵����м��ˣ�\n" NOR;

        ap = me->query_skill("xuantian-quan", 1);
// + me->query_skill("parry");
        ap = ( ap * ap * ap / (4 * 400) );
// + (int)me->query("kee");
        ap = ap*250 + (int)me->query("combat_exp");
        dp = target->query_skill("parry");
	dp = ( dp * dp * dp / (4 * 400) );
// + (int)target->query("kee");
	dp = dp*250 + target->query("combat_exp"); 
        if( random((ap + dp)/1000+1) <  dp/1000 ) {
		msg += HIC "˭֪$n��������ж����壬�����������ˣ�ƮƮȻ��������֮�⣬��������\n\n"NOR;
	        message_vision(msg, me, target);
	} else {
                damage = (int)me->query_skill("xuantian-quan",1) / 5 +
                  (int)me->query("force") / 100 + (int)me->query("force_factor")/5 +
			(int)me->query("sen") / 400 + random((int)me->query("sen") / 200 ) +
			(int)me->query("kee") / 400 + random((int)me->query("kee") / 200 ); 
		msg += HIC "һ����������֮��ֱ�Ӵ�͸$n�����壬$nֻ���þ������ᣬѪҺ�������������˲��ᣡ\n" NOR;
                        target->receive_damage("sen", me->query("eff_sen")*damage/100, me);
                        target->receive_wound("sen", me->query("eff_sen")*damage/100-
                                                 (int)target->query("max_force")/100, me);
                        target->receive_damage("kee", me->query("eff_kee")*damage/70, me);
                        target->receive_wound("kee", me->query("eff_sen")*damage/80-
                                                 (int)target->query("max_force")/100, me);
                        me->improve_skill("xuantian-quan", 1, 1);
	        message_vision(msg, me, target);
                COMBAT_D->report_status(target);
	 }

        me->start_busy(3);
        return 1;
}
