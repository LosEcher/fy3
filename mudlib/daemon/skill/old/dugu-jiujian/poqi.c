// poqi.c ����ʽ
 
#include <ansi.h>
 
inherit SSERVER;
 
int perform(object me)
{
	string msg;
	object weapon, target;
	int skill, ap, dp, force_wound, kee_wound;

	me->clean_up_enemy();
	target = me->select_opponent();

	skill = me->query_skill("dugu-jiujian",1);

	if( !(me->is_fighting() ))
		return notify_fail("������ʽ��ֻ�ܶ�ս���еĶ���ʹ�á�\n");
 
	if (!objectp(weapon = me->query_temp("weapon"))
	|| (string)weapon->query("skill_type") != "sword")
		return notify_fail("��ʹ�õ��������ԡ�\n");

	if( skill < 90)
		return notify_fail("��Ķ��¾Ž��ȼ�����, ����ʹ�á�����ʽ����\n");

	if( me->query("force") < 150 )
		return notify_fail("��������������޷����á�����ʽ����\n");
 
	msg = HIC "$NǱ�˶��¾Ž�������ʽ���������ὣʹ���������ۣ����޻��ε�ֱ��$n�ĵ��\n";
	message_vision(msg, me, target);
 
	ap = me->query_skill("sword") + skill;
	dp = target->query_skill("force") / 2;
	if( dp < 1 )
		dp = 1;
	if( random(ap) > dp )
	{
		if(userp(me))
			me->add("force",-150);
		msg = "$N��������ʽ��, $n��ʱ������ǰһ��������Ѩ��΢΢һʹ��\n";
		msg += "ȫ��������й������\n" NOR;

		force_wound = 300 + random(skill);
		if(force_wound > target->query("force"))
			force_wound = target->query("force");

		kee_wound = force_wound / 5;
		if(kee_wound > target->query("kee"))
			kee_wound = target->query("kee");

		target->add("force", -force_wound);
		target->add("kee", -kee_wound);
		target->add("eff_kee", -kee_wound);
		target->start_busy(2);
		me->start_busy(random(2));
	}
	else
	{
		if(userp(me))
			me->add("force",-100);
		msg = "����$n������$N����ͼ�������ؽ��Ż��������������ڻ��е�����\n"NOR;
		me->start_busy(4);
	}
	message_vision(msg, me, target);

	return 1;
}
