// Room: /d/new/huanhua/7qulang2.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
������������������,�������ڻ�ľ֮��,���ۻ���,ƽʱ������;
�;�֮��,����Ҳ�����֮Ч.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/3e3.c" : 1,
]));
	set("outdoors", "/d/new");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"7qulang1",
  "north" : __DIR__"7qulang3",
]));

	setup();
	replace_program(ROOM);
}
