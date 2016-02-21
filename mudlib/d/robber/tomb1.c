// Room: /d/robber/tomb1.c

inherit ROOM;

void create()
{
	set("short", "�س�");
	set("long", @LONG
�߰˸��߸ߵ͵͵ķض���û�ڸ߸ߵ�é�ݴ��У������ض��Ѿ��Ƿϵ�����
¶�����е�ɭɭ�׹ǣ�����Ϧ�����䴦�������ѩ��
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "northdown" : __DIR__"road1",
  "south" : __DIR__"tomb",
]));
	set("outdoors", "/d/jiangnan");
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/obj/kulou.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
