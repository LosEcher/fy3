// yapu6.c

inherit NPC;

void create()
{
	set_name("����", ({ "yapu" }) );
//	set("title", "����½��ׯ�Ҷ�");
	set("gender", "����");
	set("age", 48);
//	set_race("human");
//	set_level(20);
	set("class","taohua");

	set("long","���Ǹ���˳�����ͣ��Ƶ����������շ��Ĺ�����\n");
	set("rank_info", "����");

	set("max_gin", 500);
	set("max_kee", 500);
	set("max_sen", 500);

	set("max_atman", 500);
	set("atman", 500);
	set("max_force", 500);
	set("force", 500);
	set("max_mana", 500);
	set("mana", 500);

	set("str", 30);
	set("cor", 30);
	set("cps", 30);
	set("spi", 30);
	set("int", 30);
	set("con", 30);
	set("kar", 20);
	set("per", 30);

	set("combat_exp", 10000);
	set("score",5000);

	
      set_skill("unarmed", 40);
	set_skill("force", 30);
	set_skill("parry", 30);
	set_skill("dodge", 30);
	set_skill("sword", 30);
	
//	gain_score("mortal sin", -200);
	
	setup();
	carry_object("/obj/cloth")->wear();
}

int accept_fight(object who)
{
	message_vision("����˫�ֱȻ���ʲô������$N��û������\n",this_player());

	return 0;
}

int accept_kill(object who)
{
	message_vision("����˫�ֱȻ���ʲô����¶���࣬����Ҫɱ$N��\n",this_player());

}

void init()
{
	add_action("do_yao", "yao");
	add_action("do_list", "list");
}

int do_list(string arg)
{
	message_vision(
"$N��������ʲô�������Գ�,�����ó���������:
������(rou)���۶���(doufu)��������(zhou)�����ײ�(baicai)
\n",this_player());

	return 1;
}

int do_yao(string arg)
{
	object me;

	me=this_player();

	message_vision("$N�������ж������Գԡ�\n",me);

      if( me->over_encumbranced() ) 
	{
          write("�����Ѿ����ɹ����ˣ�û�����óԵ��� :-( \n");
	    return 1;	
	}

	switch(arg)
	{
		case "rou"  : { new(__DIR__"obj/rou")->move(me); 
				     message_vision("���͸�$Nһ�̰����⡣\n",me);
				     return 1; }	
		case "doufu" : { new(__DIR__"obj/doufu")->move(me); 
				     message_vision("���͸�$Nһ���۶�����\n",me);
				     return 1; }	
		case "zhou"  : { new(__DIR__"obj/zhou")->move(me); 
				     message_vision("���͸�$Nһ�������ࡣ\n",me);
				     return 1; }	
		case "baicai": { new(__DIR__"obj/baicai")->move(me); 
				     message_vision("���͸�$Nһ�����ײˡ�\n",me);
				     return 1; }	
		default:{ message_vision("����˫��һ�ʣ������˵$NҪ�Ķ�����û�С�\n",this_player()); 
			    return 1; }	

	}
}
