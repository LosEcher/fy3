inherit NPC;
void create()
{
 set_name("���־�",({"guard"}));
 set("age",34);
 set("gender","����");
 set("combat_exp",150000);
 set_skill("unarmed",100);
 set_skill("dodge",100);
 set_skill("parry",100);
 set_skill("blade",100);
 set_skill("spear",100); 
  
 setup();
 carry_object("/d/yanjing/npc/obj/tiespear")->wield();
 carry_object("/obj/std/armor/tiejia")->wear();
 }
int accept_fight(object ob)
{
command("say ��������,ˡ�Ѵ���.\n");
return 0;
}
  