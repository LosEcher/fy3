// chan ̩ɽ����ʽ 

#include <ansi.h>

inherit SSERVER;

int perform(object me, object target)
{
	string msg;
      object weapon;
	if( !target ) target = offensive_target(me);

	if( !target
	||	!target->is_character()
	||	!me->is_fighting(target) )
		return notify_fail("����ʽֻ�ܶ�ս���еĶ���ʹ�á�\n");

      if(!objectp(weapon=me->query_temp("weapon"))||
      (string)weapon->query("skill_type")!="blade")
            return notify_fail("����ʽֻ���ý����ܷ���������\n");

	if( target->is_busy() )
		return notify_fail(target->name() + "�Ѿ��Թ˲�Ͼ�ˣ��ŵ������ɣ�\n");

	msg = CYN "$Nʹ��̩ɽʮ���̽���֮����ʽ��һ�ѽ�����ʮ�˵���Ӱ����$n�����������ã�";

	me->start_busy(1);
	if( random(me->query("combat_exp")+me->query_skill("shibapan-jianfa",1)*1000) 
       > (int)target->query("combat_exp")/3*2 ) {
		msg += "���$p����ס�ˣ�\n" NOR;
		target->start_busy( (int)me->query_skill("shibapan-jianfa") / 30 + 2);
	} else {
		msg += "����$p������$P�Ľ��У�һš��Ծ���˽�Ӱ��\n" NOR;
            msg += "$Pȴһ��ʧȥƽ�⣬�������˱�����\n" NOR;
	      me->start_busy(2);
      }
	message_vision(msg, me, target);

	return 1;
}
