//����ָ

#include <ansi.h>

inherit SSERVER;
int perform(object me, object target)
{
	string msg;
	object weapon;
	int damage,ap,dp;
	if( !target ) target = offensive_target(me);

	if( !target || !target->is_character() || !me->is_fighting(target) )
	return notify_fail("����ָֻ�ܶ�ս���еĶ���ʹ�á�\n");

		
	if( (int)me->query_skill("xuantian-quan",1)<20)
	return notify_fail("�������ȭ��������죬����ʹ�á�����ָ����\n");
	if( (int)me->query_skill("xuantian-neigong",1)<20)
	return notify_fail("��������ڹ���������������ʹ�á�����ָ����\n");
	if( (int)me->query("force")<100)
	 return notify_fail("����������̫��������ʹ�á�����ָ����\n");
	if(me->query("kee")<50)
	return notify_fail("�����������㣬�޷�ʹ�á�����ָ����\n");
	if(weapon=target->query_temp("weapon"))
	msg=CYN"$N���Ͼ����ʢ��ͻȻ���������$n��"+weapon->name()+"��ȥ��\n"NOR;
	else msg=CYN"$N���һ��������ʳָ����$n���ؿڵ�ȥ��\n"NOR;
	ap=me->query_skill("unarmed")+me->query_skill("dodge");
	dp=target->query_skill("parry")+target->query_skill("dodge");
	if(random(ap)>random(dp))	{
	me->start_busy(3);
		target->start_busy(random(3));
	if(weapon)	{
	msg+=RED"ֻ���á���ડ�һ����$n���е�"+weapon->name()+"�Ѷ�Ϊ���أ�\n"NOR;
	weapon->move(environment(target));
	weapon->set("name","���˵�"+weapon->query("name"));
	weapon->unequip();
	weapon->set("value",weapon->query("value")/10);
	weapon->set("weapon_prop", 0);
	target->reset_action();
	}
	else	{
	msg+=RED"ֻ�����ۡ���һ����$n���ؿڱ�$N���˸�С�ף�\n"NOR;
	damage=(me->query_str()-target->query_con())*random(me->query_cor());
	if(damage<0)	damage=10;
	target->receive_damage("kee",damage);
        target->receive_wound("kee",damage/3);
	}
	me->add("force",-random(10));
	} else 
		{
		me->start_busy(1);
	me->add("force",-5);
		msg += CYN"����$p������$P����ͼ������һ�����˿�ȥ��\n"NOR;
		}
	message_vision(msg, me, target);

	return 1;
}
