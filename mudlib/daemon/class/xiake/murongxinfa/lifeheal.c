// lifeheal.c

#include <ansi.h>

int exert(object me, object target)
{
	if( !target )
		return notify_fail("��Ҫ������Ϊ˭���ˣ�\n");

	if( me->is_fighting() || target->is_fighting())
		return notify_fail("ս�����޷��˹�\���ˣ�\n");

	if(me->query_skill("murongxinfa",1)<20)
	return notify_fail("���Ľ���ķ�����������û�����ˡ�\n");
	 if( (int)me->query("force")<100)
		return notify_fail("�������������\n");

	if(target->query("eff_kee")==target->query("max_kee"))
	return notify_fail(target->query("name")+"û�����κ��ˣ�\n");
	if( (int)target->query("eff_kee") < (int)target->query("max_kee") / 5 )
		return notify_fail( target->name() + "�Ѿ����˹��أ����ܲ���������������\n");

	message_vision(
		HIY "$N�������������ڹ�\������������$n���ģ������ؽ���������$n����....\n\n"
		"���˲��ã�$N��ͷ��ð������ĺ��飬$n�³�һ����Ѫ����ɫ������������ˡ�\n" NOR,
		me, target );

	target->receive_curing("kee", 10 + (int)me->query_skill("force")/3 );
	me->add("force",-100);
	me->set("force_factor", 0);

	return 1;
}
