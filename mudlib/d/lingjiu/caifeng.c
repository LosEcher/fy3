// Room: /d/lingjiu/caifeng.c

inherit ROOM;

void create()
{
	set("short", "�����");
	set("long", @LONG
���ǡ����չ����Ĳ÷��ҡ�����Ů��Χ����һ�飬�������ߣ�����Ů
�죬�ѵ�������Ϊ���Ժ���һ�����ż��� 
LONG
	);
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 2 */
  "/daemon/class/lingjiu/tbyang.c" : 1,
]));
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"changl10",
]));

	setup();
	replace_program(ROOM);
}
