// feng-buping.c  封不平
inherit NPC;
#include <ansi.h>

void create()
{
        set_name("封不平", ({ "feng buping", "feng" }) );
        set("nickname", YEL"狂风快剑"NOR);
        set("gender", "男性");
        set("class", "swordsman");
        set("title", "华山剑宗第十三代弟子");
        set("age", 45);
        set("long",
                "封不平是华山剑宗第一高手，满脸戾气一张黄焦焦的面皮。\n");
        set("attitude", "peaceful");
        set("str", 26);
        set("con", 30);
        set("dex", 30);
        set("int", 28);

        set("force", 2400);
        set("max_force", 2400);
        set("force_factor", 30);
        set("max_kee",2000);
        set("max_gin",1200);

        set("combat_exp", 1000000);
        set("mingwang", -200000);

        set("chat_chance_combat", 80);
        set("chat_msg_combat", ({
                (: exert_function, "powerup" :),
        }) );

        set_skill("unarmed", 180);
        set_skill("sword", 160);
        set_skill("force", 160);
        set_skill("parry", 160);
        set_skill("dodge", 160);
        set_skill("literate", 100);
        set_skill("huashan-jianfa", 180);
        set_skill("zixia-shengong", 160);
        set_skill("huashan-quanfa", 170);
        set_skill("hunyuan-zhang", 170);
        set_skill("feiyan-huixiang", 170);

        map_skill("force", "zixia-shengong");
        map_skill("unarmed", "hunyuan-zhang");
        map_skill("dodge", "feiyan-huixiang");
	map_skill("sword","huashan-jianfa");
	map_skill("parry","huashan-jianfa");

        create_family("华山派", 13, "弟子");
        setup();

        carry_object("/obj/weapon/sword")->wield();
        carry_object("/obj/cloth")->wear();
}
