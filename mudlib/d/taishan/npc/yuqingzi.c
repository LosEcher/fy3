// yuqingzi.c
inherit NPC;
inherit F_MASTER;
#include <ansi.h>;
void create()
{
        set_name("������", ({ "yuqing zi", "zi", "yuqing" }) );
        set("gender", "����");
        set("class", "taoist");
        set("age", 45);
        set("attitude", "peaceful");
        set("str", 26);
        set("con", 30);
        set("dex", 30);
        set("int", 28);

        set("force", 2000);
        set("max_force", 2000);
        set("force_factor", 30);
        set("max_kee",2000);
        set("max_gin",1200);
        set("combat_exp", 1000000);
        set("shen_type", -1);

        set_skill("unarmed", 160);
	set_skill("kuaihuo-zhang",160);
        set_skill("sword", 160);
	set_skill("shibapan-jianfa",160);
        set_skill("force", 160);
	set_skill("panshi-neigong",160);
        set_skill("parry", 160);
        set_skill("dodge", 160);
	set_skill("fengshenjue",160);

        map_skill("sword", "shibapan-jianfa");
        map_skill("parry", "shibapan-jianfa");
        map_skill("dodge", "fengshenjue");
	map_skill("force","panshi-neigong");
	map_skill("unarmed","kuaihuo-zhang");

        create_family("̩ɽ��", 12, "����");
        setup();

carry_object("/obj/weapon/sword")->wield();
carry_object("/d/wudang/npc/obj/greyrobe")->wear();
}

