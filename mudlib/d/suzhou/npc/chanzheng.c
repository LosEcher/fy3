// guard.c

#include <ansi.h>

inherit NPC;


void create()
{
	set_name("����",({"chan zheng","chan"}));
	set("title","�����й�");
	set("gender", "����" );
	set("age",24);
	set("str",50);
	set("cor", 30);
	set("cps", 30);
	set("int",30);
	set("con",50);
	set("long",
	"�����⣬ͯ�պ׷�����������ǫ�͡�\n"
	);
	set("combat_exp",50000);
	set("attitude","friendly");
	setup();
	carry_object("/obj/weapon/blade")->wield();
	carry_object("/obj/cloth")->wear();
}
void init()
{
	object ob;
	::init();
	ob=this_player();
	if( interactive(ob = this_player()) && !is_fighting() ) {
                remove_call_out("greeting");
                call_out("greeting", 1, ob);
        }
        
}
int greeting(object ob)
{
	int t1,t2,lt,m,s;
	string time;
	time="";
	if(ob->query("oldsix_flag/lao")==0)	{
		message_vision(CYN"��������$N˵��������Գ�ȥ�ˣ��������Ϲת�ƣ�\n"NOR,ob);
		return 1;
	}
	t1=ob->query("mud_age")-ob->query("oldsix_flag/time");
	switch(ob->query("oldsix_flag/long"))	{
		case 1 :	t2=20*60;
				break;
		case 2 :	t2=10*60;
				break;
		case 3 :	t2=5*60;
				break;
				}
	lt=t2-t1;
	if (lt<=0) {
	tell_object(ob,CYN"�������ĵĸ����㣺���ϾͿ��Գ�ȥ����\n"NOR);
		return 1;
			}
	s=lt%60;
	lt=lt/60;
	m=lt;
	if(m) time += chinese_number(m) + "��";
	time += chinese_number(s) + "��";
	tell_object(ob,CYN"�������ĸ����㣺��Ҫ��"+time+"���Ҳ��ܳ�����\n"NOR);
	return 1;
}
