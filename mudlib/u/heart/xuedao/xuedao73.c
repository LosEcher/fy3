//This xuedao73 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "�η��е�");
  set("long",@LONG
���������ص��ĳ����Ժ��Ƿ�յģ�����������衣
��˲�Ҫд�������ص�
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "east" : __DIR__"xuedao179",
      "west" : __DIR__"xuedao74",
      "north" : __DIR__"xuedao182",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/2");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
