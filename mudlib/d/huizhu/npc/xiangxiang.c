inherit NPC;
void create()
{
   set_name("���㹫��",({"gong zhu"}));
   set("gender","Ů��");
   set("long","ľ׿�׵�СŮ��,������������!\n");
   set("mingwang",20000);
   set("combat_exp",40000);
   set("area_name","������Ⱥ");
   
set("age",17);
   set("kee",900);
   set("max_kee",900);
set("food",250);
set("water",250);
   set("force",500);
   set("max_force",500);
   set("force_factor",10);

   set_skill("dodge",80);
   set_skill("force",80);
   set_skill("parry",80);
   set_skill("unarmed",80);
   set_skill("whip",80);

   setup();
   add_money("silver",20);
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