// Room: /u/o/oldsix/room/bigdoor2.c

inherit ROOM;

void create()
{
	set("short","����");
	set("long", @LONG
�����ǳ������ݸ��ıؾ�֮·�����߿տյ�����ֻ�����Է������衰����
���������ĸ����֡������ƺ���������ͨ�����ݸ����ã��������뿪���ݸ���
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"west" :__DIR__"damen",
	"east" :__DIR__"shiziru",
]));
	set("no_clean_up", 0);
	set("outdoors","room");
	setup();
	replace_program(ROOM);
}
