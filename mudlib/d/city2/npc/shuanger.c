// shuanger.c
#include <ansi.h>

inherit NPC;
int ask_go();
int ask_kiss();

void create()
{
	set_name("˫��", ({ "shuang er", "shuang","er"}));
	set("title", HIW "������˫" NOR);
	set("nickname", HIM "�󹦸��" NOR);
	set("gender", "Ů��");
	set("age", 15);
	set("attitude", "peaceful");
	set("shen_type", 1);
	set("str", 15);
	set("int", 25);
	set("con", 25);
	set("dex", 30);
	
	set("max_kee", 500);
	set("max_gin", 200);
	set("force", 500);
	set("max_force", 500);
	set("force_factor", 50);
	set("combat_exp", 50000+random(10000));
	set("score", 20000);

	set_skill("force", 80);
	set_skill("dodge", 80);
	set_skill("unarmed", 80);
	set_skill("sword", 80);
	set_skill("taiji-jian", 70);
	set_skill("taiji-quan", 70);
	set_skill("tiyunzong",50);
	map_skill("dodge", "tiyunzong");
	map_skill("parry", "taiji-jian");
	map_skill("sword", "taiji-jian");
	map_skill("unarmed", "taiji-quan");

	set_temp("apply/attack", 15);
	set_temp("apply/attack", 15);
	set_temp("apply/damage", 15);
	 set("inquiry", ([
	     "��Ը��Ը�������" : (: ask_go :),
	     "�󹦸��" :  (: ask_kiss :),
	]));
	setup();
carry_object("/obj/weapon/sword")->wield();
carry_object("/obj/cloth")->wear();

}


int init()
{
	add_action("do_attack","attack");
	add_action("do_stop","stop");
	add_action("do_send","sendto");
	add_action("do_sha","sha");
}

int ask_kiss()
{
	object me;
	string new_name,new_id,host_id;
	me=this_player();
	if(query("id")!="shuang er")
	{
		sscanf(query("id"),"%s's shuang er",host_id);
		if(me->query("id")==host_id)
		{
			if(random(10)<1)	          
			{
				say(query("name")+"�����ߵ�ͨ��,����ͷ��,�����ĵ��˵�ͷ.\n");
//				add("combat_exp",2000);
			}
			else 
			say(query("name")+"����һ��,һ����������ȥ,˵:����,��Ҫ.\n");
			return 1;
		}
	}
	say(query("name")+"˵��:��,�Ҳ���.");
	return 1;
}

int ask_go()
{
	object me;
	string new_name,new_id,host_id;
	me=this_player();
	if(query("id")!="shuang er")
	{
		sscanf(query("id"),"%s's shuang er",host_id);
		if(query("id")==host_id)
		{
			say(query("name")+"�����۾����˿�"+
				me->query("name")+"��˵:��ȻԸ����,�Ҷ�����ġ�\n");
			return 1;
		}
		if(me->query("id")!=host_id)
		{
			say(query("name")+"�����۾����˿�"+
				me->query("name")+"��˵:���е�,�ҵ��������˵ġ�\n");
			return 1;
           	}
	}
	if ((int)this_player()->query("weiwang")>=70)
	{
		write( HIY "˫����:���˴��Ҷ�����ɽ,���˶���ׯ�����д����\n" NOR);
		write( HIY "����Ҫ�ҷ�������,��һ�����ġ�\n" NOR);
		command("nod");	
		set_leader(me);
		new_name = me->query("name")+"��Ѿ��˫��";
		new_id=me->query("id")+"'s shuang er";
		set("name",new_name);
		set("id",new_id);
		write( "����ָ��:\nattack sb ����ĳ��.\nsha sb ɱ��ĳ��.\nstop ֹͣս��.\nsendto sb.--��˫���͸�sb.\n");
		set("long","����"+new_name+"��\n"
		"����һ��ʮ���������Ů,��Լʮ���������;\n"
		"һ��ѩ�׵�����,ü����С,Ц���绨,��Ц�����ؿ����㡣\n");
	}
	else say(query("name")+"�����۾�����"+
		me->query("name")+"��˵:���е�,����û��ͬ�⡣\n");
	return 1;
}

