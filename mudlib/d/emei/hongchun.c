// Room: /u/xxy/room/hongchun
inherit ROOM;

void create()
{
  set ("short", "洪椿坪");
  set ("long", @LONG
登上山坡,展现在面前的是一大片平整的石地,左边有三棵高大的洪�
椿古树,此处四季如春,清净安谧,楼阁人影常浮现于茫茫林海和蒙蒙云雾
之中.深谷中隐隐传来阵阵涛声,碧空中回旋着声声鸟语.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "southdown" : __DIR__"jushich",
  "northup" : __DIR__"jinding",
]));
set("outdoors","/d/emei");
  setup();
  replace_program(ROOM);

}
