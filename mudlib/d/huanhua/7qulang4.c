// Room: /d/new/huanhua/7qulang4.c

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
  "west" : __DIR__"7qulang3",
  "east" : __DIR__"neiting",
]));
	set("no_clean_up", 0);
	set("outdoors", "/d/new");

	setup();
	replace_program(ROOM);
}
