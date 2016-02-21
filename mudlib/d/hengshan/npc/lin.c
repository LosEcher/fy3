// lin.c
inherit NPC;
inherit F_MASTER;
#include <ansi.h>;
void create()
{
        set_name("����", ({ "yi lin", "lin" }) );
        set("gender", "Ů��");
        set("class", "bonze");
        set("age", 16);
        set("attitude", "peaceful");
        set("per", 30);
        set("str", 26);
        set("con", 30);
        set("dex", 30);
        set("int", 28);

        set("force", 1400);
        set("max_force", 1400);
        set("force_factor", 30);
        set("max_kee", 1000);
        set("max_gin", 800);
        set("combat_exp", 200000);
        set("shen_type", 1);

        set_skill("unarmed", 70);
        set_skill("sword", 70);
        set_skill("force", 70);
        set_skill("parry", 70);
        set_skill("dodge", 70);
        set_skill("hengshan-jianfa", 70);
        set_skill("lingxu-bufa", 70);
	set_skill("lingyuan-xinfa",70);
	map_skill("force","lingyuan-xinfa");

        map_skill("sword", "hengshan-jianfa");
        map_skill("parry", "hengshan-jianfa");
        map_skill("dodge", "lingxu-bufa");

        create_family("��ɽ��", 14, "����");
        setup();

carry_object("/obj/weapon/sword")->wield();
 carry_object("/d/dali/npc/obj/cheng-cloth")->wear();
}

