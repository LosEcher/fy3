// Room: /d/robber/trees3.c

inherit ROOM;

void create()
{
	set("short", "�ɰ���");
	set("long", @LONG
һƬϡ����ɰ���,�����Ǻ�����Ҷ��.ͷ��������͸�������
֦��,����Ƭ���ִ���������ů.
LONG
	);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/robber2.c" : 1,
  __DIR__"npc/robber3.c" : 1,
]));
set("outdoors","/d/jiangnan");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"trees1",
  "south" : __DIR__"trees4",
]));

	setup();
	replace_program(ROOM);
}
