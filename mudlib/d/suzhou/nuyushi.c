// Room: /d/suzhou/nuyushi.c

inherit ROOM;

void create()
{
	set("short", "Ůԡ��");
	set("long", @LONG
ר��Ů��ϴ��ĵط������аڷ��˲��ٴ�ԲͰ����������Ѿ����һ���̺
LONG
	);
	set("bath_room",1);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"yushi",
]));
	set("no_clean_up", 0);
	set("hotel",1);
	setup();
	replace_program(ROOM);
}
