// Room: /d/robber/road5.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set("long", @LONG
һ�������Ĵ�·���������˶��Ǳ뺷�Ľ������ӣ����˲�ʱ���̳���
�������ǿ����۶������µ��μ���·�ı����и���弡�
LONG
	);
	set("no_clean_up", 0);
set("outdoors","/d/jiangnan");
	set("objects",([
		"/npc/man1":2,
		"/npc/man2":1,
	]));
	set("exits", ([ /* sizeof() == 3 */
  "west" : "/d/sandboy/to_zhongzhou2",
  "east" : __DIR__"road3",
  "north" : __DIR__"tearoom",
]));

	setup();
	replace_program(ROOM);
}
