//This xuedao95 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "ʯ��·");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "east" : __DIR__"xuedao94",
      "southwest" : __DIR__"xuedao96",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
