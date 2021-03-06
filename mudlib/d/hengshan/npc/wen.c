// wen.c
inherit NPC;
inherit F_MASTER;
#include <ansi.h>;
void create()
{
        set_name("仪文", ({ "yi wen", "wen" }) );
        set("gender", "女性");
	set("class","nigu");
        set("age", 28);
        set("attitude", "peaceful");
        set("per", 24);
        set("str", 26);
        set("con", 30);
        set("dex", 30);
        set("int", 28);

        set("force", 1400);
        set("max_force", 1400);
        set("force_factor", 30);
        set("max_kee", 1000);
        set("max_gin", 800);
        set("combat_exp", 400000);
        set("shen_type", 1);

	set_skill("literate",80);
	set_skill("foxuexinde",60);
        set_skill("unarmed", 80);
        set_skill("sword", 80);
        set_skill("force", 80);
        set_skill("parry", 80);
        set_skill("dodge", 80);
        set_skill("hengshan-jianfa", 80);
        set_skill("lingxu-bufa", 80);
	set_skill("lingyuan-xinfa",80);
	map_skill("force","lingyuan-xinfa");

        map_skill("sword", "hengshan-jianfa");
        map_skill("parry", "hengshan-jianfa");
        map_skill("dodge", "lingxu-bufa");

        create_family("恒山派", 14, "弟子");
        setup();

carry_object("/obj/weapon/sword")->wield();
 carry_object("/d/dali/npc/obj/cheng-cloth")->wear();
}
void attempt_apprentice(object ob)
{
	if(ob->query("gender")!="女性")	{
		command("say "+RANK_D->query_respect(ob)+
		"岂可开如此玩笑？");
	}
	else if((int)ob->query("mingwang")<0)	{
		command("say 我恒山派岂能收留黑道中人！");
	}
	else	{
		command("say 好，那我就收下你了。");
		command("recruit " + ob->query("id"));
		ob->set("class","nigu");
	}
}

