// Room: /d/hangzhou/dalu.c 
 
inherit ROOM; 
 
void create() 
{ 
	set("short", "��·");
	set("long", @LONG
һ�������Ĵ��,�����������ﲻ��,����һ·�ķ糾.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/hangzhou");
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"dalu2",
  "west" : __DIR__"dongmen",
]));

	setup();
	replace_program(ROOM);
}
