// Room: /d/wudang/road7.c

inherit ROOM;

void create()
{
	set("short", "ʯ·");
	set("long", @LONG
��������ʯ�̳ɵ�С·���ϱ�ֱͨ��̲�����ƺ��Ѹе����󺣷����Ϣ
��
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/wudang");
	set("exits", ([ /* sizeof() == 2 */
  "south" : "/d/hainan/tohaitan",
  "north" : __DIR__"road5",
]));

	setup();
	replace_program(ROOM);
}
