//This xuedao160 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "����ɽ·");
  set("long",@LONG
�Ӵ�����ɽ��·��
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "eastup" : __DIR__"xuedao161",
      "north" : __DIR__"xuedao171",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
