// Room: /d/suzhou/nanyushi.c

inherit ROOM;

void create()
{
	set("short", "��ԡ��");
	set("long", @LONG
ר������ϴ��ĵط������аڷ��˲��ٴ�ԲͰ����������С������һ���̺
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"yushi",
]));
	set("bath_room",1);
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
