// master.c

inherit NPC;
inherit F_MASTER;

void create()
{
	set_name("秃笔翁",({"tubi weng","tubiweng","weng"}));
	set("nickname","三庄主");
        set("gender", "男性" );
	set("age",40);
        set("str", 27);
        set("cor", 30);
        set("cps", 27);
	set("mingwang",1);
        set("int", 24);
    set("max_kee",1000);
    set("eff_kee",1000);
    set("kee",1000);
    set("max_sen",500);
    set("eff_sen",500);
    set("sen",500);
    set("max_gin",500);
    set("eff_gin",500);
    set("gin",500);
        set("max_force", 1500);
        set("force", 1500);
	set_skill("foxuexinde",80);
	set_skill("daoxuexinde",80);
	set("force_factor",80);

	set("rank_info/respect","三庄主");

        set("long",
                
	"矮矮胖胖，头顶秃得油光滑亮的中年人。\n");

	create_family("孤山梅庄",1,"庄主");
	set("title","孤山梅庄");

	set("combat_exp",600000);
        set("score", 200000);
	set_skill("staff",150);
	set_skill("unarmed",150);
	set_skill("parry",150);
	set_skill("dodge",150);
	set_skill("force",150);
	set_skill("literate",100);
	set_skill("xuantian-neigong",150);
	set_skill("xuantian-quan",150);
	set_skill("xuantian-bu",150);
	set_skill("jiangjun-zhang",150);
	map_skill("unarmed","xuantian-quan");
	map_skill("dodge","xuantian-bu");
	map_skill("force","xuantian-neigong");
	map_skill("staff","jiangjun-zhang");
	map_skill("parry","jiangjun-zhang");
        setup();
	carry_object(__DIR__"obj/jiangjunzhang")->wield();
	carry_object(__DIR__"obj/sipao")->wear();
	add_money("gold",2);
}

void attempt_apprentice(object ob)
{
	if(ob->query_skill("xuantian-neigong",1)<50)	{
	command("say "+RANK_D->query_respect(ob)+"的「玄天内功」功力不够啊。\n");
	return;
	}
        command("say 很好，" + RANK_D->query_respect(ob) + 
"多加努力，他日必定有成。\n");
        command("recruit " + ob->query("id") );
}

void recruit_apprentice(object ob)
{
        if( ::recruit_apprentice(ob) )
			ob->set("class","xiake");
}
 
