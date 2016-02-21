#include <ansi.h>
inherit KZZNPC;

string query_save_file() { return DATA_DIR + "npc/��è��"; }

void create()
{
#include <kzznpc.h>

      set("long","�������˳ߣ���ü���ۣ�����б���ű����ʶ̵�����
������ֻ�����ľƺ�«��һ��߸裬һ��ʹ��������
ͷ���أ������Ь�����������Ȼ���ǣ������л�����
�����ȴ����һ��Ŀ���ĺ����������˵���������֮��!\n");
      set("chat_chance",5);
      set("chat_msg",({
                HIG+"��è������ƺ�«���˼��ھƣ������۾����˿���!\n"+NOR,
                HIG+"��è��̾����ǧ����������ᣬ�Թ�Ӣ�۶����ǣ��ҽ���г���ƣ������ж�����ɫ.\n"+NOR,
                (:random_move:),
              })); 
	if(random(10)>5)
		set("mingwang",-(int)query("mingwang"));
      setup();
      carry_object("/obj/cloth")->wear();
      carry_object(__DIR__"obj/jiuhulu")->wield();
      add_money("silver",80);
}

void init()
{
	object ob;
	::init();
	if((int)query("mingwang")<0)
		set("nickname","���");
	else
		set("nickname","����");

        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
}

void greeting(object ob)
{
	int my_mw,y_mw;
	string banghui;

	if( !ob || environment(ob) != environment() ) return;
	banghui=(string)ob->query("banghui");
	if(banghui && banghui==(string)query("banghui"))	return;
	my_mw=(int)query("mingwang");
	y_mw=(int)query("mingwang");

	if(my_mw<0 && y_mw>5000)	{
		command("grin "+ob->query("id"));
		kill_ob(ob);
		ob->fight_ob(this_object());
		return;
	}
	if(my_mw>0 && y_mw<-5000)	{
		command("grin "+ob->query("id"));
		kill_ob(ob);
		ob->fight_ob(this_object());
		return;
	}
}
