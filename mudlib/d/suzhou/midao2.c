// Room: /u/xizhen/room/chufang.c

inherit ROOM;

void create()
{
	set("short","�ܵ�");
	set("long", @LONG
���������ӽ��ׯ��κ�ɽׯ���ܵ���
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"south":__DIR__"midao1",
	"out":__DIR__"canhe/dating",
]));

	setup();
	replace_program(ROOM);
}
