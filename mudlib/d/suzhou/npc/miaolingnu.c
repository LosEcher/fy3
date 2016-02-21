// woodcutter.c
#include <ansi.h>
inherit KZZNPC;

string query_save_file() { return DATA_DIR + "npc/��ʦʦ"; }

void create()
{
#include <kzznpc.h>

	set("long","�������������˵�С��Ů������һ�ֺ����á�\n");
	set("area_name","����˿����");
	set("area_file","/d/suzhou/sizhuxuan.c");
        set("inquiry", ([
	"����":"ֻҪ�㸶(pay)ʮ�����ӣ�СŮ�ӱ�Ϊ�㵯��һ����",
	"tanchang":"ֻҪ�㸶(pay)ʮ�����ӣ�СŮ�ӱ�Ϊ�㵯��һ����",
        ]) );
	set_temp("apply/attack",10);
	set_temp("apply/defense",10);
	set("per",50);
	setup();
	carry_object("/obj/cloth")->wear();
}
void init()
{
	object ob;
	::init();
        if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
	add_action("do_pay","pay");
}

void greeting(object ob)
{

	if( !ob || environment(ob) != environment() ) return;
	if(ob->query("bellicosity")>100)	{
		message_vision(CYN"��ʦʦվ��������$N˵����"+RANK_D->query_respect(ob)+"���������ҵ���һ���Խ���ͷ���ƣ�\n"NOR,ob);
		return;
	}
	message_vision(CYN"��ʦʦ�����Ღ���ã�ֻ���á����ˡ�һ���졣\n"NOR,ob);
	return;
}

int do_pay(string str)
{
	object me=this_player();
	string banghui;

	if(! str)	return 0;
	if(str!="li shishi")	return 0;
	banghui=(string)me->query("banghui");
	if(banghui && banghui==(string)query("banghui"))	{
		write("��ʦʦ��������ͬ���ֵܣ�СŮ���Ļ�������Ǯ�ء�\n");
		write("˵����ʦʦ��������Ϊ�㵯����һ����\n");
		write("��ֻ���������ˣ�����˵�������泩��\n");
		if((int)me->query("bellicosity")<=100)
			me->set("bellicosity",0);
		else	me->add("bellicosity",-100);
		write("���ɱ���½���һ�ٵ㣡\n");
	}
	else	{
	if(! me->pay_money(1000))
	{	write("��ʦʦ̾��������ʮ�����Ӷ�û����\n");
		return 1;
	}
	write("��ӻ����ͳ�ʮ������������ʦʦ��\n");
	write("��ʦʦ����������ˣ�СŮ�ӱ�Ϊ������һ����\n");
	write("˵����ʦʦ��������Ϊ�㵯����һ����\n");
	write("��ֻ���������ˣ�����˵�������泩��\n");
	if((int)me->query("bellicosity")<=100)
		me->set("bellicosity",0);
	else    me->add("bellicosity",-100);
	write("���ɱ���½���һ�ٵ㣡\n");
	"/cmds/adm/ctom.c"->save_money(this_object(),100);
	}
	return 1;
}

