//
// star.c  
// ʮָ���ǽ�
// С����д(islet@wx.jsinfo.net)
// 1999��10��31��
//

#include <ansi.h>

inherit SSERVER;
int perform(object me, object target)
{
        object weapon;
        int damage;
        string msg;

        string classname;
        classname = me->query("family/family_name");
        if(classname!="����μ�")
                return notify_fail("�㲻�Ǵ���μҵĵ��ӣ���ô��ʹ�������񽣡�\n");

        if( !target ) target = offensive_target(me);

        if( !target || !target->is_character() || !me->is_fighting(target) )
                return notify_fail("��ʮָ���ǽ���ֻ�ܶ�ս���еĶ���ʹ�á�\n");

        if (me->query_temp("weapon")||me->query_temp("second_weapon"))
                return notify_fail("���ֲ���ʹ��[ʮָ���ǽ�].\n");
                
        if( (int)me->query_skill("six-finger", 1) < 100 )
                return notify_fail("��������񽣲�����죬����ʹ�á�ʮָ���ǽ�����\n");
                                
        if( (int)me->query_skill("yiyang-zhi", 1) < 100 )
                return notify_fail("���һ��ָ������죬����ʹ�á�ʮָ���ǽ�����\n");
                        
        if( (int)me->query("force", 1) < 500 )
                return notify_fail("����������̫��������ʹ�á�ʮָ���ǽ�����\n");
                        
        msg = CYN"ֻ��$N˫��ʮָ�׵�����������·������ת��ʹ,\n��ȥ����������������������������к��$n��\n"NOR;

        if(random(me->query_skill("force")) >target->query_skill("force")/5)
        {
                target->start_busy((int)me->query_skill("six_finger")/40 +1);
                
                damage = 100+(int)me->query_skill("kurong-changong", 1);
                damage = damage +  (int)me->query_skill("yiyang-zhi", 1);
                damage = damage +  (int)me->query_skill("six-finger", 1);
                target->receive_damage("kee", damage);
                target->receive_wound("kee", damage/2);
                me->add("force", -500);
                msg += RED"һ˲�䣬����Ѫ����$n���ϳ��֣���Ѫ������ӿ��������\n"NOR;
                me->start_busy(1);

        } else 
        {
                target->start_busy(1+random(2));
                msg += CYN"$n��ʱ��æ���ң��Ǳ�������\n"NOR;
                me->add("force", -500);
                me->start_busy(1);
        }
        message_vision(msg, me, target);

        return 1;
}

