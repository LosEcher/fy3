// Room: /d/new/tianxia/outcave.c

inherit ROOM;

void create()
{
	set("short", "���붴��");
	set("long", @LONG
һ���������͵�ɽ�ں�ب����ǰ,̧ͷ����,ɽ��׹.�嶥ֱ��������ڤ.
ɽ��֮����һ����ֵĶ���,���μ���һֻҰ���ſ��ľ޿�,�����������,
�������治��,������һ��ʯ��·.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"stone1",
  "in" : __DIR__"incave1",
]));

	setup();
	replace_program(ROOM);
}
