// music   yangzhou's ��С��
inherit NPC;

#include <localtime.h>
#include <ansi.h>
static string *sym_dee = ({ "��","��","��","î","��","��","��","δ","��","��","�
�","��" });

void create()
{
	set_name("����",({"geng fu","fu","geng"}));
	set("gender", "����" );
        set("age",55);
	set("long",
                "����ǵĴ����ͷ��\n");
	set("mingwang",1);
	set("combat_exp",2000);
	set("attitude", "friendly");
	setup();
}

void init()
{	
	object ob;

	::init();
	if( interactive(ob = this_player()) && !is_fighting() ) {
		remove_call_out("greeting");
		call_out("greeting", 1, ob);
	}
}

void greeting(object ob)
{
	string time;
	mixed *local;
	if( !ob || environment(ob) != environment() ) return;
	local=localtime(time()*60);
	time=sym_dee[((local[LT_HOUR]+1)%24)/2]+"ʱ��"+chinese_number((local[LT_MIN]+1)%2 * 2 + local[LT_MIN]/30 + 1)+"��Ӵ��";
	message_vision(CYN"ֻ���ø������ߺ�ȣ�"+time+"\n"NOR,ob);

}
