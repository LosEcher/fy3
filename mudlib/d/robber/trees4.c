// Room: /d/robber/trees4.c

inherit ROOM;

void create()
{
	set("short", "�ɰ���");
	set("long", @LONG
ϡ���һƬ�ɰ���,�����Ǻ�����Ҷ,һ�ɸ��õ�ζ������������,
���濴ȥ,������ôϡϡ����ļ�����.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"trees5",
  "north" : __DIR__"trees3",
]));
set("outdoors","/d/jiangnan");
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/robber4.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
