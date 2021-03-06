// lao-denuo.c

inherit NPC;


void create()
{
        set_name("劳德诺", ({ "lao denuo","lao","denuo" }) );
        set("nickname", "老好人");
        set("gender", "男性");
        set("age", 61);
        set("long",
                "劳德诺是岳不群的二弟子。\n");
        set("attitude", "peaceful");

        set("str", 26);
        set("con", 30);
        set("int", 24);
        set("dex", 30);
	set("force",1200);
	set("max_force",1200);
	set("force_factor",80);

	set("combat_exp",150000);
        set("shen_type", -1);
        set("score", 20000);

        set("chat_chance_combat", 80);
        set("chat_msg_combat", ({
                (: exert_function, "powerup" :),
                (: exert_function, "recover" :)
        }) );

	set_skill("unarmed",80);
	set_skill("sword",80);
	set_skill("force",80);
	set_skill("parry",80);
	set_skill("dodge",80);
        set_skill("literate", 40);

	set_skill("huashan-jianfa",80);
	set_skill("zixia-shengong",80);
	set_skill("huashan-quanfa",80);
	set_skill("feiyan-huixiang",80);

        map_skill("sword", "huashan-jianfa");
        map_skill("parry", "huashan-quanfa");
        map_skill("force", "zixia-shengong");
        map_skill("unarmed", "huashan-quanfa");
        map_skill("dodge", "feiyan-huixiang");

        create_family("华山派", 14, "弟子");
        setup();

carry_object("/obj/weapon/sword")->wield();
carry_object("/obj/cloth")->wear();
carry_object("/d/huashan/npc/obj/zixia-book");
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
	if((string)ob->query("gender")=="男性" &&
		(string)ob->query("family/family_name")!="华山派")
	tell_object(ob,query("name")+"说道：这位"+
	RANK_D->query_respect(ob)+"可是来我华山拜师学艺的？\n");
	return;
}
void attempt_apprentice(object ob)
{
	string family;

	family=(string)ob->query("family/family_name");
	if((string)ob->query("gender")!="男性")
	command("say 哈，"+RANK_D->query_respect(ob)+
	"为何开如此玩笑？");
	else if((int)ob->query("mingwang")<0)
	command("say 哼，我华山不收黑道上的人物。");
	else if(family=="华山派" && (int)ob->query("family/generation")<=(int)query("family/generation"))
	command("say 这可不敢当啊。");
	else	{
	command("say 好吧，那我就收你为徒吧。");
	command("recruit " + ob->query("id") );
	ob->set("class","xiake");
	}
}


