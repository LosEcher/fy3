inherit NPC;
void create()
{
   set_name("�շ��Ϻ�",({"lao han"}));
   set("gender","����");
   set("age",65);
   set("long","��ʯ���������շ�����ͷ.\n");
   set("combat_exp",2000);
   set("force",200);
   set("max_force",200);
   set("force_factor",10);
   
   set_skill("unarmed",10);
   set_skill("parry",10);
   set_skill("dodge",10);
   setup();
   add_money("silver",1);
   carry_object("/obj/cloth")->wear();
 }
 void init()
 {
   object ob;
   ::init();
   if (interactive(ob=this_player())&&!is_fighting()) {
   	remove_call_out("greeting");
   	call_out("greeting",1,ob);
  }
}
void greeting(object ob)
{
  if (!ob||environment(ob)!=environment()) return;
  command("chat ������,"+ob->query("name")+"Ҫ���ξȰ�����!\n");
  kill_ob(ob);
  return;
 }