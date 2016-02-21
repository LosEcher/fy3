// sanshen.c ����

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
		return notify_fail("��������ֻ����ս����ʹ�á�\n");

	if (!objectp(weapon = me->query_temp("weapon"))
	|| (string)weapon->query("skill_type") != "blade")
		return notify_fail("��ʹ�õ��������ԡ�\n");

	if( (int)me->query("force") < 100 )
		return notify_fail("�������������\n");

	if( (int)me->query_skill("blade") < 100 ||
	    me->query_skill_mapped("blade") != "taiji-dao")
		return notify_fail("���̫�����������ң��޷�ʹ�á���������\n");

	msg = HIY "$Nʹ���䵱�ɾ���������������ͻ�ر���쳣�鶯Ʈ����\n" NOR;
	message_vision(msg, me);

	me->clean_up_enemy();
	ob = me->select_opponent();

	COMBAT_D->do_attack(me, ob, me->query_temp("weapon"));
	COMBAT_D->do_attack(me, ob, me->query_temp("weapon"));
	COMBAT_D->do_attack(me, ob, me->query_temp("weapon"));

	me->add("force", -100);
	me->start_busy(random(3));

	return 1;
}
