inherit NPC;
inherit F_MASTER;
void create()
{
	set_name("л��", ({ "xie lin","girl", "dizi" }));
	set("age", 16);
	set("gender", "Ů��");
	set("attitude", "peaceful");
       set("title","�㵴Сʦ��");
	set("str", 34);
	set("dex", 36);
	set("combat_exp", 10000);
	set_skill("unarmed", 60);
	set_skill("dodge", 60);
	set_skill("parry", 60);
	set_skill("sword", 60);
	set_skill("force", 60);
	set_skill("luoyan-jianfa", 60);
	set_skill("yuxuan-guizhen", 60);
	set_skill("tianfeng-xuan", 60);
	set_skill("tiangang-zhi", 60);
        set("shen_type",1);
	map_skill("force", "yuxuan-guizhen");
       map_skill("dodge","tianfeng-xuan");
      map_skill("sword","luoyan-jianfa");
       map_skill("parry","tiangang-zhi");
       map_skill("unarmed","tiangang-zhi");

   create_family("�㵴��",3,"����");
	set("inquiry", ([
		"��" : "����ʦ��������,��......",
		"flower" : "����ʦ��������,��......",
		]) );	
	setup();
	carry_object("obj/weapon/sword")->wield();
	carry_object("obj/cloth")->wear();
	add_money("silver",5);
	carry_object(__DIR__"obj/hongmeigui");
}
void attempt_apprentice(object ob)
 {  if (ob->query("gender")=="Ů��")   {
 	 command("say " + RANK_D->query_respect(ob) + 
 "�����Ȼ���ļ������㵴һ��,�Ҿ������������Ӱɣ���\n");
        command("recruit " + ob->query("id") );
        return;
 }	
 else command("say �ҿɲ������Ǽ���,�����е�Ү.\n");
 return;
}
