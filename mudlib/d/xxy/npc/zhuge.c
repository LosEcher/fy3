inherit NPC;
int go_out();
void create()
{
    set_name("���",({"zhuge","dianzhu","boss"}));
    set("gender","����");
    set("age",67);
    set("title","[����һ�ҵ�]");
    set("combat_exp",1500000);
    set("max_force",1500);
    set("force",1500);
    set("max_kee",1200);
    set("kee",1200);
    set("max_gin",900);
    set("gin",900);
    set("max_sen",700);
    set("sen",700);
    set("force_factor",50);
    set("str",34);
    set("per",36);
    set("kar",45);
    set("inquiry",([
        "out":(:go_out:),
        "��ȥ":(:go_out:),
]));
   set_skill("unarmed",200);
   set_skill("dodge",200);
   set_skill("parry",200);
   set_skill("force",200);
   set_skill("sword",200);
   set_skill("blade",200);
setup();
   carry_object("/obj/cloth")->wear();
   carry_object("/d/obj/weapon/blade/jindao")->wield();
}
int go_out()
{
   object ob;
   ob=this_player();
   message_vision("$N�����������ϰ���һ�£�$n��ǰһ�ڣ��ٿ�ʱ�ѵ�������!\n",this_object(),ob);
  ob->move("/d/xxy/zhuting");
  return 1;
}