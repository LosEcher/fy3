// Room: /d/wudang/road1.c

inherit ROOM;

void create()
{
	set("short", "�ٵ�");
	set("long", @LONG
�������ٵ�����ʯ�̳ɡ������������߿��Ե�������ϱ�ֱͨ��̲��
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "northeast":__DIR__"road4",
  "southwest":__DIR__"road6",
  "south":__DIR__"road7",
]));
set("outdoors","/d/wudang");
	set("no_clean_up", 0);

	set("objects",([
		"/npc/man5":1,
	]));
	setup();
	replace_program(ROOM);
}
