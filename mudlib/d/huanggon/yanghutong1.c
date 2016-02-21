// Room: /d/huanggon/yanghutong1
inherit ROOM;

void create()
{
  set ("short", "杨柳胡同");
  set ("long", @LONG
杨柳胡同是条弯曲的小胡同,道上都是石板路,两边是民房,大多已
经很破旧,房子很矮小,要进门的话一定要低了头才行.胡同向北就到了
底.那有座朱漆大门的宅第.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"muwangfu",
  "southeast" : __DIR__"yanghutong",
]));
  set("outdoors", "/d/huanggon");
  setup();
  replace_program(ROOM);
}
