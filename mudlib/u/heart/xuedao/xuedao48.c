//This xuedao48 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "Ѫ�Ӷ���");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "west" : __DIR__"xuedao49",
      "southeast" : __DIR__"xuedao47",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
