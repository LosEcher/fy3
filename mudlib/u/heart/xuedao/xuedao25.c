//This xuedao25 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "��ʯ̨");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "northwest" : __DIR__"xuedao14",
      "southwest" : __DIR__"xuedao24",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/4");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
