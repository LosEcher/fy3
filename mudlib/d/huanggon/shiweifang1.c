// Room: /d/huanggon/shiweifang1
inherit ROOM;

void create()
{
  set ("short", "侍卫房");
  set ("long", @LONG
这间房间的木柱上绑着三条汉子,光着上身,已给打得血肉模糊,一
边的地上一只铁桶内浸了几条牛皮鞭子,一个碳盆内碳火还未熄灭,里边
是几根烙铁,显然不是烤火来着.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"shiweifang",
]));
  setup();
  replace_program(ROOM);
}
