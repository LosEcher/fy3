// ��������
#include <ansi.h>

inherit SSERVER;

int perform(object me, object target)
{
        string msg;
        int damage, ap, dp;

        if( !target ) target = offensive_target(me);

        if( !target
        ||      !target->is_character()
        ||      target->is_corpse()
        ||      target==me)
                return notify_fail("��Ҫ��˭ʩչ���������꡹��\n");

        if((int)me->query("force") < 50+(int)me->query("force_factor") )
                return notify_fail("�������������\n");

        if((int)me->query("kee") < 100 )
                return notify_fail("�����Ѫ���㣬û����ʩ���⹦��\n");

	if((int)me->query_skill("kuaihuo-zhang", 1) <50)
		return notify_fail("��Ŀ��ʮ���Ƽ��𻹲�����\n");


        me->add("force", -25-(int)me->query("force_factor"));
        me->receive_damage("kee", 50);

        if( random(me->query("max_force")) < 50 ) {
                write("��⣬û�ɹ���\n");
                return 1;
        }

	msg = HIC
"\n$Nһ��ƽ��������ݵ����飬���д����һ����ʩչ�����������꡹��˫�����·��ɣ�\n"
"$nֻ�������ܶ���$N˫�Ƶ�Ӱ�ӣ�������֪����мܣ�������˵�����ˣ�\n\n" NOR;

        ap = me->query_skill("kuaihuo-zhang", 1);
        ap = ( ap * ap * ap / (4 * 400) ) + (int)me->query("kee");
        ap = ap*250 + (int)me->query("combat_exp");
        dp = target->query_skill("parry");
	dp = ( dp * dp * dp / (4 * 400) ) + (int)target->query("kee");
	dp = dp*250 + target->query("combat_exp"); 
        if( random(ap + dp) > dp ) {
                damage = (int)me->query("max_force") / 10 +
			random((int)me->query("eff_kee") /50);
                damage -= (int)target->query("max_force") / 10 +
			random((int)target->query("eff_kee") / 5);
		damage+=(int)me->query("force_factor")-random((int)target->query("force_factor"));
                if( damage > 0 ) {
		msg += HIC "���һ�ƽ��ʵʵȫ��������$n��������$n�Ĺ�ͷ����ɢ�ˣ�\n" NOR;
		damage +=random((damage*(int)me->query_skill("unarmed"))/50);
                        target->receive_damage("sen", damage, me);
   //�����п������ֵ�� target->receive_wound("sen", damage/4, me);
                        target->receive_damage("kee", damage, me);
   //���Կ��Ǽӻ򲻼ӡ� target->receive_wound("kee", damage/3, me);
                        me->improve_skill("kuaihuo-zhang", 1, 1);
                }
	    else {
		msg += HIC "�����$n������������$N����������࣬˫�����˲��ᣡ\n" NOR;
		damage -= (int)target->query("force_factor");
		damage -=random((-damage*(int)target->query_skill("unarmed"))/80);
                        me->receive_damage("sen", -damage, target);
    //ͬ��              me->receive_wound("sen", -damage/4, target);
                        me->receive_damage("kee", -damage, target);
    //                  me->receive_wound("kee", -damage/3, target);
 
                       me->improve_skill("kuaihuo-zhang", 1, 1);
	    }
             } 
	else
                msg += "���Ǳ�$n�㿪�ˡ�\n";

        message_vision(msg, me, target);
        if( damage > 0 ) COMBAT_D->report_status(target);
        else if( damage < 0 ) COMBAT_D->report_status(me);

        if( !target->is_fighting(me) ) {
                if( living(target) ) {
                        if( userp(target) ) target->fight_ob(me);
                        else target->kill_ob(me);
                }
        }

        me->start_busy(3);
        return 1;
}
