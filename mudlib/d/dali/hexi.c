// Room: /d/dali/hexi.c

inherit ROOM;

void create()
{
	set("short", "河西镇");
	set("long", @LONG
此镇正处妃丽湖南，住的是阿藜蛮的休猎部。阿藜蛮属台夷，村
民除了耕种沿湖的田地外，主要以捕鱼为生。临湖风光格外秀丽，北
边不远就是渔船出入的小码头。南边山中有不少野兽，休猎部的男子
经常前去狩猎。
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"zhulin2",
  "north" : __DIR__"feilihusouth",
  "west" : __DIR__"yujia",
  "northwest" : __DIR__"feilihueast",
]));
	set("outdoors", "dali");
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/taiyizuzhang.c" : 1,
  __DIR__"npc/tshangfan" : 1,
]));

	setup();
	replace_program(ROOM);
}
