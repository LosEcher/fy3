#include <ansi.h>

inherit ROOM;

void create()
{
        set("short", "空房间");
        set("long", "这是一间什麽也没有的空房间。\n");
        setup();
}

void init()
{
add_action("do_a","love");
}
int do_a()
{
  this_player()->set("env/msg_home",HIW"菀儿身形一轻，平地跃起，消失在空气中。"NOR);
this_player()->set("env/msg_min",HIR"你突然感到一阵香雾飘过来，从烟雾中袅袅婷婷的走出一位绝色少女。"NOR);
this_player()->set("env/msg_mout",HIB"香风又起，一阵烟雾弥漫过来，菀儿渐渐隐没在烟雾之中....."NOR);
return 1;
}

