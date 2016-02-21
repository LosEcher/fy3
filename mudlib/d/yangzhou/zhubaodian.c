// Room: /u/swordman/yangzhou/zhubaodian
inherit ROOM;

void create ()
{
  set ("short", "珠宝店");
  set ("long", @LONG
珠宝行中珠光宝气四射，眩的人有些睁不开眼睛。精致的长柜中
陈设着各类首饰珠宝玉器，几个老行家正陪着客人挑选所需珠宝。一个
雕花木架上摆着颗三尺多高的玉树，珍贵之外又透着淡雅秀丽，曲折含
蓄之气。
LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"xijie",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/jin" : 1,
]));

  setup();
}
