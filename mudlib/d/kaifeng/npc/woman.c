inherit NPC;
void create()
{
   set_name("̤�฾��",({"woman"}));
   set("gender","Ů��");
   set("long","������������ĸ���!\n");
   set("mingwang",100);
   set("combat_exp",5000);
   
set("age",34);
   set("kee",500);
   set("max_kee",500);
set("food",250);
set("water",250);
   set("force",400);
   set("max_force",400);
   set("force_factor",10);

   set_skill("dodge",20);
   set_skill("force",20);
   set_skill("parry",20);
   set_skill("unarmed",20);
   set_skill("sword",20);

   setup();
   add_money("silver",2);
carry_object("/obj/cloth")->wear();

}
int accept_fight(object who)
{
  message("channel:chat",
  "�����ġ�̤������:��������!"+who->query("name")+"����!\n",users());
  return 0;
}