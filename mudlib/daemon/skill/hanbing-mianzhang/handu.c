// handu.c �����綾
 
#include <ansi.h>
 
inherit SSERVER;
 
int perform(object me)
{
        string msg;
        object weapon, target;
        int skill, ap, dp, neili_wound, qi_wound;

        me->clean_up_enemy();
        target = me->select_opponent();

        skill = me->query_skill("hanbing-mianzhang",1);

        if( !(me->is_fighting() ))
                return notify_fail("�������綾��ֻ�ܶ�ս���еĶ���ʹ�á�\n");
 
        if (objectp(weapon = me->query_temp("weapon")))
                return notify_fail("��ʹ����������\n");

        if( skill < 120)
                return notify_fail("��ġ��������ơ��ȼ�����, ����ʹ�á������綾����\n");

        if( me->query_skill("dodge",1) < 50 )
                return notify_fail("����Ṧ�������޷����á������綾����\n");
          if( me->query("force",1) < 350 )
                return notify_fail("��������������޷����á������綾����\n");
 
 
        msg = HIC "$NͻȻ����һ�����۵�$n����ǰ��˫�ֺ�Ȼ��$n��ȥ��\n"NOR;
        message_vision(msg, me, target);
 
        ap = me->query("combat_exp") + skill * 400;
        dp = target->query("combat_exp") / 4;
        if( dp < 1 )
                dp = 1;
        if( random(ap) > dp )
        {
                if(userp(me))
                          me->add("force",-250);

                msg = HIG "$nֻ��������һ����ȫ������������\n"NOR;
                neili_wound = 160 + random(skill);
                  if(neili_wound > target->query("force"))
                          neili_wound = target->query("force");

                qi_wound = neili_wound / 5;
                  if(qi_wound > target->query("kee"))
                         qi_wound = target->query("kee");

                  target->add("force", -neili_wound);
                  target->add("kee", -qi_wound);
                target->start_busy(3);
                me->start_busy(random(2));
                target->apply_condition("icehd_poison",10);
        }
        else
        {
                msg = HIG " $n���һ������æ��˫���þ�ȫ��ƴ��һ�֣���Ȼ��ס��$N�ĺ�����\n����$N�ĺ������Ǳ�$n��������\n"NOR;
                if(userp(me))
                         me->add("force",-100);
                target->start_busy(4);
                me->start_busy(4);
        }
        message_vision(msg, me, target);

        return 1;
}

