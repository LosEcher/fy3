// Room: /d/tianshan/caoyuan.c

inherit ROOM;

void create()
{
	set("short", "�ر߲�ԭ");
	set("long", @LONG
������������Ʈ���ڲرߵĲ�ԭ��һȺ���������������ڲ�ԭ����.
��ԭ�����ޱߣ�ϲ������ɽ������ʣ���Ө��ѩ����һ���Ű����ɵ�
�����������߲�����������¶��ͷ���������������������ߵİ������ߡ�
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/liuliang.c" : 1,
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/tianshan");

	setup();
	replace_program(ROOM);
}
