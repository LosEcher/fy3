inherit NPC;
void create()
{
   set_name("���̨",({"cha hetai"}));
   set("gender","����");
   set("long","��ľ��Ķ�����,���Դ�³,�������¶���촽��!\n");
   set("mingwang",-15000);
   set("combat_exp",600000);
   set("area_name","�ɹŲ�ԭ");
   
   set("age",34);
   set("kee",1000);
   set("max_kee",1000);
   set("food",250);
   set("water",250);
   set("force",800);
   set("max_force",800);
   set("force_factor",40);
   
   set("chat_chance",5);
   set("chat_msg",({
  "���ܿ���˳��������С�ӣ��ϸ������ԡ�\n",
  "������ɵС�Ӿ�Ȼ������ϲ������������Ҫ����ɱ��.\n",
  }));

   set_skill("dodge",100);
   set_skill("force",100);
   set_skill("parry",100);
   set_skill("unarmed",100);
   set_skill("spear",100);

   setup();
   add_money("silver",20);
carry_object("/obj/cloth")->wear();
carry_object("/d/obj/weapon/spear/yinqiang")->wield();
}
void init()
{
        object area;
        area=new("/obj/area");
	area->create(query("area_name"));
        set("banghui",(string)area->query("banghui"));
        destruct(area);
}