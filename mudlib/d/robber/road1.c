// Room: /d/robber/road1.c

inherit ROOM;

void create()
{
	set("short", "�Ӳ�С·");
	set("long", @LONG
һ������������С·�����߷賤���Ӳݼ�����·����ȫ��ס�ˣ�����
��ϸС��������ͷ����Խ����������Ĺ�ľ��Ҳʱʱ��ס��ǰ����·���ϱ�
��һƬ��ҵķصأ�����������һ�㱯��֮�С�
LONG
	);
	set("no_clean_up", 0);
set("outdoors","/d/jiangnan");
	set("exits", ([ /* sizeof() == 2 */
  "southup" : __DIR__"tomb1",
  "northeast" : __DIR__"road2",
]));

	setup();
	replace_program(ROOM);
}
