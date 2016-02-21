#include <ansi.h>

inherit SSERVER;
int perform(object me, object target)
{
    int damage;
    string msg;
    object weapon;

    if (!target ) target = offensive_target(me);
    if (me->query_temp("weapon")||me->query_temp("second_weapon"))
        return notify_fail("���ֲ���ʹ��[Ѫ��ӡ]֮��.\n");
    if (!target || !target->is_character() || !me->is_fighting(target) )
        return notify_fail("��Ѫ��ӡ��ֻ�ܶ�ս���еĶ���ʹ�á�\n");
    if ((int)me->query_skill("youming-zhang", 1) < 80 )
        return notify_fail("��[��ڤѪ��]���򻹲����ң�ʹ������Ѫ��ӡ����\n"NOR);
    if ((int)me->query_skill("guiyingmizong",1)<50 )
        return notify_fail("��[��Ӱ����]��򲻹���ʹ������Ѫ��ӡ����\n");
    
    msg = HIC"$Nһ����Ц,˫��ͻȻ���"+NOR+RED+"Ѫ��"+NOR+HIC+"��������$n,\n"NOR;
    if ( random(me->query_skill("unarmed")+me->query_skill("dodge"))
     > (int)target->query_skill("parry"))
    {
        me->start_busy(2);
        target->start_busy(random(3));
        damage =me->query("PKS");
      if (damage>100)  damage=(int)(1000/damage);
        damage=random(damage)*(me->query_skill("youming-zhang",1)/20);
	target->receive_damage("kee",damage,me);
	target->receive_wound("kee",damage/2,me);
      msg+=HIC"$n�����ɢ֮��,ֻ������һ�����,�ѱ�$N����!\n"NOR;
	message_vision(msg,me,target);
      if (random(me->query("kar"))>target->query("kar")/2)   {
      target->apply_condition("youming",1+random(20));
	tell_object(target,HIR"������[Ѫ��ӡ]���ƶ�.\n"NOR);
          }
    } else
    {
        me->start_busy(2);
	msg+=HIY"����$n���µ�������,����رܿ�������.\n"NOR;
	message_vision(msg,me,target);
    }
    if(!target->is_fighting(me)) target->fight_ob(me);
    return 1;
}
