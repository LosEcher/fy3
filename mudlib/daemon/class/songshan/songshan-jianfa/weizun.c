#include <ansi.h>;

inherit SSERVER;
 
int perform(object me, object target)
{
        object weapon, ob;
        string msg, string1;
        int count;
 
        if( !me->is_fighting() )
                return notify_fail("������Ϊ��ֻ����ս����ʹ�á�\n");
 
        if (!objectp(weapon = me->query_temp("weapon"))
        || (string)weapon->query("skill_type") != "sword")
                return notify_fail("������Ϊ�𡹿�ʼʱ��������һ�ѽ���\n");

        if( (int)me->query("force") < 100 )
                return notify_fail("�������������\n");

 //        if( (int)me->query_skill("hanbing-zhenqi",1) < 50 )
 //              return notify_fail("��ĺ�������������\n");

        if( (int)me->query_skill("sword",1) < 50 ||
            me->query_skill_mapped("sword") != "songshan-jianfa")
                return notify_fail("�����ɽ�����������ң��޷�ʹ������Ϊ��\n");

        msg = HIW "$Nʹ����ɽ�ɾ���������Ϊ�𡹣�����Ȼ�ӿ�,����һת,�������������������\n" NOR;
message_vision(msg,me)
;

        ob = me->select_opponent();
        COMBAT_D->do_attack(me, ob, me->query_temp("weapon"), 0);
        COMBAT_D->do_attack(me, ob, me->query_temp("weapon"), 0);
        COMBAT_D->do_attack(me, ob, me->query_temp("weapon"), 0);
        COMBAT_D->do_attack(me, ob, me->query_temp("weapon"), 0);
        COMBAT_D->do_attack(me, ob, me->query_temp("weapon"), 0);

        me->add("force", -100);
me->start_busy(2);

        if(!ob->is_fighting(me)) ob->fight_ob(me);
        return 1;
}

