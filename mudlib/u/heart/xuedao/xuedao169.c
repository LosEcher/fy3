//This xuedao169 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "ʯ��");
  set("long",@LONG
���ߵķ���Ϊ����,������ʾ��
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "west" : __DIR__"xuedao168",
      "north" : __DIR__"xuedao170",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/2");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
