inherit NPC;
void create()
{
   set_name("��ǰ����",({"shi wei"}));
   set("age","����");
   set("age",20+random(30));
   set("combat_exp",400000);
   
   set_skill("unarmed",50);
   set_skill("sword",50);
   set_skill("parry",50);
   set_skill("dodge",50);
   set("force",500);
   set("home",1);
   set("max_force",500);
   set("force_factor",20);
   set("chat_chance",5);
   set("chat_msg",({
   (:random_move:),
   }));
   setup();
   carry_object("/obj/std/armor/tongjia")->wear();
   carry_object("/obj/std/armor/tongkui")->wear();
   carry_object("/obj/std/armor/tongxue")->wear();
   carry_object("/obj/weapon/sword")->wield();
}
#include "shiwei.h"