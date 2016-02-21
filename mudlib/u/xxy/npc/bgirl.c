inherit NPC;
int about_tea();
int give_tea();
void create()
{
     set_name("�����",({"girl","guniang"}));
     set("gender","Ů��");
   set("age",18);
    set("shen_type",1);
     set("combat_exp",200000);
     set("str",24);
     set("per",32);
     set_skill("unarmed",70);
     set_skill("parry",70);
     set_skill("dodge",70);
     set("inquiry",([
            "�Ȳ�":(:about_tea:),
            "��":(:about_tea:),
            "tea":(:about_tea:),
      ]));
     setup();
     carry_object("/obj/cloth")->wear();
     add_money("silver",20);
}
void init()
{   object ob;
     ::init();
     if (interactive(ob=this_player())&&!is_fighting()) 
        {   remove_call_out("greeting");
                     call_out("greeting",1,ob);
                }
}
void greeting(object ob)
{  if(!ob||environment(ob)!=environment()) return;
  command("say ��λ"+RANK_D->query_respect(ob)+"����������!\n");
  return;
}
int about_tea()
{  
   command("say С���������Զ��������ֻҪһ������!\n");
   return 1;
}
int accept_object(object who,object ob)
{
    if (ob->query("money_id"))
      {   if (ob->value()!=100)
            {  command("say С�꿪�Ų���,��С�������͹���������Ϊ����!\n");
               return 0;
            }
          else
         command("say �͹��Եȣ������ȥ�����Ѳ����!");
         give_tea();
           return 1;
     }
   command("say С�겻��Ѻ�������͹ټ���!\n");
     return 0;
}
int give_tea()
{   clone_object(__DIR__"obj/tea")->move(this_object());
    command("give tea to "+this_player()->query("id"));
    command("say �͹�������.\n");
    return 1;
}
 