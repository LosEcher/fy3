//Mr.music yangzhou 赌场

inherit ROOM;

void create()
{
        set("short", "赌场");
        set("long", @LONG
	这是个热火朝天的大赌场，场里笑声哭声叫骂声乱成一团，不论
是大亨还是小贩，休暇时间总来碰碰运气。门口站着一个神情漠然的彪型
大汉，使人不敢正视。赌场内设四个包厢，分别为东风、西风、南风、北
风，你现在正在中央的红中厅。

LONG
        );

        set("exits", ([ 
                      "up" : __DIR__"dongguan3",
                      "east" : __DIR__"dongfeng",
                      "south" : __DIR__"nanfeng",
                      "west" : __DIR__"xifeng",
                      "north" : __DIR__"beifeng",
                     ]));
        set("objects", ([
                __DIR__"npc/weichunhua": 1 ,
                __DIR__"npc/likui": 1
        ]) );

        setup();
}

