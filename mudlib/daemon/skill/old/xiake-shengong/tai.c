// taixuan ̫����
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
	    return notify_fail("��̫���ơ�ֻ����ս����ʹ�á�\n");


        if((int)me->query("kar") < 25)
		return notify_fail("��ı�������, Ŀǰ������ʹ���������! \n");

	if((int)me->query_skill("xiake-shengong",1) < 150)
		return notify_fail("�����������Ϊ����, ����ʹ����һ���� !\n");

	if((int)me->query_skill("dodge") < 150)
		return notify_fail("����Ṧ��Ϊ����, ����ʹ��̫���ƣ�\n");
 
	if((int)me->query_skill("unarmed") < 150)
                return notify_fail("���ͽ�ֲ�����Ϊ������ Ŀǰ����ʹ��̫����! \n");

    if( (int)me->query("force") < 1000 )
		return notify_fail("�������������\n");


    msg = HIG "$Nʹ�������񹦵ľ�����̫���ơ�������Ȼ�ӿ죡\n" NOR;
    message_vision(msg, me);

	me->clean_up_enemy();
	ob = me->select_opponent();

	COMBAT_D->do_attack(me, ob, me->query_temp("weapon"), 0);
	COMBAT_D->do_attack(me, ob, me->query_temp("weapon"), 0);
	COMBAT_D->do_attack(me, ob, me->query_temp("weapon"), 0);
        COMBAT_D->do_attack(me, ob, me->query_temp("weapon"), 0);
        COMBAT_D->do_attack(me, ob, me->query_temp("weapon"), 0);
        COMBAT_D->do_attack(me, ob, me->query_temp("weapon"), 0);

	me->add("force", -150);
	me->start_busy(random(2));

    return 1;
}
