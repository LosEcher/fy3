// Room: /d/xxy/gardon5.c

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
  "west" : __DIR__"gardon4",
  "northeast" : __DIR__"gardon1",
]));
	set("item_desc", ([ /* sizeof() == 1 */
  "n" : "",
]));
	set("outdoors", "/d/xxy");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
