// Mr.music  yangzhou' �Ʋ���

inherit NPC;

void create()
{
	set_name("�Ʋ���", ({ "tangbohu","tang", "hu" }));
	set("long", "�պ��������������εĽ��ϲ��ӡ�\n");
	set("gender", "����");
	set("age", 35);
        set("per",60);
        set("mingwang",1);
	set_skill("literate", 200);

        set("title","���ϵ�һ����");
	set_skill("unarmed", 90);
	set_skill("dodge", 90);
	set_skill("parry", 90);
	set_temp("apply/attack", 90);
	set_temp("apply/defense", 90);
	set_temp("apply/damage", 50);

	set("combat_exp", 900000);
	set("shen_type", 1);
	setup();

	set("chat_chance", 1);
	set("chat_msg", ({
	       	"�Ʋ���ҡ��ҡ���е����ӣ�˵������ѧ���Ļ��ɣ������ѧ�ġ�\n",
                " ���뵱��...�� ,�Ʋ���˵����Ц��Ц�Ŀ�������һ�ۣ�����������ӡ�\n",
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
		message_vision("�Ʋ���΢΢һЦ����$N���˵�ͷ��\n", who);
		who->add_temp("mark/��", ob->value() / 30);
		return 1;
	}
	return 0;
}
