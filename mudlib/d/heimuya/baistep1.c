//room: 
inherit ROOM;
void create()
{
  set("short","����");
  set("long", @LONG
���������������ȣ������Ǹ��໨ľ����ͽ�������ȱ������š�����
���߿�ȥ��Զ�����ǰ׻��ô�����
LONG );
  set("exits",([
      "east" : __DIR__"dating2",
      "south" : __DIR__"baistep2",
  ]));
  set("objects",([
     __DIR__"npc/jiaotu"   :1,
  ]));
//  set("no_clean_up", 0);
  setup();
  replace_program(ROOM);
}
