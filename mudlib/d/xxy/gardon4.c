// Room: /d/xxy/gardon4.c

inherit ROOM;

void create()
{
	set("short", "��԰");
	set("long", @LONG
���ǻ�԰�е�һ�����ʯ��·,�������Ļ�ľ�д���.Զ��������¶����
��һ��,�Ǿ������¥.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"gardon5",
  "west" : __DIR__"tianfeng",
]));
	set("item_desc", ([ /* sizeof() == 1 */
  "n" : "",
]));
	set("outdoors", "/d/xxy");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
