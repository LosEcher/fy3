// Room: /u/o/oldsix/room/ywt.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
Ѳ����ƽʱ�����ĳ��������Ϸ��ż���ʯ����ǽ�ǵļ��������߰���Ķ�
��һЩ������������վ�ż�������ӵĴ󺺣�����ʪ͸����Ȼ�ո�����һ����
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"south" :__DIR__"shiziru",
	"east" :__DIR__"xiaomen",
]));
	set("objects",([
		__DIR__"npc/zhuanghan":1,
]));
	set("no_clean_up", 0);
	set("outdoors","room");
	setup();
	replace_program(ROOM);
}
