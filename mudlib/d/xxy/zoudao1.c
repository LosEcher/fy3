// Room: /d/xxy/zoudao1.c

inherit ROOM;

void create()
{
	set("short", "�ߵ�");
	set("long", @LONG
һ���������ߵ�,�����ǻ���,��������ٺ�,�Ǹ�����ֵĻ�ľ,����
���˵�����,�������ϸ�۲�,���ܿ�����඾���ڻ�ľ����Ϣ.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/xxy");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"zoudao",
  "north" : __DIR__"zoudao2",
]));

	setup();
	replace_program(ROOM);
}
