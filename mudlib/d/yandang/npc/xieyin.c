inherit NPC;
inherit F_MASTER;

void create()
{
	set_name("л�", ({ "xie ying","girl", "dizi" }));
	set("age", 16);
	set("gender", "Ů��");
	set("attitude", "peaceful");
	set("str", 34);
	set("dex", 36);
       set("title","�㵴Ů����");
	set("combat_exp", 90000);
	set_skill("unarmed", 120);
	set_skill("dodge", 120);
	set_skill("parry", 120);
	set_skill("sword", 120);
	set_skill("force", 120);
	set_skill("luoyan-jianfa", 120);
	set_skill("yuxuan-guizhen", 120);
	set_skill("tianfeng-xuan", 120);
        set("shen_type",1);
	set_skill("tiangang-zhi", 120);
	map_skill("force", "yuxuan-guizhen");
       map_skill("dodge","tianfeng-xuan");
      map_skill("sword","luoyan-jianfa");
       map_skill("parry","tiangang-zhi");
       map_skill("unarmed","tiangang-zhi");
create_family("�㵴��",2,"����");
	setup();
	carry_object("obj/weapon/sword")->wield();
	carry_object("obj/cloth")->wear();
}
void attempt_apprentice(object ob)
 {  if (ob->query("gender")=="Ů��")   {
      if (ob->query_skill("yuxuan-guizhen",1)>50)  {   
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
