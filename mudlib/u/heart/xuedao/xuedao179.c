//This xuedao179 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "�η��е�");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 3 */ 
      "east" : __DIR__"xuedao72",
      "west" : __DIR__"xuedao73",
      "south" : __DIR__"xuedao181",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/2");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
