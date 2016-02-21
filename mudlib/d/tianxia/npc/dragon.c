inherit NPC;

void create()
{
   set_name("����", ({ "dragon"}) );
   set("race", "Ұ��");
   set("age", 200);
   set("long", "���е���,��צ��ץ�ſ����顣\n");
   
   set("str", 30);
   set("cor", 24);
   set("combat_exp",85000);
   set("kee",800);
   set("max_kee",800);

   set("limbs", ({ "ͷ��", "����", "β��", "��ǰצ","��ǰצ" "���צ","�Һ�צ" }) );
   set("verbs", ({ "bite", "claw" }) );

   set_temp("apply/attack", 20);
   set_temp("apply/armor", 40);
   
   set("chat_chance",5);
   set("chat_msg",({
   "��������΢��,ȫ��ð��һ������.\n",
   "�������Դ��ս���,������,���ĵ���������ͷ.\n",
   }));

   setup();
}

void die()
{
  message_vision("$N�����ڿ���һ��,һ������������ʯ��.\n",this_object());
  new(__DIR__"obj/longlin.c")->move(environment(this_object()));
  destruct(this_object());
  return;
}