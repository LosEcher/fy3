//This xuedao69 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "ʯ�δ���");
  set("long",@LONG
����һ��տյ����ķ��䡣
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "southeast" : __DIR__"xuedao68",
      "door" : __DIR__"xuedao70",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
