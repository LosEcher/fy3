//yanyuan
#include <ansi.h>
inherit NPC;
void create()
{
	set_name("Ů��Ա", ({ "yanyuan","woman"}));
	set("gender", "Ů��");
	set("age", 18);
	set("long", "ϷԺ�����Ա\n");
	
 	set("per" ,30);
	set("combat_exp",1000);
	set("mingwang",-1);
	set("attitude", "peaceful");
	 

	set_skill("unarmed", 10);
	set_skill("dodge", 30);
	set_temp("apply/attack", 5);
	set_temp("apply/defense",30);
	setup();
	carry_object("/obj/cloth")->wear();
        add_money("silver",5); 
}
void init()
{
        object ob;
        ob = this_player();
        ::init();
        if( interactive(ob) && !is_fighting() )
               {
                        remove_call_out("greeting");
                        call_out("greeting", 1, ob);
                }
}
void greeting(object ob)
{
	if(ob->query("per")>=30 && ob->query("gender")=="����")   
	say(HIY"Ů��Ա������˵����"+ RANK_D->query_respect(ob)+"������ò���ã����������п϶��ܺ죡\n"NOR);
}


