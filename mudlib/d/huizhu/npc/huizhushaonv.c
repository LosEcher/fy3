inherit NPC;
void create()
{
   set_name("������Ů",({"shao nv"}));
   set("gender","Ů��");
   set("mingwang",900);
   set("combat_exp",4000);
   set("area_name","������Ⱥ");
   set("mingwang",300);
   
set("age",19);
   set("kee",500);
   set("max_kee",500);
set("food",250);
set("water",250);
   set("force",100);
   set("max_force",100);
   set("force_factor",10);

   set_skill("dodge",20);
   set_skill("force",20);
   set_skill("parry",20);
   set_skill("unarmed",20);
   set_skill("whip",20);
   set_skill("sword",20);
   set_skill("spear",20);

   setup();
   add_money("silver",1);
carry_object("/obj/cloth")->wear();
carry_object("/d/obj/weapon/whip/whip")->wield();
}
void init()
{
  object ob,area;
        area=new("/obj/area");
	area->create(query("area_name"));
        set("banghui",(string)area->query("banghui"));
        destruct(area);
}