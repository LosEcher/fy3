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
  "south" :"/d/dali/toemei",
  "north":__DIR__"xiaolu1",
]));
	set("outdoors", "emei");
	set("no_clean_up", 0);
	set("objects",([
		"/npc/man4":1,
	]));

	setup();
	replace_program(ROOM);
}
