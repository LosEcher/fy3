// huang_yaoshi.c
// 97.9.15 by Aug

inherit NPC;
inherit F_MASTER;

void autorecover();

void create()
{
	set_name("��ҩʦ", ({ "huang yaoshi","huang" }) );
	set("title", "�һ�������");
	set("nickname","��а");	
	set("gender", "����");
	set("age", 61);
//	set_race("human");
	set("class","taohua");

	set("long","��ҩʦ�Ǹ��������ݣ�������ˬ���������٣���Ȼ��������ˡ�\n");
	set("rank_info/respect", "�һ�������");

	set("max_gin", 3000);
	set("max_kee", 5000);
	set("max_sen", 3000);

	set("max_atman", 3000);
	set("atman", 3000);
	set("max_force", 10000);
	set("force", 10000);
	set("max_mana", 3000);
	set("mana", 3000);

	set("str", 35);
	set("cor", 35);
	set("cps", 35);
	set("spi", 35);
	set("int", 35);
	set("con", 35);
	set("kar", 50);
	set("per", 35);

	set("combat_exp", 1000000);
	set("score",100000);

	set_skill("force", 200);
	set_skill("parry", 200);
	set_skill("dodge", 200);
	set_skill("sword", 200);
      set_skill("literate", 200);
	set_skill("unarmed", 200);

	set("chat_chance_combat", 15);
	set("chat_msg_combat", ({
		(: perform_action,"unarmed.tanzhi" :),
	}) );

/*	set("chat_chance", 30);
      set("chat_msg",  ({
		(: autorecover :) ,
	}) );*/

//	set_temp("apply/attack", 100);
//	set_temp("apply/defense", 100);
//	set_temp("apply/armor", 100);
//	set_temp("apply/damage", 100);

      set_skill("suiyu-force",200);
      set_skill("luoying-sword",200);
      set_skill("luoying-strike",200);
      set_skill("bagua-steps",200);
      set_skill("lanhua-finger",200);
//      set_skill("medicine",200);
	
	map_skill("dodge",  "bagua-steps");
	map_skill("unarmed","lanhua-finger");
	map_skill("parry",  "luoying-sword");
	map_skill("force",  "suiyu-force");
      map_skill("sword",  "luoying-sword");
	
	create_family("�һ���", 1,"����");

//	set("family/family_name","�һ���");
//	set("family/generation",1);
//	set("family/title","������");
//	set("family/priv",-1);
	setup();

	add_money("gold", 10);
	carry_object(__DIR__"obj/changshan")->wear();
	carry_object(__DIR__"obj/baiyuxiao")->wield();
}

void autorecover()
{
	object me;
	int i;

	command("say test!");

	me=this_object();
	
	if (!me->is_fighting())
	{
		for(i=0;(me->query("eff_kee")<me->query("max_kee"));i=i)
		{
			command("yun heal");
			command("say heal");			
		}
	}
	else
	{		
		if(me->query("kee")<me->query("eff_kee"))
		{
			command("yun recover");
			command("say heal");
		}
	}
}

int accept_fight(object ob)
{
	command("say �����Ǿ�������һ����");
	return 1;
}

int accept_kill(object ob)
{
	command("say ��Ҫ����ô��");
	return 1;
}

void attempt_apprentice(object me)
{
	object ob;
	int i;

      ob = present("letter", me);
	if(objectp(ob)) 
	{
		destruct(ob);

		message_vision(
"�Ƶ����ӹ�$N���ϵ��Ƽ��š�
���˵�˵��$N���ҹ���ׯ��������ӣ�ϣ�������ٽ��������ﱾ����ѧ��\n",me);		

/*		me->set("combat_exp",me->query("combat_exp")+20000);

		i=1+me->query_skill("force",1)*1.2;
		me->set_skill("force",i);
		i=1+me->query_skill("parry",1)*1.2;
		me->set_skill("parry",i);
		i=1+me->query_skill("dodge",1)*1.2;
		me->set_skill("dodge",i);
		i=1+me->query_skill("suiyu-force",1)*1.2;
		me->set_skill("suiyu-force",i);
		i=1+me->query_skill("bagua-steps",1)*1.2;
		me->set_skill("bagua-steps",i); */
	}
	else
	{
		message_vision(
"�Ƶ�������$N���˵�˵��$N�����������ܽ���������ǲ��ɶ�õ��˲Ű���\n"
,me);			
		
/*		me->set("combat_exp",me->query("combat_exp")+50000);
		
		i=1+me->query_skill("force",1)*1.6;
		me->set_skill("force",i);
		i=1+me->query_skill("parry",1)*1.6;
		me->set_skill("parry",i);
		i=1+me->query_skill("dodge",1)*1.6;
		me->set_skill("dodge",i);
		i=1+me->query_skill("suiyu-force",1)*1.6;
		me->set_skill("suiyu-force",i);
		i=1+me->query_skill("bagua-steps",1)*1.6;
		me->set_skill("bagua-steps",i); */
	}

	message_vision("$N�Ǻ�Ц�����Ҿ�����$n����ͽ�ܰɣ�\n", this_object(),me);

	command("recruit " + me->query("id") );

	command("chat* haha");
	command("chat û�뵽�Ϸ������ĺ֮���ֵ�"+me->name()+"�����Ŀ���֮�š�");
}

void recruit_apprentice(object me)
{
	if( ::recruit_apprentice(me) )
		me->set("class1", "taohua");
}


