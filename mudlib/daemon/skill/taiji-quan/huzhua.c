// zhen.c ̫��ȭ�����־�

#include <ansi.h>
inherit SSERVER;

mapping *action=({
	([	"action":HIC"$NͻȻ���о����ʢ��ʩչ����צ�֡�����ֱץ��$n��$l��"NOR,
		"damage":300,
		"damage_type":"����",
	]),
	([	"action":HIY"$N���һ����ʹ������צ�֡����ֻ������ߣ�ֱץ��$n��$l��"NOR,
		"damage":400,
		"damage_type":"����",
	]),
	([	"action":HIR"$NͻȻʹ������צ�֡������ֺ�Х������ֱץ��$n��$l��"NOR,
		"damage":500,
		"damage_type":"����",
	]),

});


int perform(object me, object target)
{
	int damage,attack_power,lv;
	object weapon;
	string *limbs,limb;
	mapping act;

	if( !target ) target = offensive_target(me);

	if( !target || !target->is_character() || !me->is_fighting(target) )
		return notify_fail("��צ��ֻ�ܶ�ս���еĶ���ʹ�á�\n");

		
	if( (int)me->query_skill("taiji-quan",1)<40)
	return notify_fail("���̫��ȭ������죬����ʹ�á���צ�֡���\n");
	if( (int)me->query_skill("taiji-shengong",1)<40)
	return notify_fail("���̫���񹦲�����񣬲���ʹ�á���צ�֡���\n");
			
	if( (int)me->query("force",1)<100)
	return notify_fail("����������̫��������ʹ�á���צ�֡���\n");
			
	if( (int)me->query_temp("have_pfm"))
	return notify_fail("���չʩ��������ʽ����Ϣ��û����������\n");

	me->set_temp("have_pfm",1);
	limbs=target->query("limbs");
	limb=limbs[random(sizeof(limbs))];
	weapon=me->query_temp("weapon");

	lv=me->query_skill("unarmed");
	attack_power=lv*lv*lv/3;
	attack_power+=(int)me->query("combat_exp");
	attack_power*=2;
	act=action[random(sizeof(action))];
	COMBAT_D->do_attack_now(me,target,weapon,2,act,limb,attack_power);
	me->add("force",-100);
	call_out("do_reset",5,me);
	return 1;
}

void do_reset(object me)
{
	if( !objectp(me))	return;
	if( (int)me->query_temp("have_pfm"))
		me->delete_temp("have_pfm");
}
