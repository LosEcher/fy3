// Room: /d/jinling/shanglin1.c

inherit ROOM;

void create()
{
	set("short", "���ֵ�");
	set("long", @LONG
����һ�����Ӷ������ż�����Է�Ŀ����ֵ���һֱ���쵽���⡣����
�������˺ܶ࣬��ʱ����ͳ��ɳ۶�����
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/jingling");
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"shanglin2.c",
  "east" : __DIR__"shizhong.c",
]));

	setup();
	replace_program(ROOM);
}
