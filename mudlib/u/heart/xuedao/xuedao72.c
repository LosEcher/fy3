//This xuedao72 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "�η��е�");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "south" : __DIR__"xuedao71",
      "west" : __DIR__"xuedao179",
      "north" : __DIR__"xuedao180",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/2");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
