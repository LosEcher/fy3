// Room: /d/quanzhen/shanlu3.c

inherit ROOM;

void create()
{
	set("short", "ɽ·");
	set("long", @LONG
	ǰ�������һ����ɽ�ȣ��ߵ������ľ����Щ��ȫ���ǰ�������
����һ��������ɽ·��������ɽ�䣬Ҫ��ҹ�ﻹ�濴��������
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/hangzhou/npc/man.c" : 2,
]));
	set("outdoors", "/d/quanzhen");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "northup" : __DIR__"cuipingu",
  "southwest" : __DIR__"shanlu2",
]));

	setup();
	replace_program(ROOM);
}
