//This xuedao124 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "Ѫ����");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "northeast" : __DIR__"xuedao123",
      "south" : __DIR__"xuedao125",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
