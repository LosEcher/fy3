// Room: /u/panguan/workroom.c
inherit ROOM;

void create()
{
  set ("short", "�칫��");
  set ("long", @LONG
��
LONG);

  set("no_clean_up", 1);
//  set("no_magic", 1);
  set("exits", ([ /* sizeof() == 2 */
   "down" : "/d/zhongzhou/shizhongxin",
  "up" : "/d/wiz/meeting",
    "yandang" : "/d/yandang/luoyan6",
  "baituo":"/d/baituo/dating",
]));
//  set("no_fight", 1);
  set("light_up", 1);
  setup();
  replace_program(ROOM);
}
