inherit NPC;
void create()
{
   set_name("����Ѿ��",({"ya huan"}));
   set("gender","Ů��");
   set("age",18);
   set("combat_exp",800);
   set("force",100);
   set("max_force",100);
   set("force_factor",3);
   set("chat_chance",3);
   set("chat_msg",({
   "Ѿ�ߵ�:��˵��ǰ�İ��ٱ��͹��ں�԰��ʯ����.\n",
   "Ѿ�ߵ�:��˵ʯ���ڵ�������ֻ��һ�ѵ���һ�ѽ��ܿ���.\n",
   "Ѿ�ߵ�:����˭ѽ,�ҿ�����ô��ô������.\n",
   }));
   
   set_skill("unarmed",5);
   set_skill("parry",5);
   set_skill("dodge",5);
   setup();
   add_money("silver",1);
   carry_object("/obj/armor/female3-cloth")->wear();
 }