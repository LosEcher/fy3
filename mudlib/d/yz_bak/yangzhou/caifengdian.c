//music  yangzhou's 裁缝店

#include <room.h>
inherit ROOM;

void create()
{
        set("short", "裁缝店");
        set("long", @LONG
	这里是一家裁缝店，伙计们正忙得热火朝天，看来生意很不错。
壁橱里挂着各种服装样品，你可以根据自己的需要挑件合身的。后院还
有些值钱的皮衣，是阔爷们定做的。店主沈老板正笑眯眯的打量着你。

LONG
        );

        set("objects", ([
                        __DIR__"npc/shenlaoban" : 1,
                       ]));

        set("exits", ([
                        "west" : __DIR__"jiedao2",
                     ]));
        setup();
        replace_program(ROOM);
}

