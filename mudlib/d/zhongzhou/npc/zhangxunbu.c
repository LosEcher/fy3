inherit NPC;
void create()
{
  set_name("��Ѳ��",({"zhang xunbu","zhang"}));
   set("gender","����");
   set("age",34);
   set("combat_exp",50000);
   
   set_skill("unarmed",30);
   set("nickname","��������");
   set_skill("whip",30);
   set_skill("parry",30);
   set_skill("dodge",30);
   set("chat_chance",5);
   set("chat_msg",({
"��Ѳ������С����:������ٸ�ͨ��,�����ҳ°���æ.\n",
"��Ѳ�����Ŷ���,����:һѽ��,����... ...\n",
"��Ѳ�������ֹ�:�������,Ǯ����û����.\n",
}));
   setup();
   carry_object("/obj/std/weapon/pibian")->wield();
   carry_object("/obj/std/armor/pijia")->wear();
}
