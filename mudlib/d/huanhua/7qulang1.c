// Room: /d/new/huanhua/7qulang1.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
������������������,�������ڻ�ľ֮��,���ۻ���,ƽʱ������;
�;�֮��,����Ҳ�����֮Ч.
LONG
	);
	set("outdoors", "/d/new");
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"7qulang",
  "north" : __DIR__"7qulang2",
]));

	setup();
	replace_program(ROOM);
}
