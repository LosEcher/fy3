// Room: /d/hangzhou/xiaolu1.c

inherit ROOM;

void create()
{
	set("short", "С·");
	set("long", @LONG
����С·������Ұ��,�Աߵ���ľɭɭ,һ·�����ɽ.�������ɽ
����ľ��¶��Χǽ��һ��.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/hangzhou");
	set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"xiaolu",
  "southup" : __DIR__"nanping",
]));

	setup();
	replace_program(ROOM);
}
