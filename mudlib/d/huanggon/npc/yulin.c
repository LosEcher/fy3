inherit NPC;
void create()
{
   set_name("���ִ�ʦ",({"yu lin"}));
   set("gender","����");
   set("age",76);
   set("combat_exp",70000);
   set("str",20);
   set("can_teach_knowledge",1);
   set_skill("foxuexinde",200);
   setup();
   carry_object("/obj/armor/jiasha");
}
int recognize_apprentice(object ob)
{
  if (!ob->query_temp("mark/����"))
  return notify_fail("���ִ�ʦ��:�ҷ�˵���������,��ɮ��������.\n");
  ob->add_temp("mark/����",-1);
  return 1;
}
int accept_object(object ob,object item)
{
  if (!item->query("money_id")||item->value()<1000) 
 return notify_fail("������ü��:����10������.\n");
  if (!ob->query_temp("mark/����"))
       ob->set_temp("mark/����",0);
  ob->add_temp("mark/����",item->value()/30);
  return 1;
}
  