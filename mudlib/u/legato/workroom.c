// Room: /u/legato/workroom.c
inherit ROOM;

void create()
{
  set ("short", "������");
  set ("long", @LONG
��������ʦ�Ĺ����ң��������߰���ķ���һЩ����
LONG);
            set("objects",([
         "/u/legato/obj/hua_wuque":1,
       ]));

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"yushi",
 "west" : "/d/wiz/meeting",
 "yd" :"/d/yandang/luoyan6",
"lingjiu" : "/d/lingjiu/dating",
 "down" : "/d/zhongzhou/shizhongxin"

]));
  set("light_up", 1);
 set("outdoor","lingjian");
  setup();
  replace_program(ROOM);
}
