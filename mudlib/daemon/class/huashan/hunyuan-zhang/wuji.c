// wuji.c ��Ԫ�޼�
 
#include <ansi.h>
 
inherit SSERVER;
 
int perform(object me, object target)
{
	string msg;
	object weapon;
	int skill, ap, dp, neili_wound, qi_wound;

	if( !target ) target = offensive_target(me);

	skill = me->query_skill("hunyuan-zhang",1);

	if( !(me->is_fighting() ))
		return notify_fail("����Ԫ�޼���ֻ�ܶ�ս���еĶ���ʹ�á�\n");
 
	if (objectp(weapon = me->query_temp("weapon")))
		return notify_fail("��ʹ����������\n");

	if( skill < 60)
		return notify_fail("��ġ���Ԫ�ơ��ȼ�����, ����ʹ�á���Ԫ�޼�����\n");

	if( me->query("force") < 150 )
		return notify_fail("��������������޷����á���Ԫ�޼�����\n");
        if(me->query_temp("have_pfm"))
        return notify_fail("���չʩ��������ʽ����Ϣ��û����������\n");
        me->set_temp("have_pfm",1);

 
	msg = HIC "$NǱ�ˡ���Ԫ�޼�����˫ȭЮ�������ķ���֮����$n��ȥ��\n"NOR;
	message_vision(msg,me,target);
 
	ap = me->query("combat_exp") + skill * 400;
	dp = target->query("combat_exp") / 2;
	if( dp < 1 )
		dp = 1;
	if( random(ap) > dp )
	{
		if(userp(me))
			me->add("force",-100);

		msg = HIG "$nֻ������ǰһ���ʹ�����ۡ���һ�����һ����Ѫ��\n"NOR;
		neili_wound = 100 + random(skill);
		if(neili_wound > target->query("force"))
			neili_wound = target->query("force");

		qi_wound = neili_wound / 5;
		if(qi_wound > target->query("kee"))
			qi_wound = target->query("kee");

		target->add("force", -neili_wound);
		target->receive_wound("kee", qi_wound,me);
		target->start_busy(2);
	}
	else
	{
		msg = HIG "ֻ��$n���Ų�æ������һ���������$N�ı�ɱһ����\n"NOR;
		if(userp(me))
			me->add("force",-100);
		me->start_busy(2);
	}
	message_vision(msg,me,target);

	if(!target->is_fighting(me)) target->fight_ob(me);
        call_out("do_reset",5,me);
	return 1;
}

void do_reset(object me)
{
        if( !objectp(me))       return;
        if( (int)me->query_temp("have_pfm"))
                me->delete_temp("have_pfm");
}
