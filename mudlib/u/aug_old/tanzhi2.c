// 弹指神通
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
		return notify_fail("弹指神通只能对战斗中的对手使用。\n");
		
	if( (int)me->query_skill("lanhua-finger",1)<60)
		return notify_fail("你的兰花拂穴手不够娴熟，不会使用「弹指神通」。\n");
	if( (int)me->query_skill("suiyu-force",1)<60)
		return notify_fail("你的碎玉神功不够深厚，不会使用「弹指神通」。\n");
	if( (int)me->query("force")<100)
		return notify_fail("你现在内力太弱，不能使用「弹指神通」。\n");

	msg=YEL"\n\n$N四指成拳，一指微屈，陡然弹出，好一招弹指神通！\n"NOR;

	if(weapon=target->query_temp("weapon"))
		msg=CYN"\n$N手呈兰花，拇指轻扣中指，陡然弹出，一式「弹指神通」向$n的"+weapon->name()+CYN+"弹去！\n"NOR;
	else 
		msg=CYN"\n$N手呈兰花，拇指轻扣中指，陡然弹出，一式「弹指神通」弹向$n！ \n"NOR;

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
		msg += CYN"可是$p看破了$P的企图，身形一晃闪了开去。\n\n"NOR;
		message_vision(msg, me, target);

		return 1;
	}


	me->start_busy(3);
	target->start_busy(random(3));

	if(weapon)	
	{
		if(i>50)		
		{
			msg+=HIR"$n的兵刃被$N弹中，只听得“卡嗒”一声，$n手中的"+weapon->name()+HIR+"已断为两截！\n\n"NOR;
			weapon->move(environment(target));
			weapon->set("name","断了的"+weapon->query("name"));
			weapon->unequip();
			weapon->set("value",0);
			weapon->set("weapon_prop", 0);
			target->reset_action();
		}
		else
		{
			msg+=HIR"$n的兵刃被$N弹中，$n只觉得虎口一阵剧痛，手中的"+weapon->name()+HIR+"被震上了天！\n\n"NOR;
			weapon->move(environment(target));			
		}
	}
	else
	{
		if( damage < 100 ) 
			msg += CYN"结果$n被$N点中了一弹，闷哼一声。\n\n"NOR;
		else if( damage < 250 ) 
			msg += CYN"结果$n被$N连弹两指，「嘿」地一声退了两步。\n\n"NOR;
		else if( damage < 600 ) 
			msg += HIR"结果$n被$N重重的连弹数指，「哇」的一声吐出一大口鲜血，看来受了极重的内伤。！\n\n"NOR;
		else 
			msg += RED"结果$n被$N的「弹指神通」弹中要害，眼前一黑，身子向后飞出丈许，看来有生命危险！！\n\n"NOR;

		target->receive_damage("kee",damage);
	      target->receive_wound("kee",damage/3);
	}

	message_vision(msg, me, target);

	return 1;
}
