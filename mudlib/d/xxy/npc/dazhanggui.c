#include <ansi.h>
inherit NPC;
string *level=({"��","��","��","��"});
string *card=({"��","ͭ","��","��"});
void create()
{
    set_name("������",({"guyue qiu","dazhang gui"}));
    set("age",45);
    set("title","[���ƹ�]");
    set("combat_exp",34444);
    set_skill("unarmed",20);
    setup();
}
void init()
{
   object ob;
    ::init();
   if (interactive(ob=this_player())&&!is_fighting())    {
           remove_call_out("greeting");
           call_out("greeting",1,ob);
         }
 }
void greeting(object ob)
{   
      object ob1;
      string str,str1,str2;
      int number;
                 number=ob->query_temp("fight/card");                          
      if (number&&number>0)
           {  
              command("say ��ϲ��λ"+RANK_D->query_respect(ob)+"�����["+level[number-1]+"]���ƺ�!\n");
              ob1=new("/d/xxy/obj/pai"+number);
               str="һö"+card[number-1]+"��,�������\n";
               str+="["+HIR+level[number-1]+NOR+"]����ʿ---"+ob->short();;
           ob1->set("long",str);
           ob1->move(ob);
           ob->delete_temp("fight/card");
     message_vision("$N�ݸ�$nһ��"+card[number-1]+"��",this_object(),ob);
    }     
return;
}
