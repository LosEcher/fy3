inherit NPC;
void create()
{
 set_name("��¡",({"duolong"}));
 set("age",343);
 set("gender","����");
 set("nickname","��ǰ�����ܹ�");
 set("combat_exp",550000);
 set("force",500);
 set("max_force",500);
 set("force_factor",80);
 set_skill("unarmed",100);
 set_skill("dodge",100);
 set_skill("parry",100);
 set_skill("blade",100);
 set_skill("force",100);
 set_skill("emei-xinfa",100);
 set_skill("anying-fuxiang",100);
 set_skill("wuhu-duanmendao",100);
 set_skill("jinyu-quan",100);
 map_skill("dodge","anying-fuxiang");
 map_skill("unarmed","jinyu-quan");
 map_skill("force","emei-xinfa");
 map_skill("blade","wuhu-duanmendao");
   
 setup();
 carry_object("/obj/std/weapon/gangdao")->wield();
 carry_object("/obj/std/armor/yinjia")->wear();
 }
int accept_fight(object ob)
{
command("say ��������,ˡ�Ѵ���.\n");
return 0;
}
  