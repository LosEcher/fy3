// Room: /d/huanggon/xidan
inherit ROOM;

void create()
{
  set ("short", "西单");
  set ("long", @LONG
西单是居民区,只有些走街穿巷的小贩摇着货鼓四处走,多数的居民
家都关着门,道两边就是高高的墙壁.西边家药铺,店铺门前挂的药葫芦一
晃晃的,黑漆招牌贼亮.
LONG);

  set("outdoors", "/d/huanggon");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"tongyaopu",
  "north" : __DIR__"ndajie3",
  "south" : __DIR__"xidan2",
]));
  setup();
  replace_program(ROOM);
}