int do_attack(string arg)
{
	object ob; 
	string host_id;
	object me=this_player();
	if(query("id")=="shuang er")
	{
		say("����Ȩʹ�ô����\n");
		return 0;
	}
	sscanf(query("id"),"%s's shuang er",host_id);
	if(me->query("id")!=host_id) return notify_fail("˫�������������㣡\n");
	if(!arg||!objectp(ob=present(arg,environment(me))))
		return notify_fail("˫��ɵɵ�������㣬�����������˼��\n");
	if(!living(ob)) 
		return notify_fail("˫��˵:"
			+ob->query("name")+"�Ѿ��������㻹Ҫ...??!!\n");
	if(ob->query("age")< 16 ) 
		return notify_fail("˫��˵:"
			+ob->query("name")+"���Ǹ�С����, ���˰�...!!\n");
	if(!environment(ob)->query("no_fight"))
	{
		message_vision("˫��������$N��ͷ��: ��,�õ�..\n",me);
		fight_ob(ob);
	}
	return 1;
}

int do_stop()
{
	string host_id;
	object me=this_player();
	if(query("id")=="shuang er") return notify_fail("����Ȩʹ�ô����\n");
	sscanf(query("id"),"%s's shuang er",host_id);
	if(me->query("id")!=host_id) return notify_fail("˫�������������㣡\n");
	if(!is_fighting()) return notify_fail("˫������û���˴�..\n");
	command("halt");
	message_vision("˫��������$N΢΢һЦ��\n",me);
	return 1;
}

int do_send(string arg)
{
	object ob; string host_id,new_name,new_id;
	object me=this_player();
	if(query("id")=="shuang er") return notify_fail("����Ȩʹ�ô����\n");
	sscanf(query("id"),"%s's shuang er",host_id);
	if(me->query("id")!=host_id) return notify_fail("˫�������������㣡\n");
	if(!arg||!objectp(ob=present(arg,environment(me))))
		return notify_fail("��Ҫ��˫���͸�˭��\n");
	if(!living(ob)) 
		return notify_fail("��ֻ�ܰ�˫��������!\n");
message_vision("˫��������������������$N��˵:\n���˴��Һ�,��������;���˴��Ҳ���,�����������.\n",me);
	set_leader(ob);
	new_name = ob->query("name")+"��Ѿ��˫��";
	set("long","����"+new_name+"��\n"
		"����һ��ʮ���������Ů,��Լʮ���������;\n"
		"һ��ѩ�׵�����,ü����С,ȴ���Ǹ������۸�,���������ؿ����㡣\n");
	new_id=ob->query("id")+"'s shuang er";
	set("name",new_name);
	set("id",new_id);
	write( HIY "˫����������"+ob->query("name")+"����������ӯӯһ�ݡ�\n" NOR);
	message_vision("����ָ��:\nattack sb ����ĳ��.\nsha sb ɱ��ĳ��.\nstop ֹͣս��.\nsendto sb.--��˫���͸�sb.\n",me);
	return 1;
}

int do_sha(string arg)
{
        int i ;
	object me,ob;
	object* obj;
	me = this_object();
	if(!arg||!objectp(ob=present(arg,environment(me))))
		return notify_fail("˫��˵: ������Ҫ˫��ɱ˭��\n");
	if(ob->query("age")< 16 ) 
		return notify_fail("˫��˵:"
			+ob->query("name")+"���Ǹ�С����, ���˰�...!!\n");
	if(!environment(ob)->query("no_fight"))
	{
		message_vision("˫����$N��ͷ˵��: ��, �õ�. \n",me);
		command("say ��, ����Ҫ��ɱ����! ");
		remove_call_out("kill_ob");
		call_out("kill_ob", 1, ob); 
	}
	return 1;
}       
