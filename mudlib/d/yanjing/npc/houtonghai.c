inherit NPC;
void create()
{
	set_name("��ͨ��",({"hou tonghai","hou"}));
   set("gender","����");
   set("mingwang",-9000);
   set("combat_exp",113000);
   set("title","��ͷ��");
 
   set("age",44);
   set("kee",680);
   set("max_kee",680);
   set("food",250);
   set("water",250);
   set("force",680);
   set("max_force",680);
   set("force_factor",20);
   set("chat_chance",7);
   set("chat_msg",({
  "��ͨ��ָ�ŵض���:�������������צ��̫����,�ҿɲ���ȥ.\n",
  "��ͨ�����˻��Դ��ϵ�����,��ض�̽ͷ̽�Ե�,����������ͷ��.\n",
  }));

   set_skill("dodge",40);
   set_skill("force",67);
   set_skill("parry",67);
   set_skill("unarmed",76);
   set_skill("spear",34);
   set_skill("blade",56);
 
   setup();
   add_money("silver",20);
carry_object("/obj/cloth")->wear();
}
