// guard.c

#include <ansi.h>

inherit NPC;
int do_catch(object ob);

void create()
{
	set_name("Ѳ��",({"xun bu","xun","bu"}));

	set("nickname","ǧ��׷��");
	set("title","���ݸ�");
	set("gender", "����" );
	set("age",25);
	set("long",
	"Ӣ��������ò���˰�������û��ǲ�Ҫ��������\n"
	);
	set("pursuer",1);
	set("attitude", "heroism");
	set("chat_chance",40);
        set("chat_msg", ({
			"Ѳ���������ͳ�Ҫ����������ϸ�ĺ���Ƚϡ�\n",
			"Ѳ��С���ֹ��ţ�����ͷֻҪ�����ӣ�ɶ�²��ð죿\n",
                (: random_move :),
        }) );
	set("inquiry", ([
	"ͨ��" : "ȥ�Ұ��������ʿ��ɡ�\n",
	"tong" : "ȥ�Ұ��������ʿ��ɡ�\n",
	]) );


	setup();
	carry_object("obj/weapon/sword");
}

void init()
{
	object ob;
	ob=this_player();
        ::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
			call_out("greeting",1,ob);
}
	add_action("do_kill","kill");
	add_action("do_kill","hit");
	add_action("do_steal","steal");
}
int do_steal()
{
	object me;
	me=this_player();
	message_vision(CYN"Ѳ�����ߡ�����Цһ������Ȼ���˸�������ǰ�ɴ�͵���������£�\n"NOR,me);
	tell_object(me,"��ֻ��ͷƤ���飬��æ�������˻�����\n");
	return 1;
}
int do_kill(string str)
{
	object ob,npc;
	ob=this_player();
	npc=present(str,environment());
	if(npc==this_object())	{
message_vision(CYN"Ѳ������$N��̾һ��������������˽����ϵĶ���ԹԹ��������ˡ�\n"NOR,ob);
	return 1;
			}
	return 0;
}
int do_catch(object ob)
{
	string str;
	switch(ob->query("oldsix_flag/long"))	{
		case 1 :	{
	str="/d/suzhou/dalao3.c";
	break;
				}
		case 2 :	{
	str="/d/suzhou/dalao2.c";
	break;
				}
		case 3 :	{
	str="/d/suzhou/dalao1.c";
	break;
				}
				}
	ob->set("oldsix_flag/tongji",0);
	ob->set("oldsix_flag/lao",1);
	ob->set("oldsix_flag/time",ob->query("mud_age"));
	ob->set("startroom",str);
	ob->apply_condition("lao_cancle");
	ob->set_temp("block_msg/all",1);
	ob->move(str);
	ob->set_temp("block_msg/all",0);
	command("rumor "+ob->query("name")+"��׽�ù鰸��");
	ob->set("sen",-1);
}
void greeting(object ob)
{
         if( !ob || environment(ob) != environment() ) return;
	if(ob->query("oldsix_flag/tongji")==1)
			{
	message_vision(RED"\nѲ������$Nŭ��һ����"+ob->query("name")+"�������ܣ������һ�ȥ���٣���\n"NOR,ob);
	message_vision(RED"\n˵�գ�Ѳ���ͳ�����������$N��ͷ����������������\n\n"NOR,ob);
	do_catch(ob);
	return;
			}
	(: random_move() :);
}
int accept_fight(object who)
{
	message_vision(CYN"Ѳ������$N��̾һ��������������˽����ϵĶ���ԹԹ��������ˡ�\n"NOR,who);
return 0;
}
