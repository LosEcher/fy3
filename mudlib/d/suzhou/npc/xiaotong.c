// woodcutter.c
#include <ansi.h>
inherit NPC;

void create()
{
	set_name("Сͯ",({"xiao tong","tong","kid"}));
	set("gender", "����" );
	set("age",10);
	set("long","ü��Ŀ���С�к���\n");
	set("combat_exp",500);
	setup();
	carry_object("/obj/cloth")->wear();
}
void init()
{
	::init();
	add_action("do_sleep","sleep");
}
int do_sleep()
{
	object me;
	me=this_player();
	if(me->query("family/family_name")!="����Ľ��")	{
		message_vision(CYN"Сͯ������$N˵�������ֻ�Ӵ�����Ľ�ݵĵ��ӡ�\n"NOR,me);
	return 1;
	}
	if(me->query_temp("sleeped"))	{
		message_vision(CYN"Сͯ��$N��Ц���������Ǹ�˯������\n"NOR,me);
		return 1;
	}
	return 0;
}
