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
	if(me->query("family/family_name")!="��ɽ÷ׯ")	{
	command("say ����ݲ��Ӵ��������ɵ��ӡ�\n");
	return 1;
	}
	if(me->query_temp("sleeped"))	{
	command("say ���Ǹ�˯����\n");
		return 1;
	}
	return 0;
}
