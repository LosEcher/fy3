//This xuedao147 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "ɳ����");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "west" : __DIR__"xuedao142",
      "south" : __DIR__"xuedao146",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
