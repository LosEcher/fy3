// Room: /d/hangzhou/dadao2.c

inherit ROOM;

void create()
{
	set("short", "���ִ��");
	set("long", @LONG
һ������ϱ��Ĵ��.����ʮ��������.���Ա�ֲ����.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/youke.c" : 2,
]));
	set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"dadao3",
  "west" : __DIR__"shuangf",
  "north" : __DIR__"wuchang.c",
]));
	set("outdoors", "/d/hangzhou");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
