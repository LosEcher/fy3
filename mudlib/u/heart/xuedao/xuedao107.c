//This xuedao107 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "����");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "northeast" : __DIR__"xuedao106",
      "south" : __DIR__"xuedao108",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/2");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
