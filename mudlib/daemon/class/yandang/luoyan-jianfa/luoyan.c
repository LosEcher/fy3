#include <ansi.h>
inherit SSERVER;

int perform(object me,object target)
{
  string msg;
object weapon;
  int lvl,power;
  if (!target) target=offensive_target(me);
  if (environment(me)->query("no_fight")==1)
    return notify_fail("�˴�����ս��.\n");
  if (!target||!target->is_character()||!me->is_fighting(target))
    return notify_fail("[һ�������]ֻ�ܶ�ս������ʹ��.\n");
  if (!objectp(weapon = me->query_temp("weapon"))
	|| (string)weapon->query("skill_type") != "sword")
            return notify_fail("��Ӧ���ý�����ʹ�����С�\n");
  lvl=me->query_skill("luoyan-jianfa",1);
  lvl=(int)(lvl/20);
  if (lvl<1) return notify_fail("������㽣����������.\n");
  if (lvl>9) lvl=9;
    if (me->query("force")<50*lvl)
    return notify_fail("����������,�޷�ʹ������.\n");
  msg=RED+"$Nʹ��[һ����"+chinese_number(lvl)+"��],�ó�������Ӱ��$n��ȥ.\n"+NOR;
    me->start_busy(3);
  if (random(me->query("combat_exp"))>random(target->query("combat_exp")/2))
 {
   power=(int)me->query_str()*lvl-target->query_str();
   if (power<0) power=10;
  msg+=RED+"$n��������,���ϻ������������.��Ѫ��ֹ.\n"+NOR;
  target->receive_wound("kee",power);
  target->receive_damage("kee",power/2);
    me->add("force",-50*lvl);
 }
 else 
   msg+=CYN+"$n����һչ,�������ɶ��������.\n"+NOR;
 message_vision(msg, me, target);
 return 1;
 }
