inherit NPC;
void create()
{
   set_name("����",({"shu chi"}));
   set("gender","����");
   set("long","��ľ��Ĵ����,����������,������թ!\n");
   set("mingwang",-20000);
   set("combat_exp",700000);
   set("area_name","�ɹŲ�ԭ");
   
set("age",39);
set("kee",1200);
   set("max_kee",1200);
set("food",250);
set("water",250);
   set("force",900);
   set("max_force",900);
   set("force_factor",50);

   set_skill("dodge",120);
   set_skill("force",120);
   set_skill("parry",120);
   set_skill("unarmed",120);
   set_skill("spear",120);
   set("chat_chance",5);
   set("chat_msg",({
"����ٺ���Ц����:���̨�Ǹ�����,��[��]��λ�ó������ҵ�.\n",
"����������ϵĽ���,��Ѫɫ�����Ѿ�һ������.\n",
}));

   setup();
   add_money("silver",30);
carry_object("/obj/std/armor/tiejia")->wear();
carry_object("/d/obj/weapon/spear/jinqiang")->wield();
}
void init()
{
        object area;
        area=new("/obj/area");
	area->create(query("area_name"));
        set("banghui",(string)area->query("banghui"));
        destruct(area);
}