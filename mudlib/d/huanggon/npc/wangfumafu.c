inherit NPC;
void create()
{
   set_name("�������",({"ma fu"}));
   set("gender","����");
   set("age",43);
   set("combat_exp",8000);
   set("force",100);
   set("max_force",100);
   set("force_factor",13);
   set("chat_chance",3);
   set("chat_msg",({
   "����:�⼸��������˵,��������ʲô������.\n",
   "����:��˵ʯ���ڵ�������ֻ��һ�ѵ���һ�ѽ��ܿ���.\n",
   "����:Ҫ�ٺȾ�,������,���ܳ���.\n",
   }));
   
   set_skill("unarmed",15);
   set_skill("parry",15);
   set_skill("dodge",15);
   setup();
   add_money("silver",4);
   carry_object("/obj/cloth")->wear();
 }