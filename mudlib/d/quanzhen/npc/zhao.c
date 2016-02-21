// zhao.c ��־��


inherit NPC;
inherit F_MASTER;

void create()
{
	set_name("��־��", ({"zhao zhijing", "zhao"}));
	set("gender", "����");
	set("age", 26);
	set("long", 
		"������ȫ��̵����������еĺ��֣�����һ�Ĵ������־����\n"
		"����ò��������ü����ƺ�������һ˿�ƻ�����ɫ��\n"
);
	set("attitude", "friendly");
	set("shen_type",-1);
	set("str", 25);
	set("int", 26);
	set("con", 26);
	set("dex", 25);

        set("chat_chance_combat", 60);
        set("chat_msg_combat", ({
                (: exert_function, "recover" :),
                (: exert_function, "recover" :),
                (: perform_action, "sword.ju" :),
                (: perform_action, "sword.ju" :),
                (: perform_action, "sword.ju" :),
                (: perform_action, "sword.ding" :),
                (: perform_action, "sword.ding" :),
                (: perform_action, "sword.ding" :),
	}));

	set("kee", 1500);
	set("max_kee", 1500);
	set("gin", 800);
	set("max_gin", 800);
	set("force", 1000);
	set("max_force", 1000);
	set("force_factor", 60);
	
	set("combat_exp", 160000);
	set("score", 100000);
	 
	set_skill("force", 80);
	set_skill("xiantian-qigong", 80);    //��������
	set_skill("sword", 80);             
	set_skill("quanzhen-jian",80);  //ȫ�潣
	set_skill("dodge", 70);
	set_skill("jinyan-gong", 70);   //���㹦
	set_skill("parry", 80);
	set_skill("unarmed",80);
	set_skill("haotian-zhang", 80);    //�����
	set_skill("literate",60);
	set_skill("daoxuexinde",60);

	map_skill("force", "xiantian-qigong");
	map_skill("sword", "quanzhen-jian");
	map_skill("dodge", "jinyan-gong");
	map_skill("parry", "quanzhen-jian");
	map_skill("unarmed", "haotian-zhang");

	create_family("ȫ���", 3, "����");

        set("inquiry", ([
		"ȫ���" :  "��ȫ��������µ����������ڡ�\n",
        ]) );

	setup();
	
        carry_object("/obj/weapon/sword")->wield();
	carry_object(__DIR__"obj/grayrobe")->wear();

}

void attempt_apprentice(object ob)
{
	command("say �ðɣ��Ҿ����������ͽ���ˡ�");
	command("recruit " + ob->query("id"));
}

