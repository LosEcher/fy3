//This xuedao123 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "ʯ��·");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "north" : __DIR__"xuedao102",
      "southwest" : __DIR__"xuedao124",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
