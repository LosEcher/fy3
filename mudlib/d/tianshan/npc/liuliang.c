inherit NPC;
void create()
{
   set_name("������",({"liulang zhe"}));
   set("gender","����");
   set("age",34);
   set("long","���޷�˪��������,��������,���Ÿ��.\n");
   set("combat_exp",200);
   set_skill("dodge",20);
   set_skill("hammer",20);
   set_skill("unarmed",20);
   set("chat_chance",5);
   set("chat_msg",({
   "�����ߵ�����ͷ��,��Զ�������ڲ�ԭ��Ʈ��.\n",
   "ʥ��ı������ӵ��ң���������ˮ�����������
   �������ǹ�������ֵ����˶�������
   �����������˵����ˣ��㻹Ҫ�ʹ�������ɽ�����������ɰ��
   ����.......
   ���˵�����ѽ����ԭ��أӥҲ���������������£�
   ���Ǿ�����ѽ����ѽ����ѽ...
   Ҫ�ߵ��������£��ſ�ͣ�����ǵ���\n",
   }));
   setup();
   carry_object(__DIR__"obj/matouqin.c")->wield();
   carry_object(__DIR__"obj/zangpao.c")->wear();
   add_money("silver",1);
}