//This xuedao151 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "��ʯ��");
  set("long",@LONG
master���ڡ�
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "out" : __DIR__"xuedao153",
      "north" : __DIR__"xuedao152",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/2");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
