// Room: /d/new/huanhua/7qulang.c

inherit ROOM;

void create()
{
	set("short", "������");
	set("long", @LONG
������������������,�������ڻ�ľ֮��,���ۻ���,ƽʱ������;
�;�֮��,����Ҳ�����֮Ч.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"7qulang1",
  "east" : __DIR__"huapath1",
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/new");

	setup();
	replace_program(ROOM);
}
