// master.c

inherit NPC;
inherit F_MASTER;

void create()
{
	set_name("Ľ�ݲ�",({"murong bo","murong","bo"}));
        set("gender", "����" );
	set("age",40);
        set("str", 27);
        set("cor", 30);
        set("cps", 27);
        set("int", 24);
	set("mingwang",1000000);
	set("max_force",3000);
	set("force",3000);
	set("force_factor",150);
	set("max_kee",2000);

        set("long",
                
	"��ɫ�׾������꺺�ӣ�ü��֮������͸��ɱ����\n");

	create_family("����Ľ��",1,"����");

	set("combat_exp",5000000);
        set("score", 200000);

	set("chat_chance_combat", 15);
        set("chat_msg_combat", ({
		(: perform_action,"unarmed.canhezhi" :),
		(: perform_action,"unarmed.tanyunshou" :),
        }) );

	set_skill("unarmed",200);
	set_skill("parry",200);
	set_skill("dodge",200);
	set_skill("force",200);
	set_skill("daoxuexinde",100);
	set_skill("foxuexinde",100);
	set_skill("literate",100);



	set_skill("murongquanfa",200);
	set_skill("murongxinfa",200);
	set_skill("murongshenfa",200);
	set_skill("douzhuanxingyi",200);
	map_skill("unarmed","murongquanfa");
	map_skill("parry","douzhuanxingyi");
	map_skill("force","murongxinfa");
	map_skill("dodge","murongshenfa");

        setup();
	carry_object(__DIR__"obj/shan")->wear();
}

void attempt_apprentice(object ob)
{
	if(ob->query("mingwang")<100000)	{
	command("say "+RANK_D->query_respect(ob)+"�ƺ���û���ڽ����ϴ���ʲô���ðɡ�");
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
 
