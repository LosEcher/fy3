// music   yangzhou's 船老大

inherit NPC;

int yangzhou_suzhou();
int enter_boad(string);

void create()
{
	set_name("船老大",({"chuan laoda","chuan","laoda"}));
	set("gender", "男性" );
	set("age", 54);
	set("long",
		"这是位饱经风雨的船家，看上去强壮精悍。\n");
	set_temp("apply/attack",15);
	set_temp("apply/defense",15);
	set_skill("unarmed",30);
	set_skill("dodge",40);
	set("combat_exp",3000);
        set("str", 22);
        set("dex", 12);
        set("con", 12);
        set("int", 12);
	set("attitude", "peaceful");
        set("inquiry", ([
                       "chuan" : "不知您想到哪里啊? \n" ,
                       "船" : "不知您想到哪里啊? \n", 
				"yangzhou" : (:yangzhou_suzhou :),
				"扬州" : (: yangzhou_suzhou :),
                       ]) );
	setup();
        carry_object("/obj/cloth")->wear();
	add_money("coin", 50);
}

void init()
{
::init();
add_action("enter_boat","enter");
add_action("enter_boat","jin");
add_action("enter_boat","shang");
}

int enter_boat(string arg)
{
if ((arg=="boat")||(arg=="chuan")) 
 {
	if( (this_player(1)->query_temp("yz_sz"))==2)
   {
   tell_object(this_player(1),"船家说：客官坐稳喽！说着篙一点离岸而去.\n");
	 this_player(1)->move("/d/suzhou/yunhe4");
   return 1;
   } 
  else
   {
   tell_object(this_player(1),
   "船老大对你大喊道：别动我的船！\n你一惊，差点掉下水去。\n");
   return 1;
   }
 }
else tell_object(this_player(1),"你想到哪？\n");
return 1;
}

int yangzhou_suzhou()
{
say ("船老大说道：到扬州走水路，又快又安全，只要五两银子.\n");
say ("船老大奸笑了几声，说道：陆路可不好走啊，路难走还不定会遇到土匪.\n");
return 1;
}


int accept_object(object who, object ob)
{
        if ( ((int)who->query_temp("yz_sz")) !=0 )
           {
           message_vision("船老大笑笑说：客官不必再付钱了！\n", who);   
           return 1;
           }
        if (ob->query("money_id") && ob->value() >= 500) 
           {
                message_vision("船老大眼睛一眯，向$N说：客官请上船。\n", 
who);
			who->set_temp("yz_sz",2);
                return 1;
          }
        return 0;
}

