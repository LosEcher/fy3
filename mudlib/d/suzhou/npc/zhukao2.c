inherit NPC;
#include "quest.h"
#include <localtime.h>
int give_quest(object ob);
int now_time();
void create()
{
set_name("������",({"zhukao"}));
set("age",56);
set("str",23);
set("xxy/lvl",4);
set("xxy/rank","����");
set("inquiry",([
"here":"��������ſ������뿼�ԵĻ�����ÿ���ǽ�ϵĸ�ʾ(gaoshi).\n",
"����":"��ǽ�ϵĸ�ʾ�ɡ�\n",
]));
setup();
}
void init()
{
 ::init();
 add_action("do_exam","exam");
 add_action("do_answer","answer");
}
int do_exam()
{
  object ob;
  int level;
  string rank;
  ob=this_player();
 if (!ob||environment(ob)!=environment()) return 0;
 if (ob->query_skill("literate",1)<30) return notify_fail("������ҡͷ�����������д�ֽ���Щ������.\n");
level=ob->query("xxy/lvl");
if (level)  {
       rank=ob->query("xxy/rank");
       if (level>query("xxy/lvl"))
       return notify_fail("�����پ��ȵ���"+rank+"���ˣ���Ҫ����Ц��.\n");
       if (level>1)
       return notify_fail("�����پ��ȵ���������"+rank+"������ʲô�����?\n");
        }
if (!level) return notify_fail("������ŭ��������ͯ����û���ϣ���ʲô���?\n");
if (now_time()>15) return notify_fail("������ҡͷ��:ÿ���ϰ��¿�������������!\n");
if (now_time()==ob->query("xxy/last_check")) return notify_fail("������������һ�۵�������������!\n");
 if (ob->query_temp("xxy/answer"))
 return notify_fail("������ָ����������⻹û�ش��!\n");
message_vision("$N��$n������ʩ�����������˳���!\n",ob,this_object());
 give_quest(ob);
return 1;
}
int give_quest(object ob)
{ 
 mapping quest;
 string *text,word,pass;
 int i;
 quest=exam[random(sizeof(exam))];
 text=quest["text"];
 i=random(sizeof(text));
if (random(2)==1) {
      if (i!=0) {  word=text[i-1]; pass="ǰһ��";}
      else {word=quest["author"];pass="����";}
      }
 else { if (i!=(sizeof(text)-1))  {word=text[i+1];pass="��һ��";}
        else {word=quest["title"];pass="��Ŀ";}
      }
 ob->set_temp("xxy/answer",word);
 ob->set_temp("xxy/time",time());
 command("say ["+text[i]+"... ...],����"+pass+"�ǣ�\n");
 return 1;
}
int do_answer(string arg)
{
  object ob=this_player();
  int check_time;
 if (!ob->query_temp("xxy/answer")) return notify_fail("������Ц�����ҿɻ�û���⣬���˵Щʲô?\n");
check_time=time()-(int)ob->query_temp("xxy/time");
message_vision("$N��˼���ã���������𰸿���["+arg+"]?\n",ob);
   if (check_time<300&&arg==ob->query_temp("xxy/answer")) {
   command("nod");
   command("chat ��ϲ"+ob->query("name")+"˳����ȡ��š�\n");
   ob->set("xxy/rank","���");
   ob->set("xxy/lvl",2);
   ob->delete_temp("xxy");
   ob->delete("xxy/last_check");
   return 1;}
  if (check_time>300)
          command("say ��ϧ����˼����̫���ˣ����������ɡ�\n");
  else { 
  command("shake");
  command("say ��Ҫ���ģ�����������\n");  }
  ob->delete_temp("xxy");
  ob->set("xxy/last_check",now_time());
  return 1;
}
int now_time()
{int i;
 object ob=this_player();
 mixed *local;
 local = localtime(time()*60);
 i=local[LT_MDAY] + (local[LT_HOUR]>23? 1 : 0);
 return i;
}
  
