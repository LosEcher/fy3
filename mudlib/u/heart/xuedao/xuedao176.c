//This xuedao176 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "����ɽ·");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "northwestdown" : __DIR__"xuedao175",
      "southdown" : __DIR__"xuedao177",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
