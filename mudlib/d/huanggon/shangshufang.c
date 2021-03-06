// Room: /d/huanggon/shangshufang.c

inherit ROOM;

void create()
{
	set("short", "上书房");
	set("long", @LONG
但见房中一排排都是书架,架上都摆满了书,也不知有几千几万本书。
室前一张紫檀木的书桌极大,桌面金镶玉嵌,桌上摊着一本书,左首放着的
砚台笔筒也都雕刻精致.椅子上披了锦缎,绣着一条金龙.书桌右首是一只
青铜古鼎,烧着檀香,鼎盖的兽头口中袅袅吐出一楼楼青烟。
LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"yangxindian",
]));
	set("no_clean_up", 0);
	set("objects", ([ /* sizeof() == 2 */
  __DIR__"npc/wenyoufang.c" : 1,
  __DIR__"npc/wenyoudao.c" : 1,
]));

	setup();
	replace_program(ROOM);
}
