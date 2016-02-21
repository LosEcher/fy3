#include <ansi.h>
inherit NPC;
#include "/d/huanggon/quest/who.h"
void create()
{
    set_name(HIY"�����ʵ�"NOR,({"kang xi"}));
    set("gender","����");
    set("age",18);
    set("combat_exp",2000);

    setup();
carry_object(__DIR__"obj/longpao")->wear();
}
void init()
{
  ::init();
  add_action("give_quest","require");
  add_action("do_jiaozhi","jiaozhi");
}
int do_jiaozhi()
{
  object ob,obj;
  int gold;
  ob=this_player();
  obj=present("shen zhi",ob);
  message_vision("$N������:��"+ob->query("name")+"ǰ����ּ��\n",ob);
  if (!obj)  {
  	command("say �󵨵�"+ob->query("name")+",���ʥּ�أ��ҿ����ǲ������!\n");
  	return 1;
       }
  if (ob->query("xxy/quest")) {
  	command("say "+ob->query("name")+",�����˲�ʹ������ȥ��!\n");
  	return 1;
      }
 command("say "+ob->query("name")+",�����Ĳ������мν�!\n");
 gold=2+random(5);
 tell_object(ob,"��õ���"+gold+"���ƽ��10������.\n");
 clone_object("/obj/money/gold.c",gold)->move(ob);
 destruct(obj);
 if (!ob->query("xxy/xinlai")) {
 	 ob->set("xxy/xinlai",10);
 	 return 1;
 	}
 ob->add("xxy/xinlai",10);
 return 1;
 }
int give_quest(string arg)
{
  object ob,room,shenzhi;
  mapping *whom,temp;
  string str,*whats;
  int num;
  ob=this_player();
  if (!arg||!sscanf(arg,"%d",num)) return notify_fail("��Ҫ������������?\n");
  if (num>9||num<1) return notify_fail("��ѡ��1..9֮һ.\n");
  message_vision("$N��ǰһ����:��Ը���������"+num+",�����׼��!\n",ob);
  if (ob->query("xxy/quest"))  {
  	command("say "+ob->query("name")+",��ô�,������񣬻���ȥ��!\n");
  	return 1;
  	}
  room=load_object("/d/huanggon/qianqingon.c");
  shenzhi=present("shen zhi",ob);
  if (shenzhi)   {
  	command("say "+ob->query("name")+"���䣬�㻹��ʥּû����?\n");
  	return 1;
   }
  shenzhi=new("/d/huanggon/quest/shenzhi.c");
  whom=room->query("huangbang");
  if (!whom) {
  	command("say "+ob->query("name")+",����ȥ��ϸ�����ư�(huang bang),û����!\n");
  	return 1;
       }
   temp=whom[num-1];
   whats=room->query("what");
  shenzhi->set("who1/name",temp["name"]);
  shenzhi->set("who1/id",temp["id"]);
  str=HIY"************************************************\n";
  str+="               ʥּ\n";
  str+="    ����Ǭ�����ʵ�گԻ:\n";
  str+="����"+ob->query("xxy/rank")+ob->query("name");
  str+="��"+temp["name"]+"("+temp["id"]+")ѯ��"+whats[num-1]+"һ��.\n";
  str+="        "+NATURE_D->game_time()+"\n";
  shenzhi->set("long",str+"          �մ�!\n"NOR);
  temp=who[random(sizeof(who))];
  shenzhi->set("who2/name",temp["name"]);
  shenzhi->set("who2/id",temp["id"]);
  shenzhi->set("what",whats[num-1]);
  message_vision("$N���˵�ͷ��һ�Ե�С̫���һ��ʥּ�ݸ�$n.\n",this_object(),ob);
  shenzhi->move(ob);
  ob->set("xxy/quest",1);
  return 1;
  }