inherit NPC;
void create()
{
   set_name("�׺���",({"bai hanfeng"}));
   set("gender","����");
	set("shen_type",1);
   set("age",24);
   set("combat_exp",150000);
   set("force",600);
   set("max_force",600);
   set("force_factor",20);
   
   set("chat_chance",4);
   set("chat_msg",({
  "�׺�������ǰ�޵�:��������úò�,�ֵ�ҪΪ�㱨��.\n",
  "�׺���ŭ��:������ػ��ǰﹷ��.\n",
  }));
   set_skill("unarmed",35);
   set_skill("parry",35);
   set_skill("dodge",35);
   set_skill("blade",35);
   set_skill("anying-fuxiang",35);
   set_skill("wuhu-duanmendao",35);
   set_skill("tiangang-zhi",35);
   map_skill("parry","tiangang-zhi");
   map_skill("dodge","anying-fuxiang");
   map_skill("blade","wuhu-duanmendao");
   setup();
   add_money("silver",20);
   carry_object("/obj/cloth")->wear();
 }
 
