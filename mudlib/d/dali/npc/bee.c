// bee.c ����
// Date: Sep.22 1997

inherit NPC;

void create()
{
        set_name("����", ({ "dufeng", "bee" }) );
        set("race", "Ұ��");
        set("age", 20);
        set("long", "һֻɫ�ʰ�쵴��Ұ�䣬��Ⱥ��ӵġ�\n");
        set("attitude", "aggressive");
        set("shen_type", -1);

        set("limbs", ({ "����","����","���","β��" }) );
	set("verbs", ({"bite","poke"}));

        set("combat_exp", 500);
        set("force",80);
        set("max_force",80);
        set("force_factor",50);
        set("max_gin",50);

        set_temp("apply/attack", 20);
        set_temp("apply/defense", 30);
        set_temp("apply/armor", 10);
        setup();
}

