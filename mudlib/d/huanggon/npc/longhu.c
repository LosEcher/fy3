inherit NPC;
void create()
{
   set_name("��������",({"dao ren"}));
   set("gender","����");
   set("age",45);
   set("combat_exp",5000);
   set("str",23);
   set_skill("daoxuexinde",200);
set("can_teach_knowledge",1);
   setup();
 carry_object("/obj/armor/dao-cloth")->wear();
 carry_object("/obj/armor/dao-xie")->wear();
 }
int recognize_apprentice(object ob)
{
  if (!ob->query_temp("mark/����"))
  return notify_fail("�������˵�:ʩ������Ϊ���۲�ʩһ��,ƶ�������Խ���.\n");
  ob->add_temp("mark/����",-1);
  return 1;
}
int accept_object(object ob,object item)
{
    if (!item->query("money_id")||item->value()<20000) 
 return notify_fail("������ü��:����10������.\n");
  if (!ob->query_temp("mark/����"))
       ob->set_temp("mark/����",0);
  ob->add_temp("mark/����",item->value()/30);
  return 1;
}
