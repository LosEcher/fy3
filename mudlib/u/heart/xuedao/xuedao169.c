//This xuedao169 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "石室");
  set("long",@LONG
北边的房间为秘室,不能显示。
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "west" : __DIR__"xuedao168",
      "north" : __DIR__"xuedao170",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/2");
  setup();
  replace_program(ROOM);//如果没有init函数请不要删除这句话

}
