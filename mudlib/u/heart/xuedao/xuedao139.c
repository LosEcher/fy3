//This xuedao139 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "��Ϣ��");
  set("long",@LONG
�е���
LONG
  );
  set("exits", ([ /* sizeof() == 1 */ 
      "south" : __DIR__"xuedao137",
      ]));
  set("sleep_room", 1);
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/2");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
