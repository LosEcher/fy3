//This xuedao44 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "��ľ��");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "northwest" : __DIR__"xuedao43",
      "east" : __DIR__"xuedao45",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
