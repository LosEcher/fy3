// Room: /u/o/oldsix/room/laomen.c

inherit ROOM;

void create()
{
	set("short", "��������");
	set("long", @LONG
���������ǹ�Ѻ���˵Ĵ����η�����ͨ�����û���ʿ��ǲ��ý���ġ���
�������ǿ��ŵ����䣬��б���۴������㡣
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
	"east" :__DIR__"road5",
	"down" :__DIR__"shenxun",
]));
	set("objects",([
		__DIR__"npc/yuzu" :2,
]));
	set("no_clean_up", 0);
	set("outdoors","room");
	setup();
}
int valid_leave(object me,string dir)
{
	if(dir=="down")
		return notify_fail("�ף�û�½��η����̽�ࣿ\n");
	return 1;
}
