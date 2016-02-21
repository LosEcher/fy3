inherit NPC;

void create()
{
   set_name("����", ({ "tiger","laohu" }) );
   set("race", "Ұ��");
   set("age", 23);
   set("long", "��ͷ��һ����������,���ǰ���֮����\n");
   
   set("str", 20);
   set("cor", 24);
   set("combat_exp",95000);
   set("kee",1300);
   set("max_kee",1300);

   set("limbs", ({ "ͷ��", "����", "β��", "��ǰצ","��ǰצ" "���צ","�Һ�צ" }) );
   set("verbs", ({ "bite", "claw" }) );


   set_temp("apply/attack", 20);
   set_temp("apply/armor", 20);

   set("chat_chance",5);
   set("chat_msg",({
  "����һ����Х,����ʯ��ҡҡ��׹,��ʯ���ϵ���.\n",
  "����������ǰ,��צ�ٵ�,��һ����ڳ�����������.\n",
  }));
   setup();
}

void die()
{
  message_vision("$N��Хһ��,ʯ����ƽ��һ����,ת�ۼ䲻����.\n",this_object());
  new(__DIR__"obj/hupi.c")->move(environment(this_object()));
  destruct(this_object());
  return;
}