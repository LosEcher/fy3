// Room: /u/oldsix/room1/keting2.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
���������ϵ���Իͣ�����ֻ�����˶���һ�棬�����ֺ������ڷŻ�������
���ϱ����ǽ壬�������Ӷ������ᡣ������ȥ��������ʮ���˶��ǰ��ۣ���Ȼ��
��������ֻ����һ�������ռ������������˸�������һƬľȻ������ϲ�ݣ���
��ŭɫ������������ʬһ�㡣
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"south":__DIR__"ru6",
		"east" :__DIR__"yuemen",
		"west":__DIR__"ru7",
		"north":__DIR__"ru9",
]));
	set("objects",([
		__DIR__"npc/yao" :1,
		__DIR__"npc/zhu" :1,
		__DIR__"npc/sima" :1,
		__DIR__"npc/zaiding" :1,
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
