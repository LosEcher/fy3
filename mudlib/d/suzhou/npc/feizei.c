// woodcutter.c
#include <ansi.h>
inherit KZZNPC;

string do_give();

string query_save_file() { return DATA_DIR + "npc/������"; }


void create()
{
#include <kzznpc.h>

	set("inquiry", ([
		"�ٸ���ƶ": (: do_give :),
	]));
	set("have_give",0);
	set("thief",0);
	set("long","һ����С���ɵĺ��ӣ�"+
	HIY"�ٸ���ƶ"NOR"�ĺú���\n");
	set_temp("apply/defense",50);
		set("chat_chance",20);
        set("chat_msg", ({
		"�����ϺǺǵ�Ц����������������ʲô��������\n",
		"�����ϵ����뵱�ꡣ������������Ҳ�ա�\n",
		(: random_move :),
}));
	 set("chat_chance_combat", 15);
        set("chat_msg_combat", ({
		"������̾������Ҫ���ҳ��ֲ��ɣ�\n",
		"�����Ͻе��������������\n",
		"�����Ϻȵ�����˭������ɱ���ģ�\n",
}));
	set("env/wimpy",60);
	set_temp("apply/dodge",100);
	set_temp("apply/armor",40);
	setup();
	carry_object("/obj/cloth")->wear();
}
void init()
{
	object ob;
	::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
		call_out("greeting",1,ob);
        }
}

void greeting(object ob)
{
	string banghui;

	banghui=(string)ob->query("banghui");
        if( !ob || environment(ob) != environment() ) return;
	if(! banghui || banghui!=(string)query("banghui"))	{
		if((int)ob->query("mingwang")<0)	{
		write("��������������ļ�򣬸�Ц��������\n");
		command("steal all from "+ob->query("id"));
		return;
		}
	}
	
}
string do_give()
{
	object me=this_player();
	object *ob,thing;
	int i;
	string banghui;

	if((int)query("have_give"))
		return "����ô�Ｑ���ܵ�����Ъ����ɡ�";
	banghui=(string)me->query("banghui");
	if(! banghui || banghui!=(string)query("banghui"))
		return "��������ƽ�������æ�ҿɰﲻ�ˡ�";
	ob=all_inventory(this_object());
	if(! sizeof(ob))	return "������˼���һ�û�е����ء�";
	for(i=0;i<sizeof(ob);i++)	{
		if(ob[i]->query("equipped"))
		ob-=({ ob[i] });
	}
	if(! sizeof(ob))	return "������˼���һ�û�е����ء�";
	thing=ob[random(sizeof(ob))];
	set("have_give",1);
	thing->move(me);
	call_out("reset_flag",600);
	return "��"+thing->query("unit")+thing->query("name")+"��ȥ�ɡ�";
}

void reset_flag()
{
	set("have_give",0);
}

