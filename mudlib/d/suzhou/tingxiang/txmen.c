// Room: /u/oldsix/room1/txmen.c

inherit ROOM;

void create()
{
	set("short", "����ˮ�");
	set("long", @LONG
ԶԶ��ȥ����һ��С���ϰ˾ż䷿�ݣ�����������¥����ÿ�䷿�Ӵ��ж���
�ƻ�ӳ������С���Ҷ���д�š�����ˮ鿡��������Ͱ��̵ġ�����С������ࡣ
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"down":__DIR__"huan_3",
		"north":__DIR__"ru5",
]));
	set("no_clean_up", 0);
	set("outdoors","room1");
	setup();
	replace_program(ROOM);
}
