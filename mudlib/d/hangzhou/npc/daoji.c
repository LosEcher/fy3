inherit NPC;
void create()
{
   set_name("���ú���",({"daoji"}));
   set("age",34);
   set("long","�����µĺ���,��˵�з���.\n");
   set("str",17);
   set("env/wimpy",50);
   set("chat_chance",5);
   set("chat_msg",({
"�������:���⴩����,����������.\n",
"�������������д�,����һ��,���г���һ������.\n",
}));
   set_skill("foxuexinde",200);
set("combat_exp",5000);
   set("can_teach_knowledge",1);
   setup();
carry_object("/obj/armor/seng-cloth")->wear();
}
int recognize_apprentice(object ob)
{
  if (!ob->query_temp("daoji"))
    return notify_fail("���ú���ϲ���Ⱦ�,�㲻Т��һ������.\n");
  ob->add_temp("daoji",-1);
  return 1;
}
int accept_object(object who,object item)
{
 int max,remain,val;
if (!who->query_temp("daoji"))
    who->set_temp("daoji",0);
  if (item->query("liquid/type")!="alcohol")
 return notify_fail("����ϲ�����Ǿ�,�ɲ������ⶫ��.\n");
  max=item->query("max_liquid");
  remain=item->query("liquid/remaining");
  val=item->query("value")*remain/max;
  who->add_temp("daoji",(int)val/30);
  command("say ����,����,���Ϻõ�"+item->query("liquid/name")+",���к�ϲ��.\n");
return 1;
}
