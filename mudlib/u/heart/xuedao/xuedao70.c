//This xuedao70 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "ʯ��ǰͥ");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "out" : __DIR__"xuedao69",
      "north" : __DIR__"xuedao71",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
