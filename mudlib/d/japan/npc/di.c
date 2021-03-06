// di.c
inherit NPC;
inherit F_MASTER;
#include <ansi.h>;
void create()
{
        set_name("狄修", ({ "di xiu", "xiu", "di" }) );
        set("gender", "男性");
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
        set("max_gin",1800);
        set("combat_exp", 200000);
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

        create_family("嵩山派", 14, "弟子");
        setup();

carry_object("/obj/weapon/sword")->wield();
carry_object("/obj/cloth")->wear();
}

void init()
{
        object ob;

        ::init();

        if( interactive(ob=this_player()) && !is_fighting())
        {
                remove_call_out("greeting");
                call_out("greeting",1,ob);
        }
}

void greeting(object ob)
{
        string family;

        family=(string)ob->query("family/family_name");
        if(family!="嵩山派")
                command("say "+RANK_D->query_respect(ob)+
		"是要拜狄某为师吗？");
	else
		command("nod "+ob->query("id"));
}

void attempt_apprentice(object ob)
{
	if((int)ob->query("mingwang")>0)
	command("say 我嵩山弟子做事要心狠手辣，"+
	RANK_D->query_respect(ob)+"还做的不够啊。");
	else	{
	command("say 好啊，那我就收下你吧。");
       command("recruit " + ob->query("id") );
       ob->set("class","swordsman");
        }
}