// Room: /d/suzhou/canhe/mudi.c
#include <ansi.h>
inherit ROOM;

void create()
{
	set("short", "Ĺ��");
	set("long", @LONG
Ĺ�����ܳ�����һ�˶�ߵ��Ӳݣ�����������ݴ�����Ĺ�ԡ�Ĺ���ϵ���
�����ڷ紵�����ѿ������У�ģģ����������Ľ�ݼҵ�ʲô������
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"north" :__DIR__"huayuan",
]));
	set("outdoors","suzhou");
	set("objects",([
		__DIR__"npc/murongbo":1,
	]));

	setup();
        replace_program(ROOM);
}
