inherit NPC;
void create()
{
   set_name("���պ���",({"wangye","wanyan"}));
   set("gender","����");
   set("long","���������.\n");
   set("mingwang",-10000);
   set("combat_exp",160000);
set("title","����ү");
   
   set("age",45);
   set("kee",680);
   set("max_kee",680);
   set("food",250);
   set("water",250);
   set("force",300);
   set("max_force",300);
   set("force_factor",20);

   set_skill("dodge",60);
   set_skill("force",60);
   set_skill("parry",60);
   set_skill("unarmed",60);
   set_skill("spear",60);
   set_skill("sword",60);

   setup();
   add_money("gold",1);
carry_object("/d/obj/cloth/jinpao")->wear();
}
