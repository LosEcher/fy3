// tianbai.c
inherit NPC;
inherit F_MASTER;
#include <ansi.h>;
void create()
{
        set_name("��ص���", ({ "tianbai daoren", "daoren", "tianbai" }) );
        set("gender", "����");
        set("class", "taoist");
        set("age", 45);
        set("attitude", "peaceful");
        set("str", 26);
        set("con", 30);
        set("dex", 30);
        set("int", 28);

        set("force", 1400);
        set("max_force", 1400);
        set("force_factor", 30);
        set("max_kee",1200);
        set("max_gin",800);
        set("combat_exp", 400000);
        set("shen_type", 1);

        set_skill("unarmed", 100);
	set_skill("kuaihuo-zhang",100);
        set_skill("sword", 100);
	set_skill("shibapan-jianfa",100);
        set_skill("force", 100);
	set_skill("panshi-neigong",100);
        set_skill("parry", 100);
        set_skill("dodge", 100);
	set_skill("fengshenjue",100);

        map_skill("sword", "shibapan-jianfa");
        map_skill("parry", "shibapan-jianfa");
        map_skill("dodge", "fengshenjue");
	map_skill("force","panshi-neigong");
	map_skill("unarmed","kuaihuo-zhang");

        create_family("̩ɽ��", 13, "����");
        setup();

carry_object("/obj/weapon/sword")->wield();
carry_object("/d/wudang/npc/obj/greyrobe")->wear();
}

