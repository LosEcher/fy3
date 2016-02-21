// woodcutter.c
#include <ansi.h>
inherit NPC;
int do_heal();
void create()
{
	set_name("����",({"wuzhe"}));
	set("gender", "����" );
	set("age", 26);
	set("long","��������һ��ֻ�봳�������������ˡ�\n");
	set("chat_chance", 15);
        set("chat_msg", ({
		(: do_heal :)
	}));
	set("combat_exp",5000);
	set("str", 30);
	set_skill("unarmed",20);
	set_skill("parry",20);
	set_skill("dodge",20);
	setup();
	carry_object("/obj/cloth")->wear();
}
int do_heal()
{
	object me;
	me=query_leader();
	if(!me) return 1;
	if(query("kee")<query("max_kee")||query("eff_kee")<query("max_kee"))	 {
		say("���ߴӻ����ͳ���ҩ������ȥ��\n");
		set("kee",query("max_kee"));
		set("eff_kee",query("max_kee"));
		say("������ɫ��ʱ��úö��ˡ�\n");
		return 1;
	}
}
void init()
{
	add_action("do_zhao","zhao");
	add_action("do_kill","kill");
}
int do_kill(string name)
{
	object me;
	me=this_player();
	if(! name)	return 0;
	if(!query_leader())	return 0;
	if(me==query_leader())	{
		if(!present(name,environment()))	return 0;
		if(present(name,environment())==this_object())	{
		tell_object(me,"���ѵ�����Ҳ���Ź���\n");
		return 1;
		}
		message_vision(CYN"���ߴ��һ����"+me->query("name")+"��ͬ��"+present(name,environment())->query("name")+"���𹥻���\n"NOR,me);
		command("kill "+name);
	return 0;
	}
	if(present(name,environment())==query_leader())	{
		message_vision(CYN"����ŭ�ȵ��������Ҽ���������ȥ��������\n"NOR,me);
		command("kill "+me->query("id"));
	return 0;
	}
	return 0;
}
int do_zhao(string name)
{
	object me,npc;
	me=this_player();
	npc=present(name,environment());
	if(!npc)	{
		tell_object(me,"����û��ô���ˡ�\n");
		return 1;
	}
	if(npc->query("zhao")==1)	{
		tell_object(me,"�����ѹ�"+query_leader()->query("name")+"ͳ�죬�㲻���������ˡ�\n");
		return 1;
	}
	if(me->query_temp("oldsix_flag/zhao"))	{
		tell_object(me,"���Ѿ�������ˣ�������������\n");
		return 1;
	}
	npc->set_leader(me);
	me->set_temp("oldsix_flag/zhao",1);
	message_vision("���߾�������$N�����С�\n",me);
	npc->set("zhao",1);
	npc->set("title",me->query("name")+"�����");
	return 1;
}
