// Room: /d/japan/qianzhuang.c

inherit ROOM;

void create()
{
	set("short", "钱庄");
	set("long", @LONG
钱庄的老板是个秃了脑袋的家伙,对于放高利贷很在行,你的钱要是存
到他的钱庄,还是要收保管费用的.不过这里在各处都有联系.所有实行通存
通兑,当然要收一点手续费.
LONG
	);
        set("guarded", ([ /* sizeof() == 1 */
  "north" : ({ }),
]));
	set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"jiedaos",
]));
        set("objects", ([ /* sizeof() == 1 */
               __DIR__"npc/xiaye" : 1,
            ]));
	set("no_clean_up", 0);

	setup();
	replace_program(ROOM);
}
