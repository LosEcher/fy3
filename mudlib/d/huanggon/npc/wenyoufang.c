inherit NPC;
void create()
{
  set_name("���з�",({"wen youfang"}));
  set("age",21);
  set("gender","����");
  set("mingwang",100);
  set("combat_exp",10000);
  set_skill("unarmed",30);
  set_skill("parry",30);
  set_skill("dodge",30);
  set_skill("force",30);
  set("chat_chance",4);
  set("chat_msg",({
  "���з���:��Щ���������˵��鷿���ҷ�,����.\n",
  "���з���:�ֵ��⼸��Ҳ������,��ʱ��ҹ������.\n",
  "���з����������ɨ����.\n",
  }));
  set("force",100);
  set("max_force",100);
  set("force_factor",5);
  
  setup();
  add_money("coin",30);
  }
  