inherit NPC;
void create()
{
  set_name("�����",({"xiao qinfeng","xiao"}));
  set("age",54);
  set("gender","����");
  set("combat_exp",300000);
  
  set("long","��ò��񳣬��縳��룬��΢���ͣ�������Ƴ�ʧ������塣\n");
  
  set_skill("dodge",60);
  set_skill("unarmed",60);
  set_skill("parry",60);
  set_skill("force",60);
  set_skill("literate",60);
  set_skill("sword",60);

  setup();
  carry_object(__DIR__"obj/qingjian")->wield();
  add_money("silver",40);
  }                                         