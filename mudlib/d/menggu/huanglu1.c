// Room: /d/menggu/huanglu1.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set("long", @LONG
���������ӹ�����Ļ�·������Զ���������ϡ�١�
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/menggu");
	set("exits", ([ /* sizeof() == 2 */
  "south" : "/d/huanggon/andingmen",
  "northwest" : __DIR__"damo2",
]));

	setup();
	replace_program(ROOM);
}
