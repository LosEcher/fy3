inherit NPC;
void create()
{
   set_name("С����",({"xiao guizi"}));
   set("gender","����");
   set("age",14);
   set("combat_exp",200);
   
   set_skill("unarmed",5);
   set_skill("parry",5);
   set_skill("dodge",5);
   set("chat_chance",5);
   set("chat_msg",({
 "С���ӵ�:����̫���,�Դ�������.\n",
 "С���ӵ�:Ҫ������ϵ�,ס�����ӵ�,���ҵ�̫������.\n",
 "С���ӵ�:����̫��,���ž͹ܲ�����,�ж��.\n",
 }));
   set("inquiry",([
   "����":"���ʺ���������.\n",
   "̫��":"���ʺ���������.\n",
   ]));
 setup();
 add_money("silver",1);
 }

 