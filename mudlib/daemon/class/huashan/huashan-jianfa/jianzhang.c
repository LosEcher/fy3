// jianzhang.c  ����������

#include <ansi.h>
#include <skill.h>
#include <weapon.h>
#include <combat.h>

inherit SSERVER;
 
int perform(object me, object target)
{
	object weapon, ob;
        string msg, string1;
        int count;
 
	if( !me->is_fighting() )
		return notify_fail("��������������ֻ����ս����ʹ�á�\n");
 
	if (!objectp(weapon = me->query_temp("weapon"))
	|| (string)weapon->query("skill_type") != "sword")
		return notify_fail("����������������ʼʱ��������һ�ѽ���\n");

	if( (int)me->query("force") < 100 )
		return notify_fail("�������������\n");

	if( (int)me->query_skill("zixia-shengong",1) < 40 )
		return notify_fail("�����ϼ�񹦲�����\n");

        if( (int)me->query_skill("huashan-jianfa",1) < 40 )
		return notify_fail("��Ļ�ɽ�����������ң��޷�ʹ�ý�����������\n");

	msg = HIY "$Nʹ����ɽ�ɾ�����������������������Ȼ�ӿ죡\n" NOR;
//        message_combatd(msg, me);

	me->clean_up_enemy();
	ob = me->select_opponent();

	COMBAT_D->do_attack(me, ob, me->query_temp("weapon"), 0);
	COMBAT_D->do_attack(me, ob, me->query_temp("weapon"), 0);
	COMBAT_D->do_attack(me, ob, me->query_temp("weapon"), 0);
	COMBAT_D->do_attack(me, ob, me->query_temp("weapon"), 0);
	COMBAT_D->do_attack(me, ob, me->query_temp("weapon"), 0);

	me->add("force", -100);
me->start_busy(3+random(5));

	if(!ob->is_fighting(me)) ob->fight_ob(me);
	return 1;
}
