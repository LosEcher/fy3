// master.c

inherit NPC;
inherit F_MASTER;

void create()
{
	set_name("ͺ����",({"tubi weng","tubiweng","weng"}));
	set("nickname","��ׯ��");
        set("gender", "����" );
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

	set("rank_info/respect","��ׯ��");

        set("long",
                
	"�������֣�ͷ��ͺ���͹⻬���������ˡ�\n");

	create_family("��ɽ÷ׯ",1,"ׯ��");
	set("title","��ɽ÷ׯ");

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
	command("say "+RANK_D->query_respect(ob)+"�ġ������ڹ���������������\n");
	return;
	}
        command("say �ܺã�" + RANK_D->query_respect(ob) + 
"���Ŭ�������ձض��гɡ�\n");
        command("recruit " + ob->query("id") );
}

void recruit_apprentice(object ob)
{
        if( ::recruit_apprentice(ob) )
			ob->set("class","xiake");
}
 
