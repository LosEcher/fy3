//This xuedao10 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "�ڶ�");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 3 */ 
      "southeast" : __DIR__"xuedao9",
      "southwest" : __DIR__"xuedao11",
      "northeast" : __DIR__"xuedao18",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/4");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
