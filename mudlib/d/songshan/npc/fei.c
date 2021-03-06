// fei.c
inherit NPC;
inherit F_MASTER;
#include <ansi.h>;
void create()
{
        set_name("费彬", ({ "fei bing", "bing", "fei" }) );
        set("nickname", "大嵩阳手");
        set("gender", "男性");
        set("class", "swordsman");
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
        set("combat_exp", 600000);
        set("shen_type", -1);

        set_skill("unarmed", 100);
	set_skill("songyang-zhang",100);
        set_skill("sword", 100);
        set_skill("force", 100);
	set_skill("hanbing-zhenqi",100);
        set_skill("parry", 100);
        set_skill("dodge", 100);
        set_skill("songshan-jianfa", 100);
        set_skill("fuguanglueying", 100);

        map_skill("sword", "songshan-jianfa");
        map_skill("parry", "songshan-jianfa");
        map_skill("dodge", "fuguanglueying");
	map_skill("force","hanbing-zhenqi");
	map_skill("unarmed","songyang-zhang");

        create_family("嵩山派", 13, "弟子");
        setup();

carry_object("/obj/weapon/sword")->wield();
carry_object("/obj/cloth")->wear();
}

