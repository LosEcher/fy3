#include <ansi.h>
inherit NPC;
inherit F_MASTER;

void create()
{
        set_name("陆冠英", ({ "lu guanying", "lu" }));
        set("long", "他是归云庄少庄主陆冠英。他肩宽背阔，躯体甚是壮健，
但行动之间温文尔雅，谦恭有礼，一派世家子弟风范。
传闻他就是太湖群盗的首领，不知是真是假。\n");
        set("gender", "男性");
        set("age", 20);
        set("class", "officer");
        set("attitude", "friendly");
        set("shen_type", 1);
        set("str", 30);
        set("int", 30);
        set("per",25);
        set("con", 35);
        
        set("max_kee", 900);
        set("max_gin", 400);
        set("force", 800);
        set("max_force", 1000);
        set("force_factor", 100);
        set("combat_exp", 400000);
        set("score", 300000);

        set_skill("force", 60);
        set_skill("dodge", 70);
        set_skill("parry", 70);
      
        set_skill("sword", 70);
        set_skill("yingxian-steps", 100);
        set_skill("bibo-shengong", 70);
        set_skill("luoying-zhang", 60);
        set_skill("luoying-shenjian", 70);
        set_skill("yuxiao-jian", 70);
        set_skill("unarmed", 70);
        set_skill("tanzhi-shentong", 70);
        set_skill("literate", 100);

        map_skill("force", "bibo-shengong");
        map_skill("dodge", "yingxian-steps");
        map_skill("unarmed","tanzhi-shentong");
        map_skill("parry","luoying-shenjian");
        map_skill("sword", "yuxiao-jian");

        setup();
        carry_object("/d/taohua/obj/cloth")->wear();
        add_money("silver", 50);

        create_family("桃花岛",3,"弟子");
}

void attempt_apprentice(object ob)
{

        if ((int)ob->query("mingwang")<1)   {
                command("say 做一件好事，再来我这里吧！");
                return;
        }
        command("say 很好，既然入我门来就得忠心为主。");


        command("recruit " + ob->query("id"));
        ob->set("title","桃花岛第三代弟子");
}

