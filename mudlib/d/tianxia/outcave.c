// Room: /d/new/tianxia/outcave.c

inherit ROOM;

void create()
{
	set("short", "麒麟洞外");
	set("long", @LONG
一道笔立陡峭的山壁横亘在眼前,抬头望处,山欲坠.峰顶直入云霄青冥.
山壁之下是一个奇怪的洞口,外形极象一只野兽张开的巨口,甚至连交错的,
獠牙亦逼真不已,南面是一条石板路.
LONG
	);
	set("no_clean_up", 0);
	set("outdoors", "/d/new");
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"stone1",
  "in" : __DIR__"incave1",
]));

	setup();
	replace_program(ROOM);
}
