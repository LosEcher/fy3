inherit NPC;
void create()
{
   set_name("��������",({"shang ren"}));
   set("gender","����");
   set("age",43);
   set("combat_exp",80000);
   set("force",300);
   set("max_force",300);
   set("force_factor",23);
   set("chat_chance",5);
   set("chat_msg",({
   "�������˵�:����ү�ķ�,��ҪΪ��ү����.\n",
   "�������˵�:�����ļҽ����ղ������.\n",
   "�������˵�:���г����Ҳ���,�������ɱ��.\n",
   }));
   
   set_skill("unarmed",35);
   set_skill("parry",35);
   set_skill("dodge",35);
   set_skill("huashan-quanfa",30);
   map_skill("unarmed","huashan-quanfa");
   map_skill("parry","huashan-quanfa");
   setup();
   add_money("silver",40);
   carry_object("/obj/armor/jiasha")->wear();
 }