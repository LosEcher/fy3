// wu-shi1.c ������ʿ

#include <ansi.h>

inherit NPC;

void create()
{
	set_name("������ʿ", ({ "wei shi", "shi", "guard" }) );
	set("gender", "����");
	set("age", 35);
	set("long",
		"����λ������ʿ�������ּף���ִ������˫Ŀ���⾼���������Ѳ�������ܵ����Ρ�\n");
	set("combat_exp", 100000);
        set("shen_type", 1);
	set("attitude", "heroism");

	set("str", 30);
	set("con", 25);
	set("int", 20);

	set("max_kee", 500);
	set("eff_kee", 500);
	set("kee", 500);
	set("max_gin", 200);
	set("gin", 200);
	set("force", 500);
	set("max_force", 500);
	set("force_factor", 30);
	set("shen_type", 0);

	set_temp("apply/attack",  50);
	set_temp("apply/defense", 50);

	set_skill("sword", 100);
	set_skill("unarmed", 80);
	set_skill("parry", 100);
	set_skill("dodge", 100);

	setup();

carry_object("/obj/weapon/sword")->wield();
carry_object("/obj/armor/tiejia")->wear();
}

