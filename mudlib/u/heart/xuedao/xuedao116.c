//This xuedao116 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "����Ժ");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "west" : __DIR__"xuedao115",
      "east" : __DIR__"xuedao120",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
