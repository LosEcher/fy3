//This xuedao24 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "��");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 3 */ 
      "northeast" : __DIR__"xuedao25",
      "northwest" : __DIR__"xuedao23",
      "south" : __DIR__"xuedao30",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/4");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
