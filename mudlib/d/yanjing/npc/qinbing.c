inherit NPC;
void create()
{
   set_name("�����ױ�",({"qin bing"}));
   set("gender","����");
   set("long","����������ʿ��!\n");
        set("shen_type",-1);
   set("combat_exp",60000);
   
set("age",25);
   set("kee",500);
   set("max_kee",500);
set("food",250);
set("water",250);
   set("force",500);
   set("max_force",500);
   set("force_factor",30);

   set_skill("dodge",100);
   set_skill("force",100);
   set_skill("parry",100);
   set_skill("unarmed",100);
   set_skill("spear",100);

   setup();
   add_money("silver",4);
carry_object("/obj/std/armor/pijia")->wear();
carry_object(__DIR__"obj/tiespear")->wield();
}
