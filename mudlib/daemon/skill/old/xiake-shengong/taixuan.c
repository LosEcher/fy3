// taixuan ̫����

#include <ansi.h>
#include <skill.h>
#include <weapon.h>
#include <combat.h>

inherit SSERVER;
int perform(object me, object target)
{
	object weapon;
	string msg;
	int i, attack_time;

	if( !target ) target = offensive_target(me);

	if( !target
	||	!target->is_character()
	||	!me->is_fighting(target) )
		return notify_fail("̫����ֻ�ܶ�ս���еĶ���ʹ�á�\n");


	if( (int)me->query_skill("xiake-shengong", 1) < 150 )
		return notify_fail("��������񹦲�����죬����ʹ��̫���ơ�\n");

	msg = HIY "$N�߸�Ծ��ʹ��̫���ƣ���ʽ��Ȼ��졣\n";

	if( random(me->query("combat_exp")) > (int)target->query("combat_exp")/20 )
	{
		attack_time = random((int)me->query_skill("xiake-shengong", 1) / 30);
		if(attack_time < 1)
			attack_time = 1;

		msg += HIW " ���$pֻ����$P������Ӱ�����������������ѹ�˹�����\n" NOR;
		for(i = 0; i < attack_time; i++)
			COMBAT_D->do_attack(me, target, me->query_temp("weapon"), 0);

		me->start_busy(2);
		me->add("force", -150);
	}
	else
	{
		msg += "����$p������$P����ͼ����û���ϵ���\n" NOR;
		me->start_busy(3);
	}
	message_vision(msg, me, target);

	return 1;
}
