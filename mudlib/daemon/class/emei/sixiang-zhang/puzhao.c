//zhao.c �������
#include <ansi.h>

inherit SSERVER;
int perform(object me, object target)
{
    int damage;
    string msg;
    object weapon;

    if (!target ) target = offensive_target(me);
    if (me->query_temp("weapon")||me->query_temp("second_weapon"))
        return notify_fail("���ֲ���ʹ��[�������].\n");
    if (!target || !target->is_character() || !me->is_fighting(target) )
        return notify_fail("��������ա�ֻ�ܶ�ս���еĶ���ʹ�á�\n");
    if ((int)me->query_skill("sixiang-zhang", 1) < 80 )
        return notify_fail("��[������]���򻹲����ң�ʹ������������ա���\n"NOR);
    if ((int)me->query_skill("emei-xinfa",1)<50 )
        return notify_fail("��[��ü�ķ�]��򲻹���ʹ������������ա���\n");
    if ((int)me->query_skill("anying-fuxiang",1)<70 )
        return notify_fail("��[��Ӱ����]��򲻹���ʹ������������ա���\n");
 
   
    msg ="ͻȻ��,$Nȫ������з�������žž����΢����֮����\n�����������δ������������$n�ؿڻ�ȥ,\n"NOR;
    if ( random(me->query_skill("unarmed")+me->query_skill("dodge"))
     > (int)target->query_skill("parry"))
    {
    me->start_busy(1);
    target->start_busy(random(3));
    damage = (int)me->query_skill("emei-xinfa", 1);
    damage = damage +  (int)me->query_skill("anying-fuxiang", 1);
    damage = damage +  (int)me->query_skill("sixiang-zhang", 1);
    target->receive_damage("kee", damage);
    target->receive_wound("kee", damage/2);
    me->add("force", -damage);
    msg+=HIC"$n�ؿ���������������һ��,�۵�һ�������һ����Ѫ!\n"NOR;
    } else
   {
    me->start_busy(1);
    msg+=HIY"����$n���������������,����رܿ�������.\n"NOR;
    }
    message_vision(msg,me,target);

    return 1;
}
