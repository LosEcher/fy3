//This xuedao134 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "��ʯ·");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 3 */ 
      "northeast" : __DIR__"xuedao133",
      "south" : __DIR__"xuedao140",
      "west" : __DIR__"xuedao135",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
