// Room: /d/suzhou/tuoman/yjlou.c

inherit ROOM;

void create()
{
	set("short", "�ƽ�¥");
	set("long", @LONG
�㴩�����֣���ʯ�ţ���С��������һ��С¥֮ǰ������С¥����һ���Ҷ
д�š��ƽ�¥������ī��׭�֣�¥��ǰ�������ֵĶ��ǲ軨������Щ�軨������
��������ɫ�����⾫�µ�¥��ͤ���ȣ�δ�ⲻ�ġ�
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
		"north":__DIR__"ru1",
		"up" :__DIR__"loushang",
]));
	set("no_clean_up", 0);
	set("outdoors","suzhou");
	setup();
	replace_program(ROOM);
}
