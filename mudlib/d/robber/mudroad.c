// Room: /d/new/robber/mudroad.c

inherit ROOM;

void create()
{
	set("short", "����·");
	set("long", @LONG
һ���������Ļ���С·,���ߵ�������ѿݻ�,Զ����ׯ�еĹ�������,��
�������įԭҰ������.һ����ȥ,����·�߹հ���,Ҳ��֪ͨ����!
LONG
	);
set("outdoors","/d/jiangnan");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : "/d/sandboy/well",
  "northeast" : __DIR__"mudroad1",
]));

	setup();
	replace_program(ROOM);
}
