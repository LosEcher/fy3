// Room: /d/suzhou/meizhuang/shibanlu1.c

inherit ROOM;

void create()
{
	set("short", "ʯ��·");
	set("long", @LONG
һ��������ʯ��·����·������÷����͸��÷����ϡ�����͵��ϵ�
Զɽ��΢��ϰϰɷ�����ˣ�������ط��˲�����˼������������÷ׯ��Ժ
�ľ�ͷ���������������ֵ��⽣Ӱ����÷ׯ�ı����⡣
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"south":__DIR__"bingqiku",
	"east":__DIR__"liangongchang",
	"west":__DIR__"shibanlu2",
]));
	set("no_clean_up", 0);
	set("outdoors", "meizhuang");

	setup();
	replace_program(ROOM);
}
