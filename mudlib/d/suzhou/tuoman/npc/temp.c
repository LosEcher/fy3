// Mr.music yangzhou's ����

inherit NPC;

void create()
{
	set_name("����", ({ "qiuxiang", "xiang" ,"qiu"}));
	set("long", "һ����Ů���Ʋ����ķ��ˡ�\n");
	set("gender", "Ů��");
	set("age", 25);
        set("per", 90);

	set_skill("literate", 50);
        set("title","���ϵ�һ��Ů");
	set_skill("unarmed", 60);
	set_skill("dodge", 60);
	set_skill("parry", 60);
	set_temp("apply/attack", 80);
	set_temp("apply/defense", 80);
	set_temp("apply/damage", 20);

	set("combat_exp", 100000);
	set("shen_type", 1);
	setup();

	set("chat_chance",1);
	set("chat_msg", ({
		"���㳯��Ц��Ц������õ���·�ͻȻֹͣת���ˡ�\n",
		"���㺬�������Ŀ����Ʋ���һ�ۡ�\n",
	}) );
}

int recognize_apprentice(object ob)
{
	if (!(int)ob->query_temp("mark/��"))
		return 0; 
	ob->add_temp("mark/��", -1);
	return 1;
}

int accept_object(object who, object ob)
{
	if (!(int)who->query_temp("mark/��"))
		who->set_temp("mark/��", 0);
	if (ob->query("money_id") && ob->value() >= 500) {
		message_vision("����Ц��Ц����$N���ͷ��\n", who);
		who->add_temp("mark/��", ob->value() / 20);
		return 1;
	}
	return 0;
}
