// Room: /d/xxy/zoulang6.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
һ������ǽ�Ļ���,��һ�߾��ǻ�԰,�Ӵ˿�ȥ,��԰��һ����¥ʮ������.
����'��'��������ס�����¥.�����µ������ڷ��е�������.������[��]�ֶ�
��¥.������һ�������ߵ�.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/xxy");
	set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"zoudao",
  "southeast" : __DIR__"zoulang5",
  "westup" : __DIR__"wuroom1",
]));

	setup();
	replace_program(ROOM);
}
