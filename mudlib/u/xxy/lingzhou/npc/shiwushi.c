// shiwushi.c

inherit NPC;
inherit F_SKILL;

void create()
{
	set_name("ʯ����ʿ", ({ "wu shi", "shi" }));
	set("gender", "����");
	set("age", random(10) + 20);
	set("str", 25);

	set("long", "�����ػ����������ʯ����ʿ��\n");
	set("combat_exp", 30000);
	set("shen_type", 1);
	set("attitude", "aggressive");

	set_skill("unarmed", 80);
	set_skill("force", 80);
set_skill("spear",80);
	set_skill("zhongping-qiang", 80);
	set_skill("dodge", 80);
	set_skill("parry", 80);
map_skill("spear","zhongping-qiang");
	set_temp("apply/attack", 50);
	set_temp("apply/defense", 50);
	set_temp("apply/armor", 50);
	set_temp("apply/damage", 50);

	set("force", 1000); 
	set("max_force", 1000);
	set("force_factor", 10);

	setup();
carry_object("/d/obj/armor/tiejia")->wear();
carry_object("/d/obj/weapon/spear/changqiang")->wield();
}

