// Room: /d/dali/toemei.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�˴��Ǳ��϶���ɽ�����´�����ıؾ�֮·�����ٽٷ˳������
������Щ��Ҫ��Ǯ��������
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"todali",
  "north":"/d/emei/xiaolu2",
]));
	set("outdoors", "dali");
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
