// Room: /u/oldsix/room1/keting.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
���������ڣ�ӭ���Ǹ���ɫ������������ȥ���������ܾ����һ��͸����
��ˮ����������������ɵ÷����˽Ų��������ƻ�����������ա�
    ����������ӣ��������Ǵ��š�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"south" :__DIR__"ru2",
		"north" :__DIR__"ru3",
]));
	set("objects",([
		__DIR__"npc/napu" :1,
		__DIR__"npc/nupu" :1,
		]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
