//This xuedao173 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "Ѫħ��");
  set("long",@LONG
��һ��Ѫ���������ڴ�����Ѫħ�񹦡�
��ôҲ����.��ʮ������˰�.
LONG
  );
  set("exits", ([ /* sizeof() == 2 */ 
      "out" : __DIR__"xuedao172",
      "south" : __DIR__"xuedao174",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/2");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
