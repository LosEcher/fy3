// Room: /d/baituo/shan.c

inherit ROOM;

void create()
{
	set("short", "ɽ·");
	set("long", @LONG
һ����ɽ��·�����紵�����е���¡�
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "northup" : __DIR__"shan1",
  "southdown" : __DIR__"xiaolu4",
]));

	setup();
	replace_program(ROOM);
}
