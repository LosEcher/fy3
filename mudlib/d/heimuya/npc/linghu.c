// linghu.c �����

inherit NPC;
inherit F_MASTER;

void create()
{
	set_name("�����", ({ "ling huchong", "ling", "huchong" }));
	set("nickname", "��ʦ��");
	set("long", 
"�����Ľ��ݣ�����Ũü���ۣ������Ѱ�������\n"
"ͬ���������ϴ��ǻ�ɽ������һ���еĶ�����֡�\n");
	set("gender", "����");
	set("age", 28);
	set("class", "xiake");
	set("attitude", "peaceful");
	set("shen_type", 1);
	set("str", 30);
	set("int", 40);
	set("con", 30);
	set("dex", 30);
	
	set("kee", 2800);
	set("max_kee", 2800);
	set("gin", 1600);
	set("max_gin", 1600);
	set("force", 2400);
	set("max_force", 2400);
	set("force_factor", 60);

	set("combat_exp", 800000);
	set("score", 100000);

	set_skill("blade", 60);
	set_skill("feiyan-huixiang", 120);
	set_skill("unarmed",125);
	set_skill("force", 150);
	set_skill("zixia-shengong", 130);
	set_skill("dodge", 180);
	set_skill("parry", 140);
	set_skill("sword", 190);
	set_skill("huashan-jianfa", 190);
	set_skill("dugu-jiujian",160);
	set_skill("huashan-quanfa",150);
	set_skill("literate", 80);

	map_skill("force", "zixia-shengong");
	map_skill("unarmed", "huashan-quanfa");
	map_skill("dodge", "feiyan-huixiang");
	map_skill("parry", "huashan-jianfa");
	map_skill("sword", "dugu-jiujian");
	set("card2_count",1);

	create_family("��ɽ��", 14, "����");

	set("inquiry", ([
		"������" : "�����Ѿ��ܾ�û�м��������˼��ˡ���������\n",
		"��ӯӯ" : "������������Ϣ��,˵��,�Լ������鼤��,�����۾����ģ�\n",
	]));
	setup();	 	
	carry_object("/obj/cloth")->wear();
	carry_object("/obj/weapon/sword")->wield();
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

	if( !who || environment(who) != environment() ) return 0;
	if ( !objectp(ob) ) return 0;
	if (query("card2_count") == 0)
	{ 
		say( "������: ���Ѿ�������ӯӯȥ�ˣ���л����!\n" );
		return 1;
	}
	if ( !present(ob, who) ) return notify_fail("��û�����������\n");

	if (  (string)ob->query("id") != "qing xin")
	    return notify_fail("����岻��Ҫ���������\n");
	say( "�����˫��������ӯӯ���ţ���������, ���׻�����������ȥ����ӯӯ,
�������Ҿ�ȥ����!\n" );
	obn = new(__DIR__"obj/card2");
	obn->move(who);
	set("card2_count",0);
	return 1;
}

void attempt_apprentice(object ob)
{
	int student_num;
	string temp, line;
	mapping myfam;

	temp = read_file("/data/FENG", 1, 1);
	student_num = atoi(temp);

	line = "���������ڹ���" + temp + "��ͽ�ܡ�\n";
	write(line);

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
	return;
}
