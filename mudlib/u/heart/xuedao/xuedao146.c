//This xuedao146 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "ɳ����");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 3 */ 
      "north" : __DIR__"xuedao147",
      "west" : __DIR__"xuedao143",
      "south" : __DIR__"xuedao145",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
