// Room: /d/xxy/zoulang2.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
һ������ǽ�Ļ���,��һ�߾��ǻ�԰,�Ӵ˿�ȥ,��԰��һ����¥ʮ������.
����'��'��������ס�����¥.�����µ������ڷ��е�������.�Ӵ����Ͽ��Խ�
�뻨԰,����һ�Ÿ�¥.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/xxy");
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"zoulang3",
  "east" : __DIR__"zoulang1",
  "south" : __DIR__"gardon",
]));

	setup();
	replace_program(ROOM);
}
