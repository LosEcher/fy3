inherit NPC;

void create()
{
   set_name("����", ({ "horse"}) );
   set("race", "Ұ��");
   set("age", 12);
   set("long", "һƥǿ���Ŀ���,��ʱ����������˻��\n");
   
   set("str", 23);
   set("cor", 24);
   set("combat_exp",45000);
   set("kee",700);
   set("max_kee",700);

   set("limbs", ({ "ͷ��", "����", "β��", "ǰ��","����"}) );
   set("verbs", ({ "bite","claw"}) );

   set_temp("apply/attack", 15);
   set_temp("apply/armor", 20);

   set("chat_chance",5);
   set("chat_msg",({
   "����ס��˻,��ë����,���ޱ�.\n",
   "���������������ŵ���.\n",
   }));
   setup();
}
void die()
{
  message_vision("$N�����㳤˻һ��,��������.\n",this_object());
  new(__DIR__"obj/matilian")->move(environment(this_object()));
  destruct(this_object());
  return;
}