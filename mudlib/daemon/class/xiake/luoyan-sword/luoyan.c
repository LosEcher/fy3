#include <ansi.h>

inherit SSERVER;
int perform(object me, object target)
{
	int damage;
	string msg;

	if( !target ) target = offensive_target(me);

	if( !target || !target->is_character() || !me->is_fighting(target) )
        return notify_fail("���н�����ս��ʱ��\n");

		
    if( (int)me->query_skill("luoyan-sword",1)<80)
    return notify_fail("��Ļط����㽣��������죬����ʹ�á���������һ��ɡ���\n");
     if( (int)me->query_skill("yuxuan-guizheng",1)<80)
        return notify_fail("����������治����񣬲���ʹ�á���������һ��ɡ���\n"); 
			
    if( (int)me->query("force",1)<200)
    return notify_fail("����������̫��������ʹ�á���������һ��ɡ���\n");
			
 msg=HIG "$N��������бб�ĳ�,ʹ������������һ��ɡ���\n"
HIG "$nֻ��һ����������ǰɢ��,������һ����Ӱ�ѷɵ���ǰ��\n" NOR;
        if (random(me->query_skill("sword")
+me->query_skill("luoyan-sword")) > (target->query_skill("parry")+
target->query_skill("dodge")/3 ))
{
        me->start_busy(2);
                target->start_busy(random(3));
		
    damage= (int)(me->query_skill("luoyan-sword",1)+me->query_skill("sword")/2);
         damage = damage + random(damage)/2;
		
	target->receive_damage("kee",damage);
	target->receive_wound("kee",damage/3);
	me->add("force",-damage/10);
        if( damage < 40 ) msg += HIY"���$n��$N������һ�����ƺ�һ��,�·�ƬƬ���顣\n"NOR;
else
if( damage < 80 ) msg += HIY"���$n��$N������������������һ�����ſ�����������,�����������ؿ�������\n"NOR;
else
if( damage < 100 ) msg += RED"���$nͷ������$N��øɸɾ���,$n������,��������ʮ������,����������\n"NOR;
else msg += HIR"���$n��$N�Ľ�͸ǰ�ģ���ǰһ�ڣ����Ӵ��˼���ת��,�����ˣ���\n"NOR;
}
else
{
         me->start_busy(1);
                msg += CYN"����$p������$P����ͼ����û���ϵ���\n"NOR;
}
	message_vision(msg, me, target);

	return 1;
}
