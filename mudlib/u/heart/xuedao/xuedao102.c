//This xuedao102 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "��ͥ");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 4 */ 
      "east" : __DIR__"xuedao103",
      "north" : __DIR__"xuedao99",
      "west" : __DIR__"xuedao101",
      "south" : __DIR__"xuedao123",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
