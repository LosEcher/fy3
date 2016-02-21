// Room: /d/quanzhou/bei-door.c

inherit ROOM;

void create()
{
	set("short", "Ȫ�ݱ���");
	set("long", @LONG
������Ȫ�ݵı���,�ߴ�ĳ�ǽ¶����ʷ�Ĳ�ɣ,ǽ�ű�������Ұ��, 
������,���������ܵز鿴·��.���Ž��ǵ������ų��˶���. 
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/quanzhou");
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"nstreet1",
  "north" : __DIR__"chayuan",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/bing.c" : 3,
]));

	setup();
	replace_program(ROOM);
}
