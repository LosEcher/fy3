// perform2.c    ���ؾ���֮��    ���ط籩(KKND)  write by Wangzc & ppl.
//                                                   1997.9.2

#include <ansi.h>

inherit SSERVER;
int perform(object me, object target)
{
	int damage;
	string msg;

	if( !target ) target = offensive_target(me);

	if( !target || !target->is_character() || !me->is_fighting(target) )
        return notify_fail("���ط籩ֻ�ܶ�ս���еĶ���ʹ�á�\n");

		
    if( (int)me->query_skill("kunlun-jianfa",1)<80)
    return notify_fail("������ؽ���������죬����ʹ�á����ط籩����\n");
     if( (int)me->query_skill("kunlun-xinfa",1)<80)
        return notify_fail("��������ķ�������񣬲���ʹ�á����ط籩����\n"); 
			
    if( (int)me->query("force",1)<500)
    return notify_fail("����������̫��������ʹ�á����ط籩����\n");
			
 msg=HIY "$N�����޷��Զ���ʹ�������ɵ���ɽ���������ط籩����\n"
HIG "ɲ�Ǽ����ذ�����ɳ��ʯ��������Ӱ��$n��ȫ��Ҫ����̣��򿳣�������ȥ��\n" NOR;
        if (random(me->query_skill("force")) > target->query_skill("force")/2 )
{
        me->start_busy(3);
                target->start_busy(random(3));
		
    damage= (int)me->query_skill("kunlun-jianfa",1);
         damage = damage/2 + random(damage);
		
	target->receive_damage("kee",damage);
	target->receive_wound("kee",damage/3);
	me->add("force",-damage/10);
        if( damage < 20 ) msg += HIY"���$n��$N������һ�����ƺ�һ����\n"NOR;
else
if( damage < 55 ) msg += HIY"���$n��$N������������������һ������������\n"NOR;
else if( damage < 80 ) msg += RED"���$n��$N���ص����������������ܵ������׻�һ�㣬��������������\n"NOR;
else msg += HIR"���$n��$N�ġ����ط籩����͸ǰ�ģ���ǰһ�ڣ��������ɳ�������\n"NOR;
}
else
{
         me->start_busy(1);
                msg += CYN"����$p������$P����ͼ����û���ϵ���\n"NOR;
}
	message_vision(msg, me, target);

	return 1;
}
