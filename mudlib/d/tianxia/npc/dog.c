inherit NPC;

void create()
{
   set_name("�繷", ({ "dog"}) );
   set("race", "Ұ��");
   set("age", 6);
   set("long", "����ī��,Ȯ����¶,��һ������Ȯ��\n");
   
   set("str", 25);
   set("cor", 24);
   set("combat_exp",25000);
   set("kee",800);
   set("max_kee",800);

   set("limbs", ({ "Ȯ��", "����", "ǰצ","��צ","β��" }) );
   set("verbs", ({ "bite", "claw" }) );

   set_temp("apply/attack", 10);
   set_temp("apply/armor", 20);
   
   set("chat_chance",5);
   set("chat_msg",({
   "����Ȯ������������,���������µĲ�Ӭ����һ��.\n",
   "����Ȯ�����������ֳ�,��һ��,�,��������.\n",
   }));

   setup();
}

void die()
{
  message_vision("$N����--��������һ��,�ܳ�����ȥ��.\n",this_object());
  new(__DIR__"obj/quanya.c")->move(environment(this_object()));
  destruct(this_object());
  return;
}