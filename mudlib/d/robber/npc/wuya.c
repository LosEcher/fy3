inherit NPC;

void create()
{
   set_name("��ѻ", ({ "wuya","bird" }) );
   set("race", "Ұ��");
   set("age", 6);
   set("long", "������ڵ���ѻ,�¶���������ؿ����㡣\n");
   
   set("str", 14);
   set("cor", 24);
   set("combat_exp",5000);

   set("limbs", ({ "ͷ��", "����", "���", "�ҳ�", "���","�ҽ�" }) );
   set("verbs", ({ "bite", "claw" }) );

   set("chat_chance", 5);
   set("chat_msg", ({
  "��ѻľȻ�ؿ�����,���͵����ﲻ��һ����ɫ.\n",
  "��ѻ���ؾ�������,�ƺ���Ԥ���Ų���\n",
 }));
   set_temp("apply/attack", 7);
   set_temp("apply/armor", 20);

   setup();
}
void die()
{
  message_vision("$N�ں����о�����ɢ�ҵ���ë,�漣�����ʧ��.\n",this_object());
  new(__DIR__"plume.c")->move(environment(this_object()));
  destruct(this_object());
  return;
}