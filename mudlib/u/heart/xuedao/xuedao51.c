// Room: /u/uuui/xuedao/xuedao51.c

inherit ROOM;

void create()
{
	set("short", "绿草坪");
	set("long", @LONG
这里是一片草坪，细软的长长草叶铺满了地面，走在
上面就好象踏在云端，感觉十分惬意。草坪中开着点点
的白色小小的野花，虽然简单不华丽，但是显得十分素
净。往北去就是一条荒凉的小路了。
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "xuedaomen/1");
	set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"xuedao78",
  "south" : __DIR__"xuedao56",
  "west" : __DIR__"xuedao52",
]));

	setup();
	replace_program(ROOM);
}
