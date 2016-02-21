// chi.c
inherit NPC;
inherit F_MASTER;
#include <ansi.h>;
void create()
{
        set_name("�ٰٳ�", ({ "chi baicheng", "baicheng", "chi" }) );
        set("gender", "����");
        set("class", "swordsman");
        set("age", 25);
        set("attitude", "peaceful");
        set("str", 26);
        set("con", 30);
        set("dex", 30);
        set("int", 28);

        set("force", 800);
        set("max_force", 800);
        set("force_factor", 30);
        set("max_kee",800);
        set("max_gin",400);
        set("combat_exp", 100000);
        set("shen_type", 1);

        set_skill("unarmed", 60);
	set_skill("kuaihuo-zhang",60);
        set_skill("sword", 60);
	set_skill("shibapan-jianfa",60);
        set_skill("force", 80);
	set_skill("panshi-neigong",60);
        set_skill("parry", 60);
        set_skill("dodge", 60);
	set_skill("fengshenjue",60);

        map_skill("sword", "shibapan-jianfa");
        map_skill("parry", "shibapan-jianfa");
        map_skill("dodge", "fengshenjue");
	map_skill("force","panshi-neigong");
	map_skill("unarmed","kuaihuo-zhang");

        create_family("̩ɽ��", 14, "����");
        setup();

carry_object("/obj/weapon/sword")->wield();
carry_object("/obj/cloth")->wear();
}

