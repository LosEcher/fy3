inherit NPC;

void create()
{
   set_name("���", ({ "monkey"}) );
   set("race", "Ұ��");
   set("age", 6);
   set("long", "�������,�����ë,�������칬,��ŭ��������\n");
   
   set("str", 10);
   set("cor", 24);
   set("combat_exp",55000);
   set("kee",800);
   set("max_kee",800);

   set("limbs", ({ "ͷ��", "����", "β��", "��ǰצ","��ǰצ" "���צ","�Һ�צ" }) );
   set("verbs", ({ "bite", "claw" }) );

   set_temp("apply/attack", 10);
   set_temp("apply/armor", 20);
   
   set("chat_chance",5);
   set("chat_msg",({
   "������ȫ��һ������,ͻȻ�ͳ�һ������.\n",
   "����ѧ����һ���ұ�����,��ѽѽ�ĳ����ձ���.\n",
   }));

   setup();
}

void die()
{
  message_vision("$N���Ű���ת�˼���Ȧ,����.\n",this_object());
  new(__DIR__"obj/pantao.c")->move(environment(this_object()));
  destruct(this_object());
  return;
}