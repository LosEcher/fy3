//This xuedao131 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "�ڹ㳡");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 3 */ 
      "west" : __DIR__"xuedao132",
      "south" : __DIR__"xuedao130",
      "north" : __DIR__"xuedao153",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
