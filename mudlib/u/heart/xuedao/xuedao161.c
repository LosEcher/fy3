//This xuedao161 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "����ɽ·");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "southdown" : __DIR__"xuedao175",
      "westdown" : __DIR__"xuedao160",
      "southeastup" : __DIR__"xuedao162",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
