//Mr.music yangzhou 御码头

inherit ROOM;

void enter_boad();

void create()
{
        set("short", "御码头");
        set("long", @LONG
	这里是运河上的一个忙碌的小船码头，看来并不起眼，但历代的皇帝
南幸扬州，都是乘船摆架于此，码头边的石碑上注：御码头，但年代已不可考。
来往好多[33m船[37m只都停泊于此，是扬州城的重要运输口岸。

LONG
        );


      set("item_desc", ([
              "chuan" : "这些船也许可以乘。\n",
                "船":     "问问船老大吧.\n",
                       ]));

        set("exits", ([ 
                      "up" : __DIR__"xiaodongmenqiao",
                      "north" : __DIR__"changku",
                     ]));
        set("objects", ([
                        __DIR__"npc/chuanjia": 1,
                        __DIR__"npc/chuanlaoda": 1,
                        ]) );

        setup();
}

