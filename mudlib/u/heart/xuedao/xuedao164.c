//This xuedao164 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "����ɽ·");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "southdown" : __DIR__"xuedao163",
      "eastup" : __DIR__"xuedao165",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
