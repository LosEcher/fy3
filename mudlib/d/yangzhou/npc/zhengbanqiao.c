// Mr.music  yangzhou' ֣����

inherit NPC;

void create()
{
	set_name("֣����", ({ "zhengbanqiao","zheng", "banqiao" }));
	set("long", "���ݰ˹�֮�ף������黭��š�\n");
	set("gender", "����");
	set("age", 35);
        set("per", 10);
        set("class","shusheng");
        set("mingwang",1);
	set_skill("literate", 200);

         create_family("���ݰ˹�", 1, "����");

        set("title","ά��ֽ�");
	set_skill("unarmed", 80);
        set_skill("force",150);
	set_skill("dodge", 150);
	set_skill("parry", 150);
        set_skill("sword",100);
        set_skill("throwing",100);
        set_skill("qiankunyizhi",120);

        map_skill("throwing","qiankunyizhi");
	map_skill("parry","qiankunyizhi");
	set_temp("apply/attack", 90);
	set_temp("apply/defense", 90);
	set_temp("apply/damage", 50);

	set("combat_exp", 900000);
	set("shen_type", 1);

	setup();

	set("chat_chance", 1);
	set("chat_msg", ({
	       	"֣���ſ�����һ�ۣ�����ĵ��ͷ��\n",
                "֣���Ŷ���ЦЦ��˵������ֻ��Щ���ˣ�̸�������ɡ�\n",
                "֣����������˼�Ŀ��ų�ˮ����֪��Щɶ��\n",
                	}) );

        carry_object("/obj/cloth")->wear();
        carry_object(__DIR__"obj/zhuye")->wield();
}

int recognize_apprentice(object ob)
{
	if (!(int)ob->query_temp("mark/֣"))
		return 0; 
	ob->add_temp("mark/֣", -1);
	return 1;
}

int accept_object(object who, object ob)
{
	if (!(int)who->query_temp("mark/֣"))
		who->set_temp("mark/֣", 0);
	if (ob->query("money_id") && ob->value() >= 500) {
		message_vision("֣���������³��룬��$N���˵�ͷ��\n", who);
		who->add_temp("mark/֣", ob->value() / 30);
		return 1;
	}
	return 0;
}



void attempt_apprentice(object ob)
 {
        if( ((int)ob->query("int") < 15)) 
            {
                command("say " + RANK_D->query_respect(ob) +
"������Ժ��󲻹� .....\n");
             return ;
            }
        command("say " + RANK_D->query_respect(ob) +
 "�����������պ�سɴ�����\n");
        command("recruit " + ob->query("id") );
 }


 void recruit_apprentice(object ob)
 {
        if( ::recruit_apprentice(ob) )
                ob->set("class", "shusheng");
 }


