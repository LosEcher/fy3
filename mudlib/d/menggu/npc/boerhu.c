inherit NPC;
void create()
{
   set_name("������",({"boer shu"}));
   set("gender","����");
   set("long","��ľ�������Ľ�֮һ,���͹���!\n");
   set("mingwang",25000);
   set("combat_exp",1600000);
   set("area_name","�ɹŲ�ԭ");
   
set("age",45);
   set("kee",2000);
   set("max_kee",2000);
set("food",250);
set("water",250);
set("chat_chance",8);
set("chat_msg",({
"������͵͵������:ֻ�о���佻�������ܶԸ���ԭ�ϵ�ӥ��.\n",
"������̾��:�����µİ׵���ӥ�յ����.\n",
}));
   set("force",1500);
   set("max_force",1500);
   set("force_factor",60);

   set_skill("dodge",160);
   set_skill("force",160);
   set_skill("parry",160);
   set_skill("unarmed",160);
   set_skill("spear",160);

   setup();
   add_money("silver",20);
carry_object("/obj/cloth")->wear();
carry_object("/d/obj/weapon/spear/tieqiang")->wield();
}
void init()
{
        object area;
        area=new("/obj/area");
	area->create(query("area_name"));
        set("banghui",(string)area->query("banghui"));
        destruct(area);
}
