
//Mr.music  yangzhou's 接水亭

inherit ROOM;

void create()
{
        set("short", "接水亭");
        set("long", @LONG
	这里是建在湖水上的小亭，供人凭水小憩。亭匾题“接水亭”
，楹联曰：佳气溢芳甸，宿云澹野川。出亭就是长堤春柳。

LONG
        );

        set("exits", ([
                "west"  : __DIR__"changdichunliu",
        ]));

        set("item_desc", ([
                       "瘦西湖" : "就是瘦了一点的西湖。湖上漂着一叶小舟\n" , 
                          ]));
        
        set("objects", ([
//                __DIR__"npc/zhengbanqiao": 1,
        ]));

        setup();
}





