// Ľ��ȭ��֮�κ�ָ by oldsix
//modify by ksusan 7/29/97 16:55

#include <ansi.h>

inherit SSERVER;
int perform(object me, object target)
{
	int damage,k;
	string msg;

	if( !target ) target = offensive_target(me);

	if( !target || !target->is_character() || !me->is_fighting(target) )
		return notify_fail("�κ�ָֻ�ܶ�ս���еĶ���ʹ�á�\n");

		
	if( (int)me->query_skill("murongquanfa",1)< 50)
	return notify_fail("���Ľ��ȭ��������죬����ʹ�á��κ�ָ����\n");
	if( (int)me->query_skill("murongxinfa",1)< 50)
	return notify_fail("���Ľ���ķ�������񣬲���ʹ�á��κ�ָ����\n");
			
	if( (int)me->query("force")<200)
	return notify_fail("����������̫��������ʹ�á��κ�ָ����\n");
	if(me->query_temp("have_pfm"))
	return notify_fail("���չʩ��������ʽ����Ϣ��û����������\n");
	me->set_temp("have_pfm",1);

	msg = CYN "$NͻȻ������֣��ó����κ�ָ����$n�������¡�\n"NOR;
	k=me->query("oldsix_flag/canhezhi");
	if(!k||k==0)	k=3;
	if(random(me->query("combat_exp"))>target->query("combat_exp")/k)	{

	target->start_busy(random(3));
	damage=(me->query_str()-target->query_con())*random(me->query_cor());
	if(damage<0)	damage=10;
	if( damage>500)	damage=500;
		
	target->receive_damage("kee",damage,me);
	target->receive_wound("kee",damage/3,me);
	me->add("force",-damage/5);
	if( (int)me->query("force")<0)	me->set("force",0);

	if( damage < 40 ) msg += HIY"���$n��$N������һָ���ƺ�һ����\n"NOR;
	else if( damage < 60 ) msg += HIY"���$n��$N������ָ�����١���һ������������\n"NOR;
	else if( damage < 120 ) msg += RED"���$n��$N���ص�������ָ�������ܵ������ش�����������������\n"NOR;
	else msg += HIR"���$n��$N�ġ��κ�ָ��ָ�����ģ���ǰһ�ڣ��������ɳ�������\n"NOR;
		
	} else 
	{
	me->start_busy(1);
	me->add("force",-10);
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
