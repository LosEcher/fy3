//This xuedao40 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "ʯ��");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 1 */ 
      "southeast" : __DIR__"xuedao39",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/4");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
