inherit NPC;
inherit F_MASTER;

void create()
{
	set_name("����а", ({ "hua wuxie","girl", "dizi" }));
	set("age", 22);
	set("gender", "Ů��");
	set("attitude", "peaceful");
	set("str", 34);
       set("title","�㵴����");
       set("nickname","���Ľ�");
set("combat_exp", 1000000);
	set_skill("unarmed", 160);
	set_skill("dodge", 160);
	set_skill("parry", 160);
	set_skill("sword", 160);
	set_skill("force", 160);
	set_skill("luoyan-jianfa", 160);
	set_skill("yuxuan-guizhen", 160);
	set_skill("tianfeng-xuan", 160);
        set("shen_type",1);
	set_skill("tiangang-zhi", 160);
	map_skill("force", "yuxuan-guizhen");
       map_skill("dodge","tianfeng-xuan");
      map_skill("sword","luoyan-jianfa");
       map_skill("parry","tiangang-zhi");
       map_skill("unarmed","tiangang-zhi");
create_family("�㵴��",2,"����");
    set("chat_chance", 7);
	set("chat_msg", ({
		"��������,��Ҳ���޿��κ�!\n",
		(:random_move:)
	}));
	setup();
       add_money("silver",60);
	carry_object("obj/weapon/sword")->wield();
	carry_object("/d/obj/cloth/skirt")->wear();
}
void attempt_apprentice(object ob)
 {  if (ob->query("gender")=="Ů��")   {
      if (ob->query_skill("yuxuan-guizhen",1)>100)  {   
 	 command("say " + RANK_D->query_respect(ob) + 
 "�����Ȼ���İ���Ϊʦ,�Ҿ������������Ӱɣ���\n");
        command("recruit " + ob->query("id") );
        return;
   }
    command("say ����������滹������,�ȸ���ʦ��ѧ��.\n");
    return;
 }	
 else command("say �ҿɲ������Ǽ���,�����е�Ү.\n");
 return;
}
