//This xuedao104 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "��ͥ");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 3 */ 
      "west" : __DIR__"xuedao99",
      "south" : __DIR__"xuedao103",
      "east" : __DIR__"xuedao115",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
