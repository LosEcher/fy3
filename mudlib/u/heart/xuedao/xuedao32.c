//This xuedao32 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "�ڶ���ͷ");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 1 */ 
      "north" : __DIR__"xuedao31",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/4");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
