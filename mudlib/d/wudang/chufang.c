// Room: /u/xizhen/room/chufang.c

inherit ROOM;

void create()
{
	set("short","����");
	set("long", @LONG
�����ר���䵱���ӷ��˵ĳ�����
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"sanqingdian",
]));
	set("objects",([
		__DIR__"obj/bowl":1+random(2),
		__DIR__"obj/jiuhu":1+random(2),
		__DIR__"obj/baozi":1+random(2),
		__DIR__"obj/rice":1+random(2),
	]));

	setup();
	replace_program(ROOM);
}
