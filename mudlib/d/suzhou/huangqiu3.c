// Room: /d/suzhou/huangqiu1.c
#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
��Ƭ����ش�������������֮����Ҳ��֪���׹��ĸ���Ͻ�����ǹٸ�������
��ȱ����������ܴ������˴�����ʱ���ϵ���ѻ���¸¡����������������з�ë��
���ɵļӿ��˲�����
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"east":__DIR__"huangqiu2",
	"westdown" :__DIR__"guandao3",
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
}
int valid_leave(object me,string dir)
{
	if(!userp(me)&&me->query("home")==1&&dir=="westdown")	{
	tell_room(__DIR__"guandao3",RED"\n�����ϴ������˵�ŭ�������ܵù���һ�ܲ���ʮ�壡��\n"NOR);
	return 0;
	}
return 1;
}
