//This xuedao36 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "ʯƺ");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "east" : __DIR__"xuedao35",
      "north" : __DIR__"xuedao37",
      "southeast" : __DIR__"xuedao42",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
