// Room: /d/new/robber/road2.c

inherit ROOM;

void create()
{
	set("short", "�Ӳ�С·");
	set("long", @LONG
һ�������Ӳݵ�С·������Ҫ���ϲ�����ס˫�۵Ĳ�Ҷ�͹�ľ�ԣ�����
�ҵ�ǰ����·�����Ͽ���һȺ��ѻ��ѽѽ����Ͷ��һƬ���֡�
LONG
	);
	set("no_clean_up", 0);
set("outdoors","/d/jiangnan");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"road3",
  "southwest" : __DIR__"road1",
]));

	setup();
	replace_program(ROOM);
}
