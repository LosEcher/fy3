inherit NPC;
void create()
{
   set_name("����",({"mingzhu"}));
   set("gender","����");
   set("age",45);
   set("combat_exp",2000);
   set("mingwang",4000);
   
   set_skill("unarmed",20);
   set_skill("parry",20);
   set_skill("dodge",20);
   set_skill("literate",50);
  set("chat_chance",5);
  set("chat_msg",({
  "�����:ƽ������Ȼ���췴,�ҿ��ǲ������.\n",
  "�����:�������µ�Τ��ͳץס�˰���,�ֹ��ڿ�������.\n",
  "�����:̫���Ǳ������г��̿���,���ܾ��ò����.\n",
  }));
   
   setup();
   add_money("silver",10);
}