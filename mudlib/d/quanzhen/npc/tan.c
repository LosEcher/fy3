// tan.c ̷����


#include <ansi.h>
inherit NPC;
inherit F_MASTER;

void create()
{
	set_name("̷����", ({"tan chuduan", "tan"}));
	set("gender", "����");
	set("age", 40);
	set("nickname",HIY"������"NOR);
	set("long", 
		"������ȫ���ͽ̷����̷���ˣ�����Ŀ��࣬Ũü���ۣ�ɤ��\n"
                "����������������Ϊʦǰ������������\n"
);
	set("attitude", "peaceful");
	set("shen_type",1);
	set("str", 34);
	set("int", 28);
	set("con", 28);
	set("dex", 28);

	set("title","ȫ������֮��");
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

	set("kee", 4000);
	set("max_kee", 4000);
	set("gin", 1600);
	set("max_gin", 1600);
	set("force", 2500);
	set("max_force", 2500);
	set("force_factor", 70);
	
	set("combat_exp", 500000);
	set("score", 300000);
	 
	set_skill("force", 130);
	set_skill("xiantian-qigong", 140);    //��������
	set_skill("sword", 130);             
	set_skill("quanzhen-jian",140);  //ȫ�潣
	set_skill("dodge", 120);
	set_skill("jinyan-gong", 130);   //���㹦
	set_skill("parry", 130);
	set_skill("unarmed",130);
	set_skill("haotian-zhang", 130);    //�����
	set_skill("literate",80);
	set_skill("daoxuexinde",100);

	map_skill("force", "xiantian-qigong");
	map_skill("sword", "quanzhen-jian");
	map_skill("dodge", "jinyan-gong");
	map_skill("parry", "quanzhen-jian");
	map_skill("unarmed", "haotian-zhang");

	create_family("ȫ���", 2, "����");

	set("book_count",1);
        set("inquiry", ([
		"ȫ���" :  "��ȫ��������µ����������ڡ�\n",
        ]) );

	setup();
	
        carry_object("/obj/weapon/sword")->wield();
	carry_object(__DIR__"obj/grayrobe")->wear();

}

void attempt_apprentice(object ob)
{
    	if ((int)ob->query_skill("xiantian-qigong",1) < 50 ) {
        	command("say ��ı����ڹ��ķ������,�������Ը�������书��");
		return;
    	}
	if ((int)ob->query("mingwang")<5000) {
		command("say �����������ұ�ѧ���˵Ļ���Ʒ�ʣ������ܶ���Щ����֮�£���һ������Ϊͽ��\n");
		return;
	}
	command("say �ðɣ��Ҿ����������ͽ���ˡ�");
	command("recruit " + ob->query("id"));
}

