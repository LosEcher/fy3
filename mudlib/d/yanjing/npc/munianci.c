inherit NPC;
void create()
{
   set_name("�����",({"mu nianci"}));
	set("gender","Ů��");
   set("mingwang",25000);
   set("combat_exp",260000);
   
set("age",19);
   set("kee",800);
   set("max_kee",800);
set("food",250);
set("water",250);
   set("force",500);
   set("max_force",500);
   set("force_factor",30);

   set_skill("dodge",80);
   set_skill("force",80);
   set_skill("parry",80);
   set_skill("unarmed",80);
   set_skill("spear",50);
   set_skill("sword",80);
   set_skill("blade",80);
   
   set("inquiry",([
   "��������":"���...���...���ҵ�����.\n",
   "�廨Ь":"���������,��å.\n",
   ]));

   setup();
   add_money("silver",5);
carry_object("/d/obj/cloth/skirt")->wear();
carry_object(__DIR__"obj/xiuhuaxie")->wear();
}
