// Room: /u/o/oldsix/room/road4.c

inherit ROOM;

void create()
{
	set("short", "��ɭС·");
	set("long", @LONG
����������ש��С·��·����ï�ܵ����֡�С·������������ȥ���εı�
��֮·��
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"north" :__DIR__"shiziru",
	"south" :__DIR__"road5",
]));
	set("no_clean_up", 0);
	set("outdoors","room");
	setup();
	replace_program(ROOM);
}
