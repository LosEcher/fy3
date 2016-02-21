// ning.c ������

inherit NPC;
inherit F_MASTER;

void create()
{
	set_name("������", ({ "ning zhongze", "ning", "zhongze", "shiniang" }));
	set("long", 
"������Ůʿ������������Ⱥ��ʦ�ü����ӣ���Ȼ�Ѳ���\n"
"���꣬���������ɡ����书ֻ������Ⱥ��ѷ���ѡ�\n");

	set("gender", "Ů��");
	set("age", 38);
	set("attitude", "peaceful");
	set("mingwang",1);
	set("str", 20);
	set("int", 35);
	set("con", 30);
	set("dex", 30);
	
	set("kee", 2200);
	set("max_kee", 2200);
	set("gin", 1600);
	set("max_gin", 1600);
	set("force", 2000);
	set("max_force", 2000);
	set("force_factor", 30);

	set("combat_exp", 1000000);
	set("score", 150000);

	set_skill("force", 200);
	set_skill("dodge", 200);
	set_skill("parry", 200);
	set_skill("sword", 200);
	set_skill("zixia-shengong", 200);
	set_skill("huashan-jianfa", 200);
	set_skill("feiyan-huixiang", 200);
	set_skill("huashan-quanfa", 200);
	set_skill("literate", 90);
	set_skill("unarmed", 200);

	map_skill("dodge", "feiyan-huixiang");
	map_skill("force", "zixia-shengong");
	map_skill("parry", "huashan-jianfa");
	map_skill("sword", "huashan-jianfa");
	map_skill("unarmed", "huashan-quanfa");

	
	create_family("��ɽ��", 13, "����");

	set("chat_chance_combat", 50);
	set("chat_msg_combat", ({
		(: perform_action, "sword.jianzhang" :),
		(: perform_action, "sword.wushuang" :),
		(: exert_function, "recover" :),
	}) );

	setup();
	carry_object("/obj/cloth")->wear();
	carry_object("/obj/weapon/sword")->wield();
}

void attempt_apprentice(object ob)
{
	string family;

	family=(string)ob->query("family/family_name");
	if(! family || family !="��ɽ��")		{
		command("say �㲢���һ�ɽ����ѽ��");
		return;
	}
	if(family=="��ɽ��" && (int)ob->query("family/generation")<=(int)query("family/generation"))	{
		command("say �������ҿɲ��ҵ�����");
		return;
	}
	if ((string)ob->query("gender") != "Ů��") {
		command("say ���¿�ʲô��Ц������ô�ܹ�������Ϊͽ�أ����������વġ�");
		return;
	}

	if ((int)ob->query("mingwang") < 5000) {
		command("say �һ�ɽ�����������������ɣ��Ե���Ҫ���ϡ�");
		command("say �ڵ��з��棬" + RANK_D->query_respect(ob) +
			"�Ƿ����ò�����");
		return;
	}

	command("say �ðɣ��Ҿ��������ˡ�");
	command("recruit " + ob->query("id"));
	if((string)ob->query("class") != "xiake")
		ob->set("class", "xiake");
}
