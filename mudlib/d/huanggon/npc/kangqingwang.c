inherit NPC;
int ask_shenzhi();
void create()
{
   set_name("������",({"kang qingwang"}));
   set("gender","����");
   set("age",43);
   set("combat_exp",18000);
   set("force",300);
   set("max_force",300);
   set("force_factor",13);
   set("chat_chance",3);
   set("chat_msg",({
   "��������:���ڷ����е�һ����ͻȻ������.\n",
   "��������:��������,�ɸ������˲����鷳.\n",
   "��������:�Ҹ��е�ʯ���ȹ�,���Թ�����.\n",
   }));
   set("inquiry",([
   "����":"�͹��ں�Ժʯ��.\n",
   "��ʮ���¾�":"ǰ����ͻȻ������.\n",
   "ΤС��":"Τ��ͳô,�Ǳ����ĺ���.\n",
"ʥּ":(:ask_shenzhi:),
   ]));
   set_skill("unarmed",25);
   set_skill("parry",25);
   set_skill("dodge",25);
   setup();
   add_money("gold",1);
   carry_object("/obj/armor/male5-cloth")->wear();
 }
 void init()
 {
   object ob;
   ::init();
   if (interactive(ob=this_player())&&!is_fighting()) {
   remove_call_out("greeting");
   call_out("greeting",1,ob);
   }
}
void greeting(object ob)
{
   if (!ob||environment(ob)!=environment()) return;
 if (ob->query("gender")=="����") {
 command("say ����Ҫ��Щ�书�ߵ������ҽ�,����ӦƸ��?\n");
 return;
}
  if (ob->query("gender")=="Ů��") {
  command("say ��������,��������Ȣһ��С����!\n");
  return;
 }
  if (ob->query("gender")=="����")  {
  command("say ��λ�������ֹ��,��֪�кι���.\n");
  return;
 }
 return;
}
int ask_shenzhi()
{
object ob,obj;
ob=this_player();
obj=present("shen zhi",ob);
if (!obj&&ob->query("xxy/quest")==1)   {
command("say �ٺ٣�ʧ����ʥּ���ǿ�������һ������������������϶Ա�������\n
���أ����ǣ���Ҳ֪������ֻ�Ǹ���ͷ��ү���������������������!\n");
}
return 1;
}
int accept_object(object who,object item)
{
 if (item->query("money_id")&&item->value()>=100000)
{
who->delete("xxy/quest");
command("say ����ô����Ǯ��?�������!���˿����಻��,�����������ŵ����鷿ȥ!\n
����������飬��������һ��Ľ����ϣ�һ�������ã������!\n");
return 1;
}
command("say ���������µ�̫�࣬��Ҫ10�������ˣ������ô�㣬����?\n");
return 0;
}
