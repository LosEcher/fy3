inherit NPC;

void create()
{
   set_name("�ϼ�", ({ "qiblets"}) );
   set("race", "Ұ��");
   set("age", 6);
   set("long", "��ڽ���,��ëѤ��,˫צ������\n");
   
   set("str", 20);
   set("cor", 24);
   set("combat_exp",75000);
   set("kee",800);
   set("max_kee",800);

   set("limbs", ({ "����", "����", "צ��","���","�ҳ�" }) );
   set("verbs", ({ "bite", "claw" }) );

   set_temp("apply/attack", 10);
   set_temp("apply/armor", 20);
   
   set("chat_chance",5);
   set("chat_msg",({
   "�ۼ���ܾ���,����˫��,������Х:�~~~�~~~�~~~~.\n",
   "�ۼ�Ŭ���ش�������,ȴ�����˵�:������,�ϰ�ҹ���.\n",
   }));

   setup();
}

void die()
{
  message_vision("$N�����ų�����˼���,�ɲ���߾͵�����,ˤ����.\n",this_object());
  new(__DIR__"obj/yumao.c")->move(environment(this_object()));
  destruct(this_object());
  return;
}