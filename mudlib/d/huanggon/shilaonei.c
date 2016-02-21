// Room: /d/huanggon/shilaonei.c

inherit ROOM;

void create()
{
	set("short", "石牢内");
	set("long", @LONG
坚固的石牢,四边都是厚重的石头,南边墙上安装了铁窗,一扇铁门关
得紧紧的,墙脚铺了一层厚稻草,发出一股霉味.几只老鼠惊慌得跑到墙角
边躲了起来,空气很污浊.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/aobai.c" : 1,
]));
	set("exits", ([ /* sizeof() == 1 */
  "up" : __DIR__"shilaoxiaotang",
]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
