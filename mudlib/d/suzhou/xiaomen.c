// Room: /u/o/oldsix/room/smalldoor.c

inherit ROOM;

void create()
{
	set("short", "С��");
	set("long", @LONG
���Ǹ�����С�ţ���ǰ�����÷ָ���������������Ϣ��ʱ�ϲ���ں�
�õĻ�԰��ɢ����ȥ�����˶�֪�������в����滨��ݡ�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"west" :__DIR__"yanwuting",
	"south" :__DIR__"road1",
	"north" :__DIR__"huayuan",
]));
	set("objects",([
		]));
	set("no_clean_up", 0);
	set("outdoors","room");
	setup();
	replace_program(ROOM);
}
