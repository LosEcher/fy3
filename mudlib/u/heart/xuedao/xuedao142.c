//This xuedao142 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "ɳ����");
  set("long",@LONG
��������
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "south" : __DIR__"xuedao143",
      "east" : __DIR__"xuedao147",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
