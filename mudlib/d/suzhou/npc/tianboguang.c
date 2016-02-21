// master.c

inherit NPC;
inherit F_MASTER;
int do_go();

void create()
{
	set_name("�ﲮ��",({"tian boguang","tian"}));
	set("nickname","���ݵ�һ������");
        set("gender", "����" );
	set("age",30);
        set("str", 27);
        set("cor", 30);
        set("cps", 27);
	set("mingwang",-10000);
        set("int", 24);

        set("max_force", 2500);
        set("force", 2500);
	set("force_factor",50);
	set("max_kee",2000);

	set("rank_info/rude","����");

        set("long",
                
"���������ݵ�һ�������������Ȥ�ľ���Ů���ˡ�
\nΪ�˼�����������쵶����������һ����\n");

	create_family("�쵶��",12,"����");

	set("combat_exp",1000000);
	set_skill("unarmed",100);
	set_skill("parry",100);
	set_skill("dodge",100);
	set_skill("force",100);
	set_skill("blade",200);
	set_skill("poyu-quan",100);
	set_skill("shaolin-shenfa",100);
	set_skill("hunyuan-yiqi",100);
	set_skill("kuaidao-daofa",200);
	map_skill("dodge","shaolin-shenfa");
	map_skill("unarmed","poyu-quan");
	map_skill("force","hunyuan-yiqi");
	map_skill("parry","kuaidao-daofa");
	map_skill("blade","kuaidao-daofa");
	setup();
	carry_object("/obj/std/armor/yinjia")->wear();
	carry_object("/obj/weapon/blade")->wield();
	add_money("gold",1);
}

void attempt_apprentice(object ob)
{
        command("say "+RANK_D->query_respect(ob)+"������ЩƯ�����ǣ��ҵ��ǿ��԰�����������");
}

int accept_object(object me,object ob)
{
	object book;

	if( !ob->is_character())	{
		tell_object(me,"�ﲮ��ŭ����������ˣ��ү����\n");
		return 0;
	}
	if( userp(ob))	{
		tell_object(me,"�ﲮ�⾪�����ҿɲ���������Ұ���\n");
		return 0;
	}
	if( (string)ob->query("gender")!="Ů��")	{
		tell_object(me,"�ﲮ��ŭ������үֻ�����Ǹ���Ȥ��\n");
		return 0;
	}
	if( query("have_girl")>=20)	{
		tell_object(me,"�ﲮ��̾�����⼸���Ů�����ô�ү�����ӳԲ����ˡ�������˵�ɡ�\n");
		return 0;
	}
	if( (int)ob->query_per()<20)		{
		tell_object(me,"�ﲮ����Ц���������ɫδ��̫���˰ɡ�\n");
		return 0;
	}
	if( query_temp("busy"))	{
		tell_object(me,"�ﲮ���Ц��������ô�������������ҡ�\n");
		return 0;
	}
	set_temp("busy",1);
	call_out("do_reset",5);
	if( ob->query("id")=="yi lin")		{
		tell_object(me,"�ﲮ�⾪ϲ��������ԭ��������Сʦ̫��\n");
		if( sizeof(children(__DIR__"obj/kuaidao_b"))>4)
		tell_object(me,"�����ﲮ��̾�����������ˣ��쵶����ͼ�类�ֹ��ˡ�\n");
		else	{
			tell_object(me,"�ﲮ��ӻ����ͳ����쵶����ͼ�������㡣\n");
			book=new(__DIR__"obj/kuaidao_b");
			if( !book->move(me))	{
				tell_object(me,"�ﲮ�Ⱑ�������������϶���̫�࣬�´��ٸ���ɡ�\n");
				destruct(book);
			}
		}
		call_out("do_dest",1,ob);
		return 1;
	}
	tell_object(me,"�ﲮ����Ц��������������˵�ɣ����Ź�����Ҫ�Ұ���������\n");
	me->set_temp("mark/tbg",1);
	call_out("do_dest",1,ob);
	return 1;
}

int recognize_apprentice(object ob)
{
	if( !(int)ob->query_temp("mark/tbg"))
		return notify_fail("�ﲮ����Ц�����ȸ���Ū����Ư����������˵�ɡ�\n");
	ob->delete_temp("mark/tbg");
	return 1;
}

void do_reset()
{
	delete_temp("busy");
}

void do_dest(object ob)
{
	if( objectp(ob))
		destruct(ob);
}
