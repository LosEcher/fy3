// master.c

inherit NPC;
inherit F_MASTER;
int do_go();

void create()
{
	set_name("Ľ�ݸ�", ({ "murong fu","murong","fu"}));
	set("nickname","���湫�Ӹ�");
        set("gender", "����" );
	set("max_kee",1500);
	set("age",25);
        set("str", 27);
        set("cor", 30);
        set("cps", 27);
	set("mingwang",500000);
        set("int", 24);

	set("max_force",2000);
	set("force",2000);
	set("force_factor",100);

	set("rank_info/respect","�κ�ɽׯׯ��");

        set("long",
                
"��Ľ�ݵ�������������������ôҲû�뵽\n"
"������ǰ��λ���Ķ��ŵ��������������ˡ�\n");

	        set("inquiry",([
	"���ׯ":(:do_go:),
        ]));
	create_family("����Ľ��",2,"����");

        set("combat_exp", 1000000);
        set("score", 200000);

	set("chat_chance_combat", 15);
        set("chat_msg_combat", ({
		(: perform_action,"unarmed.canhezhi" :),
		(: perform_action,"unarmed.tanyunshou" :),
        }) );

	set_skill("unarmed",150);
	set_skill("parry",150);
	set_skill("daoxuexinde",80);
	set_skill("foxuexinde",80);
	set_skill("dodge",150);
	set_skill("force",150);
	set_skill("literate",80);



	set_skill("murongquanfa",150);
	set_skill("murongxinfa",150);
	set_skill("murongshenfa",150);
	set_skill("douzhuanxingyi",150);
	map_skill("unarmed","murongquanfa");
	map_skill("parry","douzhuanxingyi");
	map_skill("force","murongxinfa");
	map_skill("dodge","murongshenfa");

        setup();
	carry_object(__DIR__"obj/shan")->wear();
}

void attempt_apprentice(object ob)
{
	if( ob->query("mingwang")<50000)	{
		command("say �ҹ���Ľ�ݵ��Ӹ������𽭺���"+
	RANK_D->query_respect(ob)+"���������д���߰���");
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
int do_go()
{
	object me=this_player();
	string fam;

	fam=(string)me->query("family/family_name");
	if( fam!="����Ľ��")	{
		tell_object(me,"Ľ�ݸ����˿�����������ʲô��\n");
		return 1;
	}
	tell_object(me,"Ľ�ݸ�����������ܵ���ת����ȥ��\n");
	me->move("/d/suzhou/midao2");
	return 1;
}

