#include <ansi.h>

inherit SSERVER;
int perform(object me, object target)
{
	int damage;
	string msg,limb;
	object weapon;
	mapping action;

	if( !target ) target = offensive_target(me);

	if( !target || !target->is_character() || !me->is_fighting(target) )
		return notify_fail("�����ǻ�ۡ�ֻ�ܶ�ս���еĶ���ʹ�á�\n");

        weapon=me->query_temp("weapon");
	if (weapon)
		return notify_fail("[���ǻ��]ֻ���ڿ���ʱ��ʹ�á�\n");
		
	if( (int)me->query_skill("tiangang-zhi", 1) < 70 )
		return notify_fail("������ָ������죬����ʹ��[���ǻ��]��\n");
	                        			
	if( (int)me->query("force") < 300 )
		return notify_fail("����������̫��������ʹ�á����ǻ�ۡ���\n");
			
	msg = CYN "$N���κ��,������ȭ��ָ,��$n�������¡�\n"NOR;

	if (random(me->query_skill("unarmed")+me->query_skill("dodge")) > 
	(target->query_skill("unarmed")+target->query_skill("dodge") )/2)
	{
		target->start_busy(1);		
		damage = (int)me->query_skill("unarmed");
		action = me->query("actions");
		limb="����";
		damage=damage*damage*damage/3/me->query("max_sen")*me->query("sen");
		
		msg += HIR"$n�мܲ���,���������߲�,�̲�ס��ͷһ��,�³�һ����Ѫ.\n"NOR;
		message_vision(msg,me,target);
		COMBAT_D->do_attack_now(me,target,weapon,2,action,limb,damage);
		return 1;
	} else 
	{
		msg += CYN"����$n�͵������һԾ,������$N�Ĺ�����Χ��\n"NOR;
		me->add("force", -50);
		me->start_busy(2);
	}
message_vision(msg,me,target);

	if(userp(target)) target->fight_ob(me);
	return 1;
}
