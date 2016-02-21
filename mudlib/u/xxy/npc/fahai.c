inherit NPC;
void how_old();
void create()
{
       set_name("法海和尚",({"fahai"}));
       set("shen_type",1);
       set("gender","男性");
       set("age",56);
       set("combat_exp",1600000);
       set("str",32);
       set("long","法海修行精深,善知过去未来,能断人间祸福.
       尤其是对于推断人的生辰八字,百不失一.\n");
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
  else return notify_fail("法海不理睬你!\n");
}
int do_answer(string arg)
{
  object target;
  string str,str1,str2,sb,who;
  if (sscanf(arg,"%s about %s",sb,who)==2)   {
  	if (sb!="fahai")  return 0;
        if (!this_player()->query_temp("fahai"))    {
   	 tell_object(this_player(),"你要打听谁的生辰八字?\n");
   	 return notify_fail("");
   }
  target=find_player(who);
  if (!target) {
  	tell_object(this_player(),"你要打听的人并不在本mud中!\n");
        return notify_fail("");
   }
  str=CHINESE_D->chinese_date(((int)target->query("birthday")-14*365*24*60)*60);
  str1=chinese_number(target->query("age"));
  str2=target->query("name");
  command("say "+str2+"生辰为"+str+",今年"+str1+"岁.\n");
  this_player()->delete_temp("fahai");
  return 1;
  }
 }         
  