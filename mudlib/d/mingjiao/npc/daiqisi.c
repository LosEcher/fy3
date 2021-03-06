#include "ansi.h"

inherit NPC;

void create()
{
    set_name("黛绮丝", ({"dai qisi", "dai", "qisi", }));
        set("long",
        "她是明教四大法王之一－－紫衫龙王黛绮丝。身着一件紫衫.\n"
        "她高鼻深目，肤白如雪，明艳不可方物。\n"
        "当年由于对韩千叶一役有功，所以其它三王都愿尊她为四大法王之首　n"
        );

        set("banghui","明教");
	set("bh_rank","紫衫龙王");
        set("level",9);
        set("gender", "女性");
        set("attitude", "peaceful");

        set("age", 45);
        set("shen_type", 1);
        set("str", 25);
       set("int", 25);
        set("con", 25);
        set("dex", 25);

        set("max_kee", 3500);
        set("max_gin", 1500);
        set("force", 3000);
        set("max_force", 3000);
        set("force_factor", 60);

        set("combat_exp", 300000);
        set("score", 80000);

        set_skill("force", 140);
        set_skill("sanyang-shengong", 140);
        set_skill("dodge", 140);
	set_skill("tianlong-bu",140);
        set_skill("parry", 140);
	set_skill("unarmed",140);
	set_skill("fengyun-shou",140);
        set_skill("literate", 100);
	 set_skill("whip",200);
	 set_skill("riyue-bian",200);

        map_skill("force", "sanyang_shengong");
        map_skill("dodge", "tianlong-bu");
       map_skill("unarmed", "fengyun-shou");
        map_skill("parry", "riyue-bian");
	map_skill("whip","riyue-bian");

        setup();

        carry_object("/d/mingjiao/obj/zishan")->wear();
	 carry_object("/d/mingjiao/obj/changbian")->wield();
}

int recognize_apprentice(object ob)
{
        string banghui;
        if(! stringp(banghui=ob->query("banghui")) ||
                banghui!=query("banghui"))
        return notify_fail(query("name")+"摇头道：你我非亲非故，"+
                RANK_D->query_self(this_object())+"如何敢当。\n");
	if(ob->query("score")<1000)
                return notify_fail(query("name")+"道：你还是多为本教做些实事吧。
\n");
        return 1;
}
