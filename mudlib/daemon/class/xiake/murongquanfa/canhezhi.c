// zhen.c ̫��ȭ�����־�

#include <ansi.h>

inherit SSERVER;
int perform(object me, object target)
{
	int damage;
	string msg;

	if( !target ) target = offensive_target(me);

	if( !target || !target->is_character() || !me->is_fighting(target) )
		return notify_fail("�κ�ָֻ�ܶ�ս���еĶ���ʹ�á�\n");

		
	if( (int)me->query_skill("murongquanfa",1)<20)
	return notify_fail("���Ľ��ȭ��������죬����ʹ�á��κ�ָ����\n");
	if( (int)me->query_skill("murongxinfa",1)<20)
	return notify_fail("���Ľ���ķ�������񣬲���ʹ�á��κ�ָ����\n");
			
	if( (int)me->query("force",1)<100)
	return notify_fail("����������̫��������ʹ�á��κ�ָ����\n");
			
	msg = CYN "$NͻȻ������֣��ó����κ�ָ����$n�������¡�\n"NOR;

	if (random(me->query_skill("force")) > target->query_skill("force")/2 )
	{
	me->start_busy(3);
		target->start_busy(random(3));
		
	damage= (int)me->query_skill("murongquanfa",1);
		
		damage = damage/2 + random(damage);
		
	target->receive_damage("kee",damage);
	target->receive_wound("kee",damage/3);
	me->add("force",-damage/10);
	if( damage < 20 ) msg += HIY"���$n��$N������һָ���ƺ�һ����\n"NOR;
	else if( damage < 40 ) msg += HIY"���$n��$N������ָ�����١���һ������������\n"NOR;
	else if( damage < 80 ) msg += RED"���$n��$N���ص�������ָ�������ܵ������ش�����������������\n"NOR;
	else msg += HIR"���$n��$N�ġ��κ�ָ��ָ�����ģ���ǰһ�ڣ��������ɳ�������\n"NOR;
		
	} else 
	{
		me->start_busy(1);
		msg += CYN"����$p������$P����ͼ����û���ϵ���\n"NOR;
	}
	message_vision(msg, me, target);

	return 1;
}
