// Room: /d/xxy/zoulang4.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
һ������ǽ�Ļ���,��һ�߾��ǻ�԰,�Ӵ˿�ȥ,��԰��һ����¥ʮ������.
����'��'��������ס�����¥.�����µ������ڷ��е�������.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/xxy");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"zoulang5",
  "south" : __DIR__"zoulang3",
]));

	setup();
	replace_program(ROOM);
}
