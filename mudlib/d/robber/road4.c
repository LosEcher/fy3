// Room: /d/robber/road4.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set("long", @LONG
һ������������۵Ĵ�·���������˶���ɫ�Ҵң����治Զ����ɽ
���ţ�ɽ���վ���ɽ�ڴ����˹ؿ���
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"road3",
]));
	set("outdoors", "/d/jiangnan");
	set("objects",([
		"/npc/man3":2,
	]));

	setup();
	replace_program(ROOM);
}
