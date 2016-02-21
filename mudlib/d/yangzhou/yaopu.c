// Room: /u/swordman/yangzhou/yaopu
inherit ROOM;

void create ()
{
  set ("short", "扬州药铺");
  set ("long", @LONG
这里是一家药铺，因为外地商家来往很多，所以药品很齐全，
价格也比较公道。所以天天有人老远赶到这里来购买希罕紧缺的
药材。
LONG);

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/qilaoban" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"ddajie1",
]));

  setup();
}
