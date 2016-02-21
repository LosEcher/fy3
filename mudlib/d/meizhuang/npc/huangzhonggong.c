// master.c

inherit NPC;
inherit F_MASTER;

void create()
{
	set_name("���ӹ�",({"huangzhong gong","huangzhonggong","gong"}));
	set("nickname","��ׯ��");
        set("gender", "����" );
	set("age",65);
        set("str", 27);
        set("cor", 30);
        set("cps", 27);
	set("mingwang",1);
        set("int", 24);
    set("max_sen",500);
    set("eff_sen",500);
    set("sen",500);
    set("max_gin",500);
    set("eff_gin",500);
    set("gin",500);
	set("max_kee",2000);
	set("max_force",2000);
	set("force",2000);
	set_skill("foxuexinde",100);
	set_skill("daoxuexinde",100);
	set("force_factor",120);

	set("rank_info/respect","��ׯ��");

        set("long",
                
	"��ɽ÷ׯ���ϴ���Ŀ���Ǵ��顣\n");

	create_family("��ɽ÷ׯ",1,"ׯ��");
	set("title","��ɽ÷ׯ");

	set("combat_exp",1000000);
        set("score", 200000);


	set_skill("sword",200);
	set_skill("unarmed",200);
	set_skill("parry",200);
	set_skill("dodge",200);
	set_skill("force",200);
	set_skill("staff",200);
	set_skill("throwing",200);
	set_skill("blade",200);
	set_skill("literate",100);
	set_skill("xuantian-neigong",200);
	set_skill("xuantian-bu",200);
	set_skill("xuantian-quan",200);
	set_skill("qixianwuxing-jian",200);
	set_skill("pomopima-dao",200);
	set_skill("mantianxing",200);
	set_skill("jiangjun-zhang",200);
	map_skill("unarmed","xuantian-quan");
	map_skill("dodge","xuantian-bu");
	map_skill("force","xuantian-neigong");
	map_skill("parry","qixianwuxing-jian");
	map_skill("sword","qixianwuxing-jian");
        setup();
	carry_object(__DIR__"obj/qixianjian")->wield();
	carry_object(__DIR__"obj/sipao")->wear();
	add_money("gold",4);
}

void attempt_apprentice(object ob)
{
	if(ob->query_skill("xuantian-neigong",1)<100)	{
		command("say ��λ"+RANK_D->query_respect(ob)+"�ġ������ڹ�����Ҫ����Щ���򰡡�\n");
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
 
