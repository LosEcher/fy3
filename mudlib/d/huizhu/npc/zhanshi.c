inherit NPC;
void create()
{
   set_name("����սʿ",({"zhan shi"}));
   set("gender","����");
   set("mingwang",900);
   set("combat_exp",4000+random(500000));
   set("area_name","������Ⱥ");
   
set("age",19+random(30));
   set("kee",500+random(1000));
   set("max_kee",500+random(1000));
set("food",250);
set("water",250);
   set("force",100+random(500));
   set("max_force",100+random(500));
   set("force_factor",10+random(50));

   set_skill("dodge",40+random(100));
   set_skill("force",40+random(100));
   set_skill("parry",40+random(100));
   set_skill("unarmed",40+random(100));
   set_skill("whip",40+random(100));
   set_skill("sword",40+random(100));
   set_skill("spear",40+random(100));
   
   set("chat_chance",5);
   set("chat_msg",({
   	(:random_move:),
   }));

   setup();
   add_money("silver",1);
carry_object("/obj/std/armor/pijia")->wear();
carry_object("/d/obj/weapon/spear/tieqiang")->wield();
}
void init()
{
  object ob,area;
        area=new("/obj/area");
	area->create(query("area_name"));
        set("banghui",(string)area->query("banghui"));
        destruct(area);
}