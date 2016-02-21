inherit NPC;

void create()
{
   set_name("����", ({ "mouse","laoshu" }) );
   set("race", "Ұ��");
   set("age", 6);
   set("long", "�������,����������Ӳ�ĺ��롣\n");
   
   set("str", 14);
   set("cor", 24);
   set("combat_exp",5000);
   set("kee",300);
   set("max_kee",300);

   set("limbs", ({ "ͷ��", "����", "β��", "��ǰצ","��ǰצ" "���צ","�Һ�צ" }) );
   set("verbs", ({ "bite", "claw" }) );

   set("chat_chance", 5);
   set("chat_msg", ({
  "�������ֻС�����ڹ������ת����ͣ.\n",
  "������˻�β��,����ǰצ��������˼���.\n",
  "����֨֨�ؽ�������.\n",
 }));
   set_temp("apply/attack", 10);
   set_temp("apply/armor", 20);

   setup();
}

void die()
{
  message_vision("$N֨֨����һ��,�����Ҵ�,һգ�۲�����.\n",this_object());
  new(__DIR__"obj/clarv.c")->move(environment(this_object()));
  destruct(this_object());
  return;
}