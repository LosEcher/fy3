#include <ansi.h>
inherit NPC;

void create()
{
	set_name(YEL"��ݺ��"NOR, ({ "huangyin","bird" }) );
	set("race", "Ұ��");
	set("age", 1);
	set("long", "������ת����С�����\n");
	
	set("limbs", ({ "ͷ��", "����", "���", "β��" }) );
	set("verbs", ({ "bite", "claw" }) );
	set_temp("apply/dodge", 100);
	set_temp("apply/attack", 10);
	set_temp("apply/armor", 3);

	setup();
}
