#include <ansi.h>
inherit NPC;
int ask_jiaru();
int re_rank(object ob);
string check_player(object ob);
void create()
{
        set_name("�����", ({ "li","li chengzhou"}));
            set("gender", "����" );
        set("title","Ȩ�������");
        set("age", 25+random(10));
        set("banghui","Ȩ����");
        set("combat_exp", 600+random(400));
        set("attitude", "friendly");
        set_skill("dodge", 10);
        set_skill("unarmed", 10);
        set("inquiry",([
                  "���":(:ask_jiaru:),
                  "����":(:ask_jiaru:),
                  "jiaru":(:ask_jiaru:),
                  "join":(:ask_jiaru:),
                  "Ȩ����":"��Ȩ�����˶�����,��������!\n",
                                "rank":(:re_rank:),
        ]));
  enable_commands();
        setup();
        carry_object("/obj/cloth")->wear();
        add_money("coin", 30+random(20));
}
void init()
{
   object ob;
   ::init();
  if (interactive(ob=this_player())&&!is_fighting())      {
       remove_call_out("greeting");
       call_out("greeting",1,ob);
    }
}
void greeting(object ob)
{
   if (ob->query("banghui")!=this_object()->query("banghui"))   {
        command("say ��λ"+RANK_D->query_respect(ob)+",��������Ұ�ô?\n");
        return;
        }
  command("say "+ob->query("name")+",����,����!\n");
   re_rank(ob);
   return;
}
int ask_jiaru()
{
    object ob,me;
  me=this_object();
  ob=this_player();
if (ob->query("banghui")==me->query("banghui"))    {
   command("say ���������һ�����,��ʲô��Ц!\n");
  return 1;
        }
if (ob->query("banghui"))
     {   command("say ��������ԭ���İ����˵!\n");
         return 1;
      }   
                    command("say ����jiaru li������Ȩ����!\n");
           command("yaoqing "+ob->query("id"));
  return 1;
}
int re_rank(object me)
{ 
   string rank,old_rank;
   me=this_player();
  if (me->query("banghui")!="Ȩ����")    return notify_fail("���ֲ���Ȩ��������.\n");
   rank=check_player(me);
   old_rank=me->query("title");
   if (old_rank==RED+"Ȩ����"+NOR+rank)    {
command("say "+me->query("name")+",�����ʱ���书��û��󳤽���!\n");
        return 1;        }
   command("say ������书����,���ڰ��е���"+rank+"һְ.\n");
   command("chat �Խ�����,"+me->query("name")+"��Ȩ�����е���"+rank+"һְ.\n");
   me->set("title",RED+"Ȩ����"+NOR+rank);
   tell_object(me,"�㱻ί��ΪȨ����"+rank+".\n");
   return 1;
}
string check_player(object ob)
{
   int num;
   (int)num=ob->query("combat_exp");
   if (num<10000) return "����";
   if (num<50000) return "������";
   if (num<100000) return "����";
   if (num<200000) return "��̳��";
   if (num<300000) return "̳��";
   if (num<500000) return "������";
  if (num<800000) return "����";
  if (num<1000000) return "����";
  if (num<1200000) return "�ܻ���";
  if (num<1400000) return "��ħ";
  if (num<1600000) return "��ħ";
  if (num<1800000) return "��ħ";
  else return "��ħ";
 return;
}
