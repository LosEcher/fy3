// Room: /u/oldsix/room1/taihu4.c
#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "̫��");
	set("long", @LONG
����������۵Ļ���������ʱ����ңң����Զ���������У�¶��һ�Ƿ��ܡ�
���̽ӹ�ľ��������ֱ�������л�ȥ�������ڽ���ֻ��һ������֦�ܳɵ�ľ�ݣ�
������ͨ��ˮ�档
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"up" :__DIR__"qinyun",
]));
	set("no_clean_up", 0);
	set("outdoors","room1");
	setup();
}
int init()
{
	object me;
	me=this_player();
	call_out("greeting",1,me);
}
void greeting(object me)
{
	if (me->query_temp("oldsix_flag/ab")==1) {
	me->set_temp("oldsix_flag/ab",0);
	write(CYN"����˵�����;�ǧ�����һ����λ"+ RANK_D->query_respect(me)+ "��ౣ�ء�\n"NOR);
	write(CYN"˵�գ����̻���С������Զȥ��\n"NOR);
						}
}
