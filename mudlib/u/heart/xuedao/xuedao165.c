//This xuedao165 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "�ͱ�");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "westdown" : __DIR__"xuedao164",
      "climb" : __DIR__"xuedao166",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
