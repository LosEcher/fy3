//This xuedao38 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "ʯƺ");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 3 */ 
      "east" : __DIR__"xuedao33",
      "south" : __DIR__"xuedao37",
      "northwest" : __DIR__"xuedao41",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
