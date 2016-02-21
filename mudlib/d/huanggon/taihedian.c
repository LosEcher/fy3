// Room: /d/huanggon/taihedian.c

inherit ROOM;

void create()
{
	set("short", "太和殿");
	set("long", @LONG
太和殿前是个可容两万人的广场,供朝会大典使用.北面三层汉白玉
栏杆怀抱高8米的台基.太和殿高35米,饰有各类神物.此殿又称金銮殿， 
南边是午门,北面是中和殿.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/yuqianshiwei.c" : 2,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"zhonghedian",
  "south" : __DIR__"wumen",
]));

	setup();
	replace_program(ROOM);
}
