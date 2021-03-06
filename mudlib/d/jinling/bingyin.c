#include <ansi.h>

inherit ROOM;

void create()
{
        set("short", "城卫营");
        set("long", @LONG
            这里就是维护竟陵城内治安的城卫营。门口有一巨大的牌匾，写着
“城卫营”三个大字，里面是城守大人的办公之处，若没有特别的事最好甭进去
，可能会被当成奸细抓起来。


LONG
        );

        set("exits", ([ /* sizeof() == 2 */
        "west" : __DIR__"changjie5.c",
        "east" : __DIR__"bingyin1",

                     ]));
        set("objects", ([
                __DIR__"npc/weibing.c": 2
        ]) );

set("outdoors","/d/jingling");
        setup();
}

int valid_leave(object me, string dir)
{
        if( dir=="west"  )
        {
        tell_object(me,"你看了看门前的牌匾，又看了看门口的卫兵，心里一阵发慌。 \n");
        if (me->query("sen")>20) me->add("sen",-20);
        return 1;
        }
        if(dir=="east")
        {
         if ( me->query("age")<16 )
           {
            tell_object(me,"卫兵拦住你说：城守大人不见小孩子.\n");
            say("卫兵拦住了"+me->query("name")+".\n");
            return notify_fail("卫兵拦住了你.\n");
           } 
           tell_object(me,HIW"卫兵轻喝一声：大人面前不得放肆，需收敛行为.\n"NOR);
           return 1;
        }
}
