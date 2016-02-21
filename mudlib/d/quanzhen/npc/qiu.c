// qiu.c �𴦻�


#include <ansi.h>
inherit NPC;
inherit F_MASTER;


void create()
{
	set_name("�𴦻�", ({"qiu chuji", "qiu"}));
	set("gender", "����");
	set("age", 36);
	set("nickname",HIM"������"NOR);
	set("long", 
		"�����ǽ������˳ơ������ӡ����𴦻������ˣ�����������\n"
                "�����⣬��ĿԲ����˫ü�絶����ò���ϣ�ƽ���������\n"
);
	set("attitude", "heroism");
	set("shen_type",1);
	set("str", 32);
	set("int", 30);
	set("con", 30);
	set("dex", 30);

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

	set("kee", 3000);
	set("max_kee", 3000);
	set("gin", 1600);
	set("max_gin", 1600);
	set("force", 3000);
	set("max_force", 3000);
	set("force_factor", 100);
	
	set("combat_exp", 500000);
	set("score", 300000);
	 
	set_skill("force", 150);
	set_skill("xiantian-qigong", 150);    //��������
	set_skill("sword", 150);             
	set_skill("quanzhen-jian",150);  //ȫ�潣
	set_skill("dodge", 120);
	set_skill("jinyan-gong", 150);   //���㹦
	set_skill("parry", 150);
	set_skill("unarmed",150);
	set_skill("haotian-zhang", 150);    //�����
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

void init()
{
	::init();
	remove_call_out("greeting");
	call_out("greeting", 1, this_player());
}


void greeting(object ob)
{
	mapping fam;
        int i ;
	object me;

	me = this_object();
	if (interactive(ob) && !environment(ob)->query("no_fight"))
	{
 	     if (!(fam = ob->query("family")) || fam["family_name"] != "ȫ���") {
                if (ob->query("mingwang")>-5000) {     
			command("say �����Ǳ����صأ����߶�С��Щ��");
		}
 	        else {
			command("say ����ħͷ�����Ҵ�����ȫ���صأ���һ��Ҫɱ���㣡");
			me->set_leader(ob);
			remove_call_out("kill_ob");
			call_out("kill_ob", 1, ob); 
  	        }
	     }
	     else {
		command("nod "+ob->query("id"));
	     }    
	}       
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

