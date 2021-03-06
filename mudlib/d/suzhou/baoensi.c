// Room: /d/suzhou/baoensi.c

inherit ROOM;

void create()
{
	set("short", "报恩寺");
	set("long", @LONG
迎面的龛台上供有“天地”两个大字，并非寻常寺庙的佛祖菩萨。香炉中冉
冉清烟不断。此寺是三国吴主为他母亲吴夫人祈福而建的，初名通玄寺。后又改
名为开元，五代重建后才改为报恩寺。寺中和尚都曾学过些武艺，也时常和苏州
城内的好武青年切磋技艺。
LONG
	);
	set("objects",([
		__DIR__"obj/gongdexiang":1,
		__DIR__"npc/laofangzhang":1,
]));
	set("exits", ([ /* sizeof() == 1 */
		"north":__DIR__"cangjingshi",
		"east" :__DIR__"chengbeijie4",
		"west" :__DIR__"baoensita",
]));
	set("no_clean_up", 0);

	setup();
}
int valid_leave(object me,string dir)
{
	object *inv;
	int i;
	if(dir=="north")	{
	inv=all_inventory(me);
	if(!sizeof(inv))	return ::valid_leave(me,dir);
	for(i=0;i<sizeof(inv);i++)	{
	if(inv[i]->query_max_encumbrance())
	return notify_fail("这儿不许带包裹之类的物品进藏经室！\n请先把您的"+inv[i]->query("name")+"拿走！！\n");
	}
	return ::valid_leave(me,dir);
	}
	return ::valid_leave(me,dir);
}
