// Room: /d/suzhou/meizhuang/shibanlu1.c

inherit ROOM;

void create()
{
	set("short", "ʯ��·");
	set("long", @LONG
һ��������ʯ��·����·������÷����͸��÷����ϡ�����͵��ϵ�
Զɽ��΢��ϰϰɷ�����ˣ�������ط��˲�����˼��������÷ׯ���ӵ�˯
���������������á�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"east":__DIR__"shibanlu3",
	"north":__DIR__"zaotangguodao",
	"south":__DIR__"shuifang",
	"west":__DIR__"shibanlu1",
]));
	set("no_clean_up", 0);
	set("outdoors", "meizhuang");

	setup();
	replace_program(ROOM);
}
