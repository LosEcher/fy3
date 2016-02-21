// chuanfu1.c
// 97.7.13  by Aug

#include "thd.h"
inherit NPC;

void create()
{
	set_name("����", ({ "chuan fu" }) );
//	set("title", "����½��ׯ�Ҷ�");
	set("gender", "����");
	set("age", 45);
//	set_race("human");
//	set_level(12);
	set("class","taohua");

	set("long","���Ǹ���˳���ưʹ���\n");
	set("rank_info", "����");

	set("max_gin", 500);
	set("max_kee", 500);
	set("max_sen", 500);

	set("max_atman", 600);
	set("atman", 600);
	set("max_force", 600);
	set("force", 600);
	set("max_mana", 600);
	set("mana", 600);

	set("str", 30);
	set("cor", 30);
	set("cps", 30);
	set("spi", 30);
	set("int", 30);
	set("con", 30);
	set("kar", 20);
	set("per", 30);

	set("combat_exp", 50000);
	set("score",10000);
	
      set_skill("unarmed", 20);
	set_skill("force", 13);
	set_skill("parry", 13);
	set_skill("dodge", 13);
	set_skill("sword", 13);
	
//	gain_score("mortal sin", -100);
	
	setup();
	carry_object("/obj/cloth")->wear();
}

int accept_fight(object who)
{
//	do_chat("�Ҷ�˵���������������顣\n");
	return 0;
}

int accept_kill(object who)
{
//	do_chat("�Ҷ��е�����������ı����ˣ�����½��ׯɱ�ˣ�\n");
}


void init()
{
    add_action("do_ask", "ask");
}

void on_board()
{
	object * all,ob,room;
	int i,j;

	ob=this_object();
	i=0;
	all = all_inventory(environment(ob));
	        
	for (j=0; j<sizeof(all); j++) 
	{
		if( all[j]==this_object() ||!all[j]->is_character()) continue;
		{ i=1; }
	}
	
      room = load_object(NOWDIR+"duchuan1");
	room->delete("exits/out");
      room = load_object(NOWDIR+"dukou_thd");
	room->delete("exits/enter");

	if(i==1)
	{
		message("vision", "�����̤�Ű�����������������������������ӿ�Ĵ���ʻȥ��\n",room );	
		message_vision("�����̤�Ű�����������������������������ӿ�Ĵ���ʻȥ��\n",this_object());	

		if( clonep(this_object()) ) call_out("arrive", 20, 1);
	}
	else
	{
		this_object()->move(NOWDIR+"dukou_thd");
	}	
}

void arrive()
{
	object *all,ob,room;
	int i;

	room = load_object(NOWDIR+"dukou_jx");
      message_vision("�����һ��̤�Ű���ϵ̰���˫��һָ��˼��Ŀ�ĵص��ˡ�\n",this_object());
      message("vision", "����ҡ��һ��С����С��������ͣ���˸۱ߡ������һ��̤�Ű���ϵ̰���\n",room);

	ob=this_object();
	all = all_inventory(environment(ob));	        
	for (i=0; i<sizeof(all); i++) 
	{
		if( all[i]==this_object() ||!all[i]->is_character()) continue;
		{
			message_vision("$N˳��̤�Ű����ϰ�ȥ��\n",all[i]);
			message("vision",all[i]->name()+"˳��̤�Ű����ϰ�����\n",room);

			all[i]->move(NOWDIR+"dukou_jx");
		}
	}


      message("vision", "��������̤�Ű壬�����İ�С��ʻ��󺣡�\n",room);

	this_object()->move(NOWDIR+"dukou_thd");
}

int do_ask(string arg)
{
	object me,room;

	me=this_player();	
	
      if((arg!="chuan fu about out")&&(arg!="chuan fu about ��ȥ"))
	{
		message_vision("��������¶����ã����ɫ��˫�ֱȻ���ʲô����Ȼ��֪��$N��˵ʲô��\n",me);		
		return 1;
	}

	message_vision("����첽����ͣ�ڸ��е�һ��С������һ����ͰѴ�ҡ��$N��ǰ��\n",me);

	load_object(NOWDIR+"dukou_thd")->set("exits/enter", NOWDIR+"duchuan1");
	this_object()->move(NOWDIR+"duchuan1");
	load_object(NOWDIR+"duchuan1")->set("exits/out", NOWDIR+"dukou_thd");

	if( clonep(this_object()) ) call_out("on_board", 10, 1);

      return 1;
}


 