inherit NPC;
void create()
{
   set_name("��ʿ",({"qi shi"}));
   set("age",30);
   set("mingwang",200);
   set_skill("unarmed",40);
   setup();
   carry_object("/obj/cloth")->wear();
}