inherit NPC;
#include <ansi.h>
string ask_hunyin();
void create()
{
   set_name("��ý��",({"meipo"}));
   set("age",65);
   set("gender","Ů��");
   set("mingwang",200);
   set("nickname",RED"��Ե�춨"NOR);
   set_skill("unarmed",40);
   set("inquiry",([
"���ܶ���":(:ask_hunyin:),
]));
   set("chat_chance",5);
   set("chat_msg",({
HIC"Ը�����������ճɾ���,��ǰ��ע����Ī�����Ե.\n"NOR,
(:random_move:),
  }));
   setup();
   carry_object("/obj/cloth")->wear();
}
void init()
{
  object ob;
  ::init();
  if (interactive(ob=this_player())&&!is_fighting()) {
  	remove_call_out("greeting");
  	call_out("greeting",1,ob);
   }
 add_action("do_agree","agree");
}
void greeting(object ob)
{
   if (!ob||environment(ob)!=environment()) return;
  if (ob->query("age")>16&&!ob->query("marry"))   {
    if (ob->query("gender")=="����")  {
  message_vision("$N��$nҡͷ̾��:��ϧ�Ǹ�̫��,��ȻҲ��Ȣϱ����ʱ����.\n",this_object(),ob);
  return;    }
  message_vision("$N��$n����ǰ��:�ÿ��ε��˶�,��Ҫ�����Ӹ���"+YEL+"���ܶ���"+NOR+"?\n",this_object(),ob);
  return;
}
  if (ob->query("gender")=="����")
 message_vision("$N��$nҡͷ̾��:��ϧ,��ϧ,�㽫�ںڰ���ʹ��һ��.\n",this_object(),ob);
 return;
}
string ask_hunyin()
{
    object *list=users();
    object ob=this_player();
    string who,gender=ob->query("gender");
    int i;
  if (gender=="����")  
    return "���̫�໹���Ҷ�����ô?";
  if (ob->query("marry")) return "�㶼�ǽ��˻������,����ʲô����?";
  if (ob->query("age")<16) return "��ôС�����Ҷ�����,����.\n",
  i=0;
  while (i<sizeof(list))  {
  if (list[i]->query("gender")==gender||list[i]->query("gender")=="����"
  ||list[i]->query("age")<16||list[i]->query("marry"))
   i++;
  else {
 who=list[i]->query("id");
 ob->set_temp("mameipo/who",who);
 return "����"+list[i]->query("name")+"���������,���������?(agree)\n";
   }
}
return "������ʱû�������������.";
}
int do_agree()
{
  object who,ob=this_player();
 if (!ob->query_temp("mameipo/who"))  {
 tell_object(ob,"��ý�Ŷ����:�����������Ӹ���"+YEL+"���ܶ���"+NOR+"ô?\n");
 return 1;
  }
 tell_object(ob,HIC"��ý�Ŷ����:�����,�����Ӿ͸��������¶����Է�˵˵.\n"NOR);
 who=find_player(ob->query_temp("mameipo/who"));
 if (!who)    {
 tell_object(ob,HIC"��ý�Ŷ����:��ϧ,�����������Ҳ������������.\n"NOR);
 return 1;   }
 tell_object(who,ob->query("name")+"����ý�Ÿ���������"+RED"��õ��"NOR+".\n");
 command("tell "+ob->query_temp("mameipo/who")+" "+ob->query("name")+"���������˼,�������Ӹ���˵˵.\n");
 new(__DIR__"obj/hua.c")->move(who);
 tell_object(ob,HIC"��ý�Ŷ����:�����Ӱ������˼ת����,�����ȥ��.\n"NOR);
 ob->delete_temp("mameipo/who");
 return 1;
}