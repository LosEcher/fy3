// yapu7.c

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

	set("long","���Ǹ���˳�����ͣ��Ƶ�������������������¯��\n");
	set("rank_info", "����");

	set("max_gin", 800);
	set("max_kee", 800);
	set("max_sen", 800);

	set("max_atman", 1000);
	set("atman", 1000);
	set("max_force", 1000);
	set("force", 1000);
	set("max_mana", 1000);
	set("mana", 1000);

	set("str", 30);
	set("cor", 30);
	set("cps", 30);
	set("spi", 30);
	set("int", 30);
	set("con", 30);
	set("kar", 20);
	set("per", 30);

	set("combat_exp", 100000);
	set("score",50000);
	
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

/*
void init()
{
	add_action("do_give", "give");
	add_action("do_halt", "halt");
	add_action("do_mingsi", "mingsi");
}

int do_give(string arg)
{
	object me;
	int i;

	me=this_player();
	if((arg!="hua to yapu")&&(arg!="yapu hua"))
	{
		message_vision("��������¶����ã����ɫ��˫�ֱȻ���ʲô����Ȼ��֪��$N��˵ʲô��\n",me);		
		return 1;		
	}

	if(me->query_skill("medicine")<20)
	{
		message_vision("����˫�ֱȻ���ʲô�������˵$N$ˮƽ̫��������ƾŻ���¶�衣\n",me);		
		return 1;			
	}

	if(me->query_temp("busying")==1)
	{
		message_vision("$N$�����������ƾŻ���¶����\n",me);		
		return 1;			
	}


	i=0;
	if(!objectp(present("juhua", me))) i=1;
	if(!objectp(present("lanhua", me))) i=1;
	if(!objectp(present("lianhua", me))) i=1;
	if(!objectp(present("toahua", me))) i=1;
	if(!objectp(present("mudan", me))) i=1;
	if(!objectp(present("danding hong", me))) i=1;
	if(!objectp(present("jinshe lan", me))) i=1;
	if(!objectp(present("qing mantuo", me))) i=1;
	if(!objectp(present("lingzhi lan", me))) i=1;

	if(i==1)
	{
		message_vision("����˫�ֱȻ���ʲô�������˵$N$ҩ�Ĳ��룬�������ƾŻ���¶�衣\n",me);		
		return 1;			
	}

	destruct(present("juhua", me));
	destruct(present("lanhua", me));
	destruct(present("lianhua", me));
	destruct(present("toahua", me));
	destruct(present("mudan", me));
	destruct(present("danding hong", me));
	destruct(present("jinshe lan", me));
	destruct(present("qing mantuo", me));
	destruct(present("lingzhi lan", me));

	message_vision("���ͽӹ�$N$�Ļ�����������¯��$N$��ʼ���ƾŻ���¶�衣\n",me);		
	
	me->set_temp("busying")=1;

	i=me->query_skill("medicine");
	i=i+random(i*0.5);	
	i=(int)10000/i;

	if( clonep(this_object()) ) call_out("finish", i, 1);

	return 1; 
			
}

void finish();
{

	object me;

	me=this_player();
	me->delete_temp("busying");

}

int do_halt(string arg)
{

	if((arg!="")||(this_player()->query_temp(busying")!=1)) return 0;

	me->delete_temp("busying");
	remove_call_out("finish");

	message_vision("$N$�����������ƾŻ���¶�衣\n",this_player());			

	return 1;

}

int do_mingsi(string arg)
{

	if(this_player()->query_temp(busying")!=1	) return 0;

	write(
"������ר�����ƾŻ���¶�裬��ô��ڤ˼�أ�
��һ��Ҫڤ˼��Ҫ����(halt)���ƾŻ���¶�衣\n");		

	return 1;

}
*/
