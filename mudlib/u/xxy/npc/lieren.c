inherit NPC;
int do_answer();
int i=1;
void create()
{
   set_name("����",({"lie ren"}));
   set("gender","����");
   set("age",45);
   set("combat_exp",4000);
   set_skill("unarmed",30);
   set_skill("parry",30);
   set_skill("dodge",30);
   set("inquiry",([
   "ddd":(:do_answer:),
   ]));
   setup();
 }
int do_answer()
{
 object ob;
 ob=this_player();
 int time;
 time=time();
 command("say time is "+time+"\n");
 i++;	
 if (i<20)  
    call_out("do_answer",1,ob);
    return 1;
}