// sha.c
inherit NPC;
inherit F_MASTER;
#include <ansi.h>;
void create()
{
        set_name("ɳ�콭", ({ "sha tianjiang", "tianjiang", "sha" }) );
        set("nickname", "ͺӥ");
        set("gender", "����");
        set("class", "swordsman");
        set("age", 53);
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
        set("combat_exp", 500000);
        set("shen_type", -1);

        set_skill("unarmed", 80);
	set_skill("songyang-zhang",80);
        set_skill("sword", 80);
        set_skill("force", 80);
	set_skill("hanbing-zhenqi",80);
        set_skill("parry", 80);
        set_skill("dodge", 80);
        set_skill("songshan-jianfa", 80);
        set_skill("fuguanglueying", 80);

        map_skill("sword", "songshan-jianfa");
        map_skill("parry", "songshan-jianfa");
        map_skill("dodge", "fuguanglueying");
	map_skill("force","hanbing-zhenqi");
	map_skill("unarmed","songyang-zhang");

        create_family("��ɽ��", 13, "����");
        setup();

carry_object("/obj/weapon/sword")->wield();
carry_object("/obj/cloth")->wear();
}

