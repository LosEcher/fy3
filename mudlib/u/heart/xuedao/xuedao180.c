//This xuedao180 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "�η�");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 1 */ 
      "south" : __DIR__"xuedao72",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/2");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
