// Room: /u/xizhen/room/xiuxishi.c

inherit ROOM;

void create()
{
	set("short","��Ϣ��");
	set("long", @LONG
�����ר���䵱����˯���ķ��䡣
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"sanqingdian",
]));
	set("sleep_room",1);
	set("no_fight",1);

	setup();
	replace_program(ROOM);
}
