// Room: /d/new/robber/road3.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set("long", @LONG
һ����ֱ�Ĵ�·������������ۡ�·��������һƬ���֣��ұߵ�
�ݴ�����Լ��һ��С·���򶫣���Զ�������»���ܶ��ˡ�
LONG
	);
	set("no_clean_up", 0);
set("outdoors","/d/jiangnan");
	set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"road5",
  "south" : __DIR__"road2",
  "east" : __DIR__"road4",
]));

	setup();
	replace_program(ROOM);
}
