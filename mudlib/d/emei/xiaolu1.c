// Room: /d/emei/xiaolu1.c

inherit ROOM;

void create()
{
	set("short", "С·");
	set("long", @LONG
һ�����������С·��·�ߵ��������ҡ�ڡ�����ͨ����ң���
�����Ǵ���
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"xiaolu2",
  "north" : __DIR__"road",
]));
set("outdoors","/d/emei");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
