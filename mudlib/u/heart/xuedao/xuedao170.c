//This xuedao170 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "����");
  set("long",@LONG
�˴���ʯ̨�ϼ���---��Ѫħ����
LONG
  );
  set("exits", ([ /* sizeof() == 1 */ 
      "south" : __DIR__"xuedao169",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/2");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
