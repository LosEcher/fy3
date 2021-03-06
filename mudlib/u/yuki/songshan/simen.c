// Room: /u/yuki/songshan/simen.c

inherit ROOM;

void create()
{
	set("short", "芦岩寺寺门");
	set("long", @LONG
    这里是芦岩寺的寺门，寺门被郁郁葱葱的树木遮住了大半。
门口有两个白发苍苍的老翁正在下棋，偶尔会为一步棋争的脸红
脖子粗。
LONG
	);
	set("no_clean_up", 0);
	set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"luyansi.c",
  "west" : "/d/songshan/luyanpubu.c",
]));
        set("objects", ([
                 __DIR__"npc/xianhe": 1,
                 __DIR__"npc/lupan": 1,
        ]) );
         setup();
}

int valid_leave(object me, string dir)
{
        mapping myfam;
        myfam = (mapping)me->query("family");

        if ((!myfam || myfam["family_name"] != "嵩山派") && dir == "east" &&
                objectp(present("xianhe", environment(me))))
        return notify_fail("仙鹤翁说道：此乃本门重地，请不要乱闯。\n");
                
        return ::valid_leave(me, dir);
}
