// Room: /u/o/oldsix/room/crossroad.c

inherit ROOM;

void create()
{
	set("short", "ʮ��·��");
	set("long", @LONG
û��ʲô�ر�֮�������ڿ쵽�����ˣ�һ����������������Ҵ�һ�¡���
�²�С�ĵ�����˭�����������������������η��������ǳ����ıؾ�֮·����
���������ݸ����á�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"west" :__DIR__"ermen",
	"north" :__DIR__"yanwuting",
	"south" :__DIR__"road4",
	"east" :__DIR__"tangkou",
]));
	set("objects",([
		__DIR__"npc/gengfu":1,
		]));
	set("no_clean_up", 0);
	set("outdoors","room");
	setup();
	replace_program(ROOM);
}
