// Room: /d/wudang/road1.c

inherit ROOM;

void create()
{
	set("short", "�ٵ�");
	set("long", @LONG
�������ٵ�����ʯ�̳ɡ����治Զ�����ǳɶ�����
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "east" :__DIR__"road2",
  "west":"/d/chengdu/tocd",
]));
        set("objects", ([
                __DIR__"npc/tufeitou" : 1]));
set("outdoors","/d/wudang");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
