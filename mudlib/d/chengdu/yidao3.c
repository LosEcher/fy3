//by enter xiaoya

inherit ROOM;

void create()
{
        set("short", "驿道");
        set("long", @LONG
这是通往川蜀的一条驿道，路上行人匆匆，似乎都在忙着赶路，
两旁路色秀美，但还是掩不去你的路风尘仆仆。
LONG
        );

        set("exits", ([
                "northeast" : __DIR__"yidao4",
                "southwest" : __DIR__"shanlu1",
        ]));

        set("outdoors", "chengdu");
        setup();
        replace_program(ROOM);
}


