inherit NPC;
void create()
{
   set_name("����ͼ",({"suo etu"}));
   set("gender","����");
   set("age",45);
   set("combat_exp",2000);
   set("mingwang",4000);
   
   set_skill("unarmed",20);
   set_skill("parry",20);
   set_skill("dodge",20);
   set_skill("literate",50);
   set("chat_chance",4);
   set("chat_msg",({
  "����ͼ��:�������,����ô��ƽ��������?\n",
  "����ͼ��:������˻���ʶ��,�����������.\n",
  "����ͼ��:���϶����غ��ɹŵ��������������.\n",
  }));
   
   setup();
   add_money("silver",10);
}