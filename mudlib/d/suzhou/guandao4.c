// Room: /d/suzhou/guandao4.c

inherit ROOM;

void create()
{
	set("short", "�ٵ�");
	set("long", @LONG
�������������������ݵĹٵ������ڴ˴�Զ���������·�����˽�ϡ����
����ͨ�����ݵĲ�·�ڣ������������ݷ���
LONG
	);
	set("outdoors", "suzhou");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "west" : "/d/yeyangzai/chalu",
  "east" : __DIR__"guandao3",
]));

	setup();
	replace_program(ROOM);
}
