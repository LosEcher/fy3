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
	"north":__DIR__"midao2",
	"out":__DIR__"jinfengzhuang",
]));

	setup();
	replace_program(ROOM);
}
