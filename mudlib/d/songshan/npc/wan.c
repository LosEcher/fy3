// wan.c
inherit NPC;
inherit F_MASTER;
#include <ansi.h>;
void create()
{
        set_name("���ƽ", ({ "wan daping", "daping", "wan" }) );
        set("gender", "����");
        set("class", "swordsman");
        set("age", 25);
        set("attitude", "peaceful");
        set("str", 26);
        set("con", 30);
        set("dex", 30);
        set("int", 28);

        set("force", 1000);
        set("max_force", 1000);
        set("force_factor", 30);
        set("max_kee",1000);
        set("max_gin",700);
        set("combat_exp", 100000);
        set("shen_type", -1);

        set_skill("unarmed", 60);
	set_skill("songyang-zhang",60);
        set_skill("sword", 60);
        set_skill("force", 60);
	set_skill("hanbing-zhenqi",60);
        set_skill("parry", 60);
        set_skill("dodge", 60);
        set_skill("songshan-jianfa", 60);
        set_skill("fuguanglueying", 60);

        map_skill("sword", "songshan-jianfa");
        map_skill("parry", "songshan-jianfa");
        map_skill("dodge", "fuguanglueying");
	map_skill("force","hanbing-zhenqi");
	map_skill("unarmed","songyang-zhang");

        create_family("��ɽ��", 14, "����");
        setup();

carry_object("/obj/weapon/sword")->wield();
carry_object("/obj/cloth")->wear();
}

