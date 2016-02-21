// master.c

inherit NPC;
inherit F_MASTER;
int do_go();

void create()
{
	set_name("����ͬ",({"bao butong","bao"}));
	set("nickname","���ׯׯ��");
        set("gender", "����" );
	set("age",40);
        set("str", 27);
        set("cor", 30);
        set("cps", 27);
	set("mingwang",1);
        set("int", 24);

        set("max_force", 1500);
        set("force", 1500);
	set_skill("foxuexinde",60);
	set_skill("daoxuexinde",60);
	set("force_factor",10);
        set("inquiry",([
	"�κ�ɽׯ":	(: do_go :),
	]));

	set("rank_info/respect","���ׯׯ��");

        set("long",
                
"һλ���ų��������꺺�ӣ��������ݵ��ڸǲ�ס����Ӣ����\n");

	create_family("����Ľ��",3,"�ҳ�");

	set("combat_exp",500000);
        set("score", 200000);

	set("chat_chance_combat", 15);
        set("chat_msg_combat", ({
		(: perform_action,"unarmed.canhezhi" :),
		(: perform_action,"unarmed.douzhuan" :),
		(: perform_action,"unarmed.tanyunshou" :),
        }) );

	set_skill("unarmed",60);
	set_skill("parry",60);
	set_skill("dodge",60);
	set_skill("force",60);
	set_skill("murongxinfa",80);
	set_skill("murongquanfa",80);
	set_skill("murongshenfa",80);
	set_skill("douzhuanxingyi",60);
	map_skill("dodge","murongshenfa");
	map_skill("unarmed","murongquanfa");
	map_skill("force","murongxinfa");
	map_skill("parry","douzhuanxingyi");
	set_skill("literate",40);
        setup();
	carry_object(__DIR__"obj/shan")->wear();
//          add_money("gold",1);
}

void attempt_apprentice(object ob)
{
        command("say �ܺã�" + RANK_D->query_respect(ob) + 
"���Ŭ�������ձض��гɡ�\n");
        command("recruit " + ob->query("id") );
}

void recruit_apprentice(object ob)
{
        if( ::recruit_apprentice(ob) )
			ob->set("class","xiake");
}
int do_go()
{
	object me=this_player();
	string fam;

	fam=(string)me->query("family/family_name");
	if( fam!="����Ľ��")	{
		tell_object(me,"����ͬ���������ҹ���Ľ�ݵ��£�����θɣ�\n");
		return 1;
	}
	if ( (int)me->query("combat_exp")<50000)	{
		tell_object(me,"����ͬ���������Ȱ��书ѧ�ðɣ�\n");
		return 1;
	}
	tell_object(me,"����ͬ���˵�ͷ��������������������ת����ȥ��\n");
	me->move("/d/suzhou/midao1");
	return 1;
}

 
