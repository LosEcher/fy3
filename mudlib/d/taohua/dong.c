#include <ansi.h>
inherit ROOM;
 
int do_pick(string arg) ;

void create()
{
        set("short", "山洞");
        set("long",@LONG
你正处在一个小山洞中。这里光线很暗，只能隐隐约约看出地上有一堆干草。
干草上好象放着一个石匣。你突然闻到一股难闻的气味，显然是有人长期住
在这里却不打扫的缘故。
LONG);   
 
        set("exits", ([
  "out"  : "/d/taohua/road5",
]));
    

        setup();
}

