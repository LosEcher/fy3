inherit NPC;
void create()
{
  set_name("ĳ��",({"bangzhong"}));
  set("age",34);
  set("shen_type",-1);
  set("combat_exp",40000);
  set("title","���»����");
 
  set_skill("force",30);
  set_skill("dodge",30);
  set_skill("unarmed",30);
  set_skill("literate",30);
  set_skill("parry",30);
  
  set("inquiry",([
  "�ؿ�":"������������»���ܶ棬�迨�̲�.\n",
  "����":"��answer xxx�ش��Լ������־�����.\n",
     ]));
  set("banghui","���»�");

  setup();
  add_money("silver",3);
  carry_object("/obj/weapon/blade")->wield();
 }
void init()
{
  add_action("do_answer","answer");
}
int do_answer(string arg)
{
  object ob;
      ob=this_player();
 if (!ob||environment(ob)!=environment(this_object()))
         return;
 if (ob->query("banghui")=="���»�")  {
  command("say �Լҵ��֣�������һ�׸�ʲô!\n");
  return;   }
 if (!arg) return notify_fail("�����Լ�������!(answer xxx).\n");
 if (ob->query("name")!=arg)  {
  command("say ����?����?����ô���Ų���!\n");
  return notify_fail("");
       }
  command("look "+ob->query("id"));
  command("say ������ȥ��!\n");
  ob->set_temp("tianxia/pass_answer",1);
  return 1;
}