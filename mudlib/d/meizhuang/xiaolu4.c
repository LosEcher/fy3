// Room: /d/meizhuang/xiaolu4.c

inherit ROOM;

void create()
{
	set("short", "С·");
	set("long", @LONG
������һ���ľ���С·�ϣ�·�Ի���ïʢ������䡣�������˽��٣�
�Ե�ʮ�ּ�į���������ȥ�Ǹ���·�ڡ�
LONG
	);
	set("outdoors", "meizhuang");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "northwest" : "/d/hangzhou/dalu3",
  "east" : __DIR__"xiaolu3",
]));

	setup();
	replace_program(ROOM);
}
