#include <ansi.h>
inherit NPC;
int ask_heal();
int do_check();
int money,wound,maxqi;
void create()
{ 
         set_name("Ҷ��ʿ",({"ye tianshi","doctor","laoban","ye"}));
         set("title","��ҽ��");
         set("shen_type",1);
         set("attitude","friendly");
         set("gender","����");
         set("age",65);
         set("str",32);
         set("per",27);
         set("combat_exp",500000);
         set_skill("dodge",120);
         set_skill("parry",120);
         set_skill("unarmed",120);
         set("inquiry",([
                   "�β�":(:ask_heal:),
                   "����":(:ask_heal:),
                   "����":(:ask_heal:),
       ]));
     setup();
         carry_object("/obj/cloth")->wear();
         add_money("gold",2);
}
int ask_heal()
{
    do_check();
    if (money>0)
    { 
    command("look "+this_player()->query("id"));
    command("say �����˲��ѣ���"+money+"��������!\n");
    return 1;
    }
    command("say �Ϸ������ģ������޲���������!\n");
    return 1;
}
int accept_object(object who,object ob)
{
   int val;
   if (ob->query("money_id"))
  {     do_check();
        val=(int)ob->value()/100;
        if (ob->value()<100) 
              {  command("say ��ЩǮ�Ϸ򻹲���������!\n");
                return 0;
               }
              if (money==0)
             {   command("say �Ϸ������ģ������޲���������!\n");
                  return 0;
             }   
        if (val<money)
          {     command("say ������Ǯ���Ҿ͸����ζ����ˣ��������ƽ����!\n");
                who->set("eff_kee",wound+val);
                message_vision(HIR+"$N����ָ����һ�����룬������$n�ļ���Ѩ������һ�飬
$n�³�һ����Ѫ�����Ƽ�����!\n"NOR,this_object(),this_player());
               return 1;
          }
        else
         {    command("say �ã��ҿ��Ϸ���ֶ�!\n");      
              message_vision(HIR+"$N����ָ����һ�����룬������$n�ļ���Ѩ������һ�飬
 $n�³�һ����Ѫ������ȫ����!\n"NOR,this_object(),this_player());
              who->set("eff_kee",maxqi);
              return 1;
          }     
  }
   command("say �Ϸ�����˺�ƭ����ô����!\n");
   return 0;
}
int do_check()
{
    wound=(int)this_player()->query("eff_kee");
    maxqi=(int)this_player()->query("max_kee");
        money=maxqi-wound;
return 1;
}

     
