//room: 
inherit ROOM;
void create()
{
  set("short","����");
  set("long", @LONG
���������������ȣ������Ǹ��ֻ�ľ����ʱ�п��˵��������½�ͽ�߹���
���߾��ǰ׻��ô�����
LONG );
  set("exits",([
     "north" : __DIR__"baistep1",
      "south" : __DIR__"baihutang",
  ]));
  set("no_clean_up", 0);
  setup();
  replace_program(ROOM);
}
