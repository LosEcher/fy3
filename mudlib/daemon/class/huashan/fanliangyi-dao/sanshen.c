// sanshen.c ���������

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
		return notify_fail("����������塹ֻ����ս����ʹ�á�\n");

	if (!objectp(weapon = me->query_temp("weapon"))
	|| (string)weapon->query("skill_type") != "blade")
		return notify_fail("��ʹ�õ��������ԡ�\n");

	if( (int)me->query("force") < 100 )
		return notify_fail("�������������\n");

        if( (int)me->query_skill("zixia-shengong",1) < 40 )
		return notify_fail("�����ϼ�񹦹������㣡\n");

	if( (int)me->query_skill("fanliangyi-dao",1) < 40 )
		return notify_fail("��ġ������ǵ������������ң��޷�ʹ�á���������塹��\n");

	msg = HIY "$Nʹ����ɽ�ɾ�������������塹����ͻ�ر���쳣�鶯Ʈ����\n" NOR;
//        message_combatd(msg, me);

	me->clean_up_enemy();
	ob = me->select_opponent();

	COMBAT_D->do_attack(me, ob, me->query_temp("weapon"));
	COMBAT_D->do_attack(me, ob, me->query_temp("weapon"));
	COMBAT_D->do_attack(me, ob, me->query_temp("weapon"));

	me->add("force", -100);
me->start_busy(2+random(3));

	if(!ob->is_fighting(me)) ob->fight_ob(me);
	return 1;
}
