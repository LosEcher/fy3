//This xuedao18 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "�ڶ�");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "southwest" : __DIR__"xuedao10",
      "northwest" : __DIR__"xuedao19",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/4");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
