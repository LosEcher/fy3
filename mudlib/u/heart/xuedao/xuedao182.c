//This xuedao182 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "ͣʬ��");
  set("long",@LONG
��������ʬ��Ŵ���������ʦ�������û�������
LONG
  );
  set("exits", ([ /* sizeof() == 1 */ 
      "south" : __DIR__"xuedao73",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/2");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
