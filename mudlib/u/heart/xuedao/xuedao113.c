//This xuedao113 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "��");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 1 */ 
      "east" : __DIR__"xuedao112",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/2");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
