//This xuedao178 room file by mapmaker

inherit ROOM;

void create()
{
  set("short", "���ý�");
  set("long",@LONG
����ʬ�����ۣ���Ѫ�������ڹ���ɱ֮�ˡ�
�˵��Ǳ������� --- ���ʯ����ʬ����յ㴦��
LONG
  );
  set("exits", ([ /* sizeof() == 1 */ 
      "westup" : __DIR__"xuedao177",
      ]));
  set("no_clean_up", 0);
  set("outdoors","xuedaomen/1");
  setup();
  replace_program(ROOM);//���û��init�����벻Ҫɾ����仰

}
