// Room: /d/tianxia/1guan7
inherit ROOM;

void create()
{
  set ("short", "����");
  set ("long", @LONG
һ���������������ȣ�������һ������С���䣬���ȵĶ��ܸߣ���
Ϊ����ԭ�������ղ������棬�������߱��ϸ�����Զ�����͵Ƶ��š�
���ϱߵķ����д�����������������
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"1guan8",
  "south" : __DIR__"sword",
  "north" : __DIR__"unarmed",
  "out" : __DIR__"1guan6",
]));
  setup();
}
