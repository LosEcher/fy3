inherit NPC;

void create()
{
   set_name("����", ({ "snake"}) );
   set("race", "Ұ��");
   set("age", 100);
   set("long", "һ���޴������,�����л����ζ���\n");
   
   set("str", 20);
   set("cor", 24);
   set("combat_exp",55000);
   set("kee",900);
   set("max_kee",900);

   set("limbs", ({ "ͷ��", "����", "β��", "��ͷ"}) );
   set("verbs", ({ "bite"}) );

   set_temp("apply/attack", 10);
   set_temp("apply/armor", 20);

   set("chat_chance",5);
   set("chat_msg",({
   "�����������̳�һ��,��ʱ����ǰ����һ��Сɽ.\n",
   "�������Դ���ס�ڶ�,��ɫ�����ŷ�������������.\n",
   }));
   setup();
}

void die()
{
  message_vision("$N��ֱ���������һ��,����.\n",this_object());
  new(__DIR__"obj/longyan.c")->move(environment(this_object()));
  destruct(this_object());
  return;
}