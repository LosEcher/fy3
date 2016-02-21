// zheng.c
inherit NPC;
inherit F_MASTER;
#include <ansi.h>;
void create()
{
        set_name("֣��", ({ "zheng e", "zheng", "e" }) );
        set("gender", "Ů��");
        set("class", "swordsman");
        set("age", 16);
        set("attitude", "peaceful");
        set("per", 24);
        set("str", 26);
        set("con", 30);
        set("dex", 30);
        set("int", 28);

	set("force",800);
	set("max_force",800);
	set("force_factor",20);
	set("max_kee",600);
        set("max_gin", 800);
	set("combat_exp",80000);
        set("shen_type", 1);

        set_skill("unarmed", 50);
        set_skill("sword", 50);
        set_skill("force", 50);
        set_skill("parry", 50);
        set_skill("dodge", 50);
        set_skill("hengshan-jianfa", 50);
        set_skill("lingxu-bufa", 50);
	set_skill("lingyuan-xinfa",50);
	map_skill("force","lingyuan-xinfa");

        map_skill("sword", "hengshan-jianfa");
        map_skill("parry", "hengshan-jianfa");
        map_skill("dodge", "lingxu-bufa");

        create_family("��ɽ��", 14, "����");
        setup();

carry_object("/obj/weapon/sword")->wield();
carry_object("/obj/cloth")->wear();
}

