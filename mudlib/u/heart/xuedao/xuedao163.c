//This xuedao163 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "����ɽ·");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "southwestdown" : __DIR__"xuedao162",
      "northup" : __DIR__"xuedao164",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
