inherit NPC;

void create()
{
   set_name("î��", ({ "rabbit","tuzi" }) );
   set("race", "Ұ��");
   set("age", 9);
   set("long", "�ɰ���С����,�����Ķ���,���������.��\n");
   
   set("str", 10);
   set("cor", 24);
   set("combat_exp",15000);
   set("kee",500);
   set("max_kee",500);

   set("limbs", ({ "ͷ��", "����", "β��", "��ǰצ","��ǰצ" "���צ","�Һ�צ" }) );
   set("verbs", ({ "bite", "claw" }) );


   set_temp("apply/attack", 10);
   set_temp("apply/armor", 30);

   set("chat_chance",5);
   set("chat_msg",({
   "������߿���һ����̵Ĳ�,һ��б�ۿ�����.\n",
   "��������ʯ������һȦ,������Ų��������.\n",
   }));
   setup();
}

void die()
{
  message_vision("$N����һ��,�ڿ��д��˸���,��ʧ��.\n",this_object());
  new(__DIR__"obj/sparkler.c")->move(environment(this_object()));
  destruct(this_object());
  return;
}