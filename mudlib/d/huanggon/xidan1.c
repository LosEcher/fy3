// Room: /d/huanggon/xidan1.c

inherit ROOM;

void create()
{
	set("short", "����");
	set("long", @LONG
�����Ǿ�����,ֻ��Щ�ִ߽����С��ҡ�Ż����Ĵ���,�����ľ���
�Ҷ�������,�����߾��Ǹ߸ߵ�ǽ��,��̧�ۿ��˿�,��������С��ͬ,��
֪����ͨ�ǵ�.
LONG
	);
	set("objects", ([ /* sizeof() == 1 */
  "/d/yangzhou/npc/liumang.c" : 2,
]));
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"wdajie1",
  "north" : __DIR__"xidan2",
  "west" : __DIR__"yanghutong",
]));
	set("outdoors", "/d/huanggon");

	setup();
	replace_program(ROOM);
}
