//This xuedao181 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "�η�");
  set("long",@LONG
�η���������һЩ��ץ�������õ��ˡ�
LONG
  );
  set("exits", ([ /* sizeof() == 1 */ 
      "north" : __DIR__"xuedao179",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/2");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
