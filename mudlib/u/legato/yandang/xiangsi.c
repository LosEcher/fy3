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
    return notify_fail("[��˼����]ֻ�ܶ�ս������ʹ��.\n");
  if (!objectp(weapon = me->query_temp("weapon"))
        || (string)weapon->query("skill_type") != "sword")
            return notify_fail("��Ӧ���ý�����ʹ�����С�\n");
  lvl=me->query_skill("changge-jianfa",1);
  lvl=(int)(lvl/50);
  if (lvl<1) return notify_fail("��ĳ��轣����������.\n");
  if (lvl>9) lvl=9;
  if (me->query("force")<20*lvl)
    return notify_fail("����������,�޷�ʹ������.\n");
  msg=RED+"$N�����Ц��Ц���ã����������$wȴ��ͣ����ת,�ó�����
���׹⣬������������Թ��������һ��[��˼����[����������$n��ȥ.\n"+NOR;
  me->start_busy(1);
  if (random(me->query("kar"))>random(target->query("kar")/2))
 {
   power=(int)me->query_str()*lvl-target->query_str();
   if (power<0) power=10;
  msg+=RED+"$n�·�Ҳ��������,���񲻶�����ʱ��Ӧ������������.��Ѫ��
ֹ.\n"+NOR;
  target->receive_wound("kee",power);
  target->receive_damage("kee",power/2);
  me->add("force",-20*lvl);
 }
 else 
   msg+=CYN+"$n΢΢һЦҡ��ҡͷ�������滺�㿪������ .\n"+NOR;
 message_vision(msg, me, target);
 return 1;
 }

