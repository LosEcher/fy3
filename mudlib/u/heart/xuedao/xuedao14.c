//This xuedao14 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "�ڶ�");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 3 */ 
      "northwest" : __DIR__"xuedao13",
      "southwest" : __DIR__"xuedao15",
      "southeast" : __DIR__"xuedao25",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/4");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
