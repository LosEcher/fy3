// Room: /d/xxy/zoulang5.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
һ������ǽ�Ļ���,��һ�߾��ǻ�԰,�Ӵ˿�ȥ,��԰��һ����¥ʮ������.
����'��'��������ס�����¥.�����µ������ڷ��е�������.���Ͽ��Խ��뻨 
԰,�򱱾���[��]��һ��¥.
LONG
	);
	set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"zoulang4",
  "northwest" : __DIR__"zoulang6",
  "south" : __DIR__"gardon2",
  "northup" : __DIR__"wuroom",
]));
	set("outdoors", "/d/xxy");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
