// song.c ��Զ��

inherit NPC;
inherit F_MASTER;

string ask_me();

void create()
{
	set_name("��Զ��", ({ "song yuanqiao", "song" }));
	set("nickname", "�䵱����");
	set("long", 
		"������������Ĵ���ӡ��䵱����֮�׵���Զ�š�\n"
		"��һ���ɸɾ����Ļ�ɫ���ۡ�\n"
		"���������ʮ������ݳ���������⡣�񵭳�ͣ���Ĭ���ԡ�\n");
	set("gender", "����");
	set("age", 61);
	set("attitude", "peaceful");
	set("shen_type", 1);
	set("str", 30);
	set("int", 30);
	set("con", 35);
	set("dex", 30);
	
set("max_kee", 1800);
set("max_gin",1800);
set("force",2000);
set("max_force", 2000);
	set("combat_exp", 400000);
set("force_factor", 100);
	set("score", 100000);

	set_skill("force", 130);
	set_skill("taiji-shengong", 120);
	set_skill("dodge", 120);
	set_skill("tiyunzong", 120);
	set_skill("unarmed", 120);
	set_skill("taiji-quan", 120);
	set_skill("parry", 120);
	set_skill("sword", 120);
    set_skill("taiji-jian", 120);
	set_skill("literate", 120);

	map_skill("force", "taiji-shengong");
	map_skill("dodge", "tiyunzong");
	map_skill("unarmed", "taiji-quan");
    map_skill("parry", "taiji-jian");
    map_skill("sword", "taiji-jian");

	create_family("�䵱��", 2, "����");


	set("chat_chance_combat", 40);
	set("chat_msg_combat", ({
		(: perform_action, "unarmed.zhen" :),
		(: exert_function, "recover" :),
	}) );

	setup();
    carry_object("/obj/weapon/sword")->wield();
	carry_object(__DIR__"obj/greyrobe")->wear();
    carry_object(__DIR__"obj/force-book")->wear();

}

void attempt_apprentice(object ob)
{
	if ((int)ob->query("mingwang") < 10000) {
		command("say ���䵱���������������ɣ��Ե���Ҫ���ϡ�");
		command("say �ڵ��з��棬" + RANK_D->query_respect(ob) +
			"�Ƿ����ò�����");
		return;
	}
	command("say �ðɣ�ƶ�����������ˡ�");
	command("recruit " + ob->query("id"));
	if( (string)ob->query("class") != "daoshi")
		ob->set("class", "daoshi");
}
