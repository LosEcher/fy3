// Room: /d/quanzhou/qinyuan-hill.c

inherit ROOM;

void create()
{
	set("short", "清源山");
	set("long", @LONG
从树林出来,一座大山在眼前呈现,这就是被称为'闽海蓬莱第一山'
的清源山了,此山山峰峻峭,层岚叠障,洞壑深幽,妙景天成.在道旁有一块
石碑(shibei),你仔细看了看.
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "northdown" : "/d/jindezheng/shulin1",
  "southwest" : __DIR__"laojun-stone",
]));
	set("outdoors", "/d/quanzhou");
	set("item_desc", ([ /* sizeof() == 1 */
  "shibei" : "上面篆刻着几个大字,从上而下'泉州地界',下面还有泉州知府印.
",
]));

	setup();
	replace_program(ROOM);
}
