// piao.c ��ҶƮƮ
// quit 99.12.14

#include <ansi.h>

inherit F_SSERVER;
int perform(object me, object target)
{
	object obj;
	string msg;

        if( !target ) target = offensive_target(me);

         if( environment(me)->query("no_fight") )
              return notify_fail("��ҶƮƮֻ����ս����ʹ�á�\n");
	if( !target || !target->is_character()|| !me->is_fighting(target) )
		return notify_fail("��ҶƮƮֻ�ܶ�ս���еĶ���ʹ�á�\n");

	if( (int)me->query_skill("piaohua-hand", 1) < 40 )
		return notify_fail("���Ʈ����Ҷ�ֲ�����죬����ʹ����ҶƮƮ��\n");

		msg = HIB "$NͻȻ��һ�䣬���ֺ��Ķ�����Х���Ʒ磬����͵Ĳ��Σ��������$n��\n";

	me->start_busy(1);
	if( random( (int)me->query_skill("piaohua-hand",1))
          > random(target->query_skill("dodge") ) ) {
		msg += HIB " $pû�ж������$N���Ʒ���У�$p�³�һ��"+HIR"��Ѫ��\n" NOR;
            target->receive_damage("qi",(int)me->query_skill("piaohua-hand",1));
            target->receive_wound("qi",15 + random(10));
            target->receive_wound("jing", 10);
            target->start_busy(random(2));
	} else {
		msg += "����$p��æ����һ�ԣ����˿�ȥ��\n" NOR;
		me->start_busy(random(4));
	}
	message_vision(msg, me, target);
	return 1;
}
