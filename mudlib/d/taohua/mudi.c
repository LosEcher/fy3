#include <ansi.h>
inherit ROOM;

void create()
{
    set("short", "墓地");
        set("long", @LONG
    这里是桃花岛岛主夫人的墓地。墓地周围种了一些矮矮的花树。
树上的白花星星点点。白花中间是一高大的石碑(bei)，碑后是两扇坚固
的石门。整个墓地干干净净，显然天天有人打扫。
LONG
        );
        set("exits", ([
        "south" : "/d/taohua/road3",
        ]));
        set("item_desc", ([
        "bei": "上面刻着：桃花岛女主冯氏埋香之墓。\n"
        ]) );

        setup();
}


