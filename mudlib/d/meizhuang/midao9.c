// Room: /d/suzhou/meizhuang/midao9.c

inherit ROOM;

void create()
{
	set("short", "�ܵ�");
	set("long", @LONG
�ܵ��������쳣������Զ����һյ�͵ơ��˴���·��խ�����빭���
�У�Խ��ǰ������Խ�͡�
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"tiemen",
  "east" : __DIR__"midao8",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
