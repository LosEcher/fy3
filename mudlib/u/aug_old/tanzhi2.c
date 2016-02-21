// ��ָ��ͨ
// 1997.8.31  by Aug

#include <ansi.h>
inherit SSERVER;

int perform(object me, object target)
{
	string msg;
	object weapon;
	int damage,i,j;

	if( !target ) target = offensive_target(me);

	if( !target || !target->is_character() || !me->is_fighting(target) )
		return notify_fail("��ָ��ֻͨ�ܶ�ս���еĶ���ʹ�á�\n");
		
	if( (int)me->query_skill("lanhua-finger",1)<60)
		return notify_fail("���������Ѩ�ֲ�����죬����ʹ�á���ָ��ͨ����\n");
	if( (int)me->query_skill("suiyu-force",1)<60)
		return notify_fail("��������񹦲�����񣬲���ʹ�á���ָ��ͨ����\n");
	if( (int)me->query("force")<100)
		return notify_fail("����������̫��������ʹ�á���ָ��ͨ����\n");

	msg=YEL"\n\n$N��ָ��ȭ��һָ΢������Ȼ��������һ�е�ָ��ͨ��\n"NOR;

	if(weapon=target->query_temp("weapon"))
		msg=CYN"\n$N�ֳ�������Ĵָ�����ָ����Ȼ������һʽ����ָ��ͨ����$n��"+weapon->name()+CYN+"��ȥ��\n"NOR;
	else 
		msg=CYN"\n$N�ֳ�������Ĵָ�����ָ����Ȼ������һʽ����ָ��ͨ������$n�� \n"NOR;

	i=(me->query_skill("force")-target->query_skill("force")+
		me->query_skill("unarmed")-target->query_skill("parry")+
			me->query_skill("dodge")-target->query_skill("dodge"))/3+50;
	if(i<10) i=10;
	if( ( me->query("combat_exp")/(target->query("combat_exp")+1) )>5 )
		j=500;
	else
		j=me->query("combat_exp")*100/(target->query("combat_exp")+1);
	i=i*(1000+j)/1000*(me->query("str")*100/22)/100;

	damage=i*me->query_skill("lanhua-finger",1)/100*8;
	if(damage<50) damage=50;
	if(damage>1500) damage=1500;

	if(i<25) i=28;
	i=random(i);

	me->add("force",-100);

	if(i<25)
	{
		me->start_busy(2);
		msg += CYN"����$p������$P����ͼ������һ�����˿�ȥ��\n\n"NOR;
		message_vision(msg, me, target);

		return 1;
	}


	me->start_busy(3);
	target->start_busy(random(3));

	if(weapon)	
	{
		if(i>50)		
		{
			msg+=HIR"$n�ı��б�$N���У�ֻ���á���ડ�һ����$n���е�"+weapon->name()+HIR+"�Ѷ�Ϊ���أ�\n\n"NOR;
			weapon->move(environment(target));
			weapon->set("name","���˵�"+weapon->query("name"));
			weapon->unequip();
			weapon->set("value",0);
			weapon->set("weapon_prop", 0);
			target->reset_action();
		}
		else
		{
			msg+=HIR"$n�ı��б�$N���У�$nֻ���û���һ���ʹ�����е�"+weapon->name()+HIR+"���������죡\n\n"NOR;
			weapon->move(environment(target));			
		}
	}
	else
	{
		if( damage < 100 ) 
			msg += CYN"���$n��$N������һ�����ƺ�һ����\n\n"NOR;
		else if( damage < 250 ) 
			msg += CYN"���$n��$N������ָ�����١���һ������������\n\n"NOR;
		else if( damage < 600 ) 
			msg += HIR"���$n��$N���ص�������ָ�����ۡ���һ���³�һ�����Ѫ���������˼��ص����ˡ���\n\n"NOR;
		else 
			msg += RED"���$n��$N�ġ���ָ��ͨ������Ҫ������ǰһ�ڣ��������ɳ���������������Σ�գ���\n\n"NOR;

		target->receive_damage("kee",damage);
	      target->receive_wound("kee",damage/3);
	}

	message_vision(msg, me, target);

	return 1;
}
