inherit NPC;
void create()
{
   set_name("���",({"zhu cong"}));
   set("gender","����");
   set("long","�����߹��϶�,���Ϲ����˵�!\n");
   set("mingwang",80000);
   set("combat_exp",1700000);
   set("title","��������");
   
set("age",34);
   set("kee",1700);
   set("max_kee",1700);
set("food",250);
set("water",250);
   set("force",1700);
   set("max_force",1700);
   set("force_factor",20);

   set_skill("dodge",170);
   set_skill("force",170);
   set_skill("parry",170);
   set_skill("unarmed",170);
   set_skill("sword",170);

   setup();
   add_money("silver",70);
carry_object("/obj/cloth")->wear();
carry_object("/d/suzhou/npc/obj/zheshan")->wield();
}
