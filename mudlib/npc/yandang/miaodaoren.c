#include <ansi.h>
inherit KZZNPC;
void create()
{
	mapping data;
	data=get_npc_data();
	set_npc_data(data,1);
        setup();
      add_money("gold",1);
      carry_object("/obj/cloth")->wear();
}
void init()
{	
	object ob;

	::init();
	if( interactive(ob = this_player()) && !is_fighting() ) {
		remove_call_out("greeting");
		call_out("greeting", 1, ob);
	}
}
void greeting(object ob)
{

	if( !ob || environment(ob) != environment() ) return;
	switch( random(2) ) {
		case 0:
	command("say ���оƽ���,�Ĺ����������!\n");
			break;
		case 1:
	command("say �þ���,�þ���,�һ�Ҫ��!\n");
			break;
                           }
}
