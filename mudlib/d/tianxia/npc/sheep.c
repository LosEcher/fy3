inherit NPC;

void create()
{
   set_name("δ��", ({ "sheep","yang" }) );
   set("race", "Ұ��");
   set("age", 22);
   set("long", "��ɫ����ë����,������۲�,ǧ��Ҫ������Ժ���\n");
   
   set("str", 13);
   set("cor", 24);
   set("combat_exp",55000);
   set("kee",600);
   set("max_kee",600);

   set("limbs", ({ "ͷ��", "����", "β��", "ǰ��","����" "���"}) );
   set("verbs", ({ "bite", "claw" }) );

   set_temp("apply/attack", 15);
   set_temp("apply/armor", 20);
   
   set("chat_chance",5);
   set("chat_msg",({
     "δ��ҡͷ����һ��,�ƺ�������һ�׺�ʫ������.\n",
     "δ��ڰ�����,������,��ͷ����ײ��.\n",
     }));

   setup();
}

void die()
{
  message_vision("$N���쳤̾:������Ҳ.������ȥ.\n",this_object());
  new(__DIR__"obj/yangrou.c")->move(environment(this_object()));
  destruct(this_object());
  return;
}