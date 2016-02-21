// Room: /d/quanzhou/dalu2.c

inherit ROOM;

void create()
{
	set("short", "��·");
	set("long", @LONG
һ����ֱ�����Ĵ�·,·����ï�ܵ�����,ż������������ɽȪ����
������,·�ϲ�ʱ��װ������ĳ����ɳ۶���.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/quanzhou");
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"dalu3",
  "west" : __DIR__"dalu1",
]));
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/xingren.c" : 2,
]));

	setup();
	replace_program(ROOM);
}
