//This xuedao103 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "��ͥ");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "north" : __DIR__"xuedao104",
      "west" : __DIR__"xuedao102",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
