// linghu.c �����

inherit NPC;
inherit F_MASTER;

void create()
{
	set_name("�����", ({ "ling huchong", "ling", "huchong" }));
	set("nickname", "��ʦ��");
	set("long", 
"�����Ľ��ݣ�����Ũü���ۣ������Ѱ�������\n"
"ͬ���������ϴ��ǻ�ɽ������һ���еĶ�����֡�\n"
"Ŀǰ����������Ⱥ���ڣ�������ִ���ճ����\n");
	set("gender", "����");
	set("age", 28);
	set("attitude", "peaceful");
	set("shen_type", 1);
	set("str", 30);
	set("int", 40);
        set("con", 30);
        set("dex", 28);

        set("kee", 3000);
        set("max_kee", 3000);
        set("gin", 1200);
        set("max_gin", 1200);
	
	set("force", 6000);
	set("max_force", 6000);
	set("force_factor", 60);

	set("combat_exp", 2000000);
	set("score", 300000);

	set_skill("blade", 150);
	
	set_skill("unarmed",120);
	set_skill("force", 250);
	set_skill("dodge", 160);
	set_skill("parry", 250);
	set_skill("sword", 220);
	set_skill("dugu-jiujian", 220);
         set_skill("zixia-shengong", 250);
	set_skill("poyu-quan", 140);
	set_skill("fanliangyi-dao", 120);
	set_skill("hunyuan-zhang", 120);
	set_skill("huashan-jianfa", 220);
	set_skill("huashan-shenfa",160);
	set_skill("literate", 80);
//       set_skill("chongling-jianfa", 60);

	map_skill("force", "zixia-shengong");
	
	map_skill("blade", "fanliangyi-dao");
	map_skill("unarmed", "hunyuan-zhang");
	map_skill("dodge", "huashan-shenfa");
	map_skill("parry", "huashan-jianfa");
	map_skill("sword", "dugu-jiujian");


	create_family("��ɽ��", 14, "����");

	set("chat_chance_combat", 40);
	set("chat_msg_combat", ({
                (: perform_action, "sword.poqi" :),
                (: exert_function, "recover" :),
	}) );

	set("inquiry", ([
		"������" : "�����Ѿ��ܾ�û�м��������˼��ˡ���������\n",
		"��ӯӯ" : "������������Ϣ��˵�գ���������鼤��,�����۾����ģ�\n",
	]));
	setup();

	carry_object("/d/heimuya/npc/obj/cloth")->wear();
	carry_object("/obj/weapon/sword")->wield();
	carry_object("/d/heimuya/npc/obj/card2")->wear();
}


void init()

{
	object ob;
	ob = this_player();	
	::init();
	if( interactive(ob) && !is_fighting() )
	       {
			remove_call_out("greeting");
			call_out("greeting", 1, ob);
		}
}

void greeting(object ob)
{
	if( !ob || environment(ob) != environment() ) return;
	say("���ղ��ܼ���ӯӯ��!" + RANK_D->query_respect(ob)
	  +"�������������Ϣ?\n");
}

int accept_object(object who, object ob)
{
	object obn;

	if( !who || environment(who) != environment() )
		return 0;
	if( !objectp(ob) )
		return 0;
	if( !present(ob, who) )
		return notify_fail("��û�����������\n");

	if( (string)ob->query("name") != "��")
		return notify_fail("����岻��Ҫ���������\n");
    say( "�����˫��������ӯӯ���ţ���������, ���׻�����������ȥ����ӯӯ,�������Ҿ�ȥ����!" );
	obn = new("/d/heimuya/npc/obj/card2");
	obn->set_amount(1);
	obn->move(who);
	destruct(ob);
    set_temp("card2",0);
    return 1;
}

void attempt_apprentice(object ob)
{
	if ((int)ob->query("mingwang") < 0) {
		command("say �һ�ɽ�����������������ɣ��Ե���Ҫ���ϡ�");
		command("say �ڵ��з��棬" + RANK_D->query_respect(ob) +
			"�Ƿ����ò�����");
		return;
	}

	if ((int)ob->query_int() < 25) {
		command("say ���ҿ�" + RANK_D->query_respect(ob) + "�������ƺ����ʺ�ѧ�һ�ɽ���书��");
		return;
	}

	command("say �ðɣ��Ҿ��������ˡ�");
	command("recruit " + ob->query("id"));
	if((string)ob->query("class") != "swordsman")
		ob->set("class", "swordsman");

	return;
}
