// Room: /d/robber/trees5.c

inherit ROOM;

void create()
{
	set("short","�ɰ�����");
	set("long", @LONG
ϡ���һƬ�ɰ���,�����Ǻ�����Ҷ��,ͷ������������赲������
��,�յ����������õ�.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"trees4",
]));
set("outdoors","/d/jiangnan");
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/robber1.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
