//This xuedao152 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "����");
  set("long",@LONG
���ߵ��ص���Ҫ������������,���й���������á�
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "south" : __DIR__"xuedao151",
      "east" : __DIR__"xuedao167",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/2");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
