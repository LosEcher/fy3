#include <ansi.h>

inherit SSERVER;

mapping *msg = ({
        (["action": "$Nʹ����Ե�����е�һ�С���ɨ���硹��$w����㶸Ȼ����$n$l",
        "damage": 270,
        "force": 200,
        "damage_type": "����",
        ]),
        (["action": "$Nʹ����Ե�����еڶ��С���תǬ������$w�ó�һ���Ϲ����$n$l",
        "damage": 290,
        "force": 260,
        "damage_type": "����",
        ]),
        (["action": "$Nʹ����Ե�����е����С��������¡�����Ӱ���Ž����һ�����$n",
        "damage": 330,
        "force": 300,
        "damage_type": "����",
        ]),
});

int perform(object me, object target)
{
        object weapon;
        int i, damage, lvl;

        if(!living(me)) return 0;
        if(me->is_busy())
                return notify_fail("����æ���أ��޷����ý�����\n");
        if(! weapon = me->query_temp("weapon")) 
                return notify_fail("ֻ��ʹ�ý���ʱ����������⽣����\n");
        if(weapon->query("skill_type") != "sword")
                return notify_fail("ֻ��ʹ�ý���ʱ����������⽣����\n");

        if((lvl = me->query_skill("songshan-jianfa", 1)) < 50)
                return notify_fail("�����ɽ�����������ߣ��޷�ʹ�á���Ե��������\n");

        if(!target) target = offensive_target(me);

        if(!target
        || !target->is_character()
        || !me->is_fighting(target))
                return notify_fail("����Ե������ֻ�ܶ�ս���еĶ���ʹ�á�\n");

        if(target->is_busy())
                return notify_fail(target->name() 
                                + "Ŀǰ���Թ˲�Ͼ���ŵ������ɣ�\n");
//      weapon = me->query_temp("weapon");

        me->start_busy(1);

        damage = lvl / 2;
        me->add_temp("apply/attack", lvl);
        me->add_temp("apply/damage", damage);
        for(i=0;i<3;i++)
        {
                me->set("actions", msg[i]);
                COMBAT_D->do_attack(me, target, weapon);
        }
        me->reset_action();
        me->receive_damage("kee", damage / 2);
        me->add_temp("apply/attack", -lvl);
        me->add_temp("apply/damage", -damage);

        return 1;
}
