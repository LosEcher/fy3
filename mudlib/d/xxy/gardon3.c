// Room: /d/xxy/gardon3.c

inherit ROOM;

void create()
{
	set("short", "��԰");
	set("long", @LONG
���ǻ�԰�е�һ�����ʯ��·,�������Ļ�ľ�д���.Զ��������¶����
��һ��,�Ǿ������¥.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/xxy");
	set("item_desc", ([ /* sizeof() == 1 */
  "n" : "",
]));
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"gardon2",
  "south" : __DIR__"tianfeng",
]));

	setup();
	replace_program(ROOM);
}
