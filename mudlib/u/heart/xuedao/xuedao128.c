//This xuedao128 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "�ڹ㳡");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 3 */ 
      "north" : __DIR__"xuedao127",
      "east" : __DIR__"xuedao129",
      "south" : __DIR__"xuedao133",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
