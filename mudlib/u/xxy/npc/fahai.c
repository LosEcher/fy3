inherit NPC;
void how_old();
void create()
{
       set_name("��������",({"fahai"}));
       set("shen_type",1);
       set("gender","����");
       set("age",56);
       set("combat_exp",1600000);
       set("str",32);
       set("long","�������о���,��֪��ȥδ��,�ܶ��˼����.
       �����Ƕ����ƶ��˵���������,�ٲ�ʧһ.\n");
       set("max_kee",1200);
       set("kee",1200);
       set("max_force",2300);
       set("force",2300);
       set("force_factor",80);
       set_skill("unarmed",200);
       set_skill("parry",200);
       set_skill("dodge",200);
       set_skill("force",200);
       set_skill("literate",120);
       set_skill("hammer",200);
       setup();
       //carry_object(__DIR__"obj/zi_boyu")->wield();
       //carry_object(__DIR__"obj/hong_jiasha")->wear();
       add_money("gold",5);
}
void init()
{   
    add_action("do_answer","ask");
}
int accept_object(object ob,object obj)
{
  if (obj->value()>100){
           ob->set_temp("fahai",1);
           return 1;
           }
  else return notify_fail("�����������!\n");
}
int do_answer(string arg)
{
  object target;
  string str,str1,str2,sb,who;
  if (sscanf(arg,"%s about %s",sb,who)==2)   {
  	if (sb!="fahai")  return 0;
        if (!this_player()->query_temp("fahai"))    {
   	 tell_object(this_player(),"��Ҫ����˭����������?\n");
   	 return notify_fail("");
   }
  target=find_player(who);
  if (!target) {
  	tell_object(this_player(),"��Ҫ�������˲����ڱ�mud��!\n");
        return notify_fail("");
   }
  str=CHINESE_D->chinese_date(((int)target->query("birthday")-14*365*24*60)*60);
  str1=chinese_number(target->query("age"));
  str2=target->query("name");
  command("say "+str2+"����Ϊ"+str+",����"+str1+"��.\n");
  this_player()->delete_temp("fahai");
  return 1;
  }
 }         
  