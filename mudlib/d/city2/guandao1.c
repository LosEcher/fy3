// Room: /d/city2/guandao1
inherit ROOM;

void create()
{
  set ("short", "�ٵ�");
  set ("long", @LONG
���������ӹ���Ĵ�����ϱ߲�Զ�����Ǿ��ǡ�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"guandao2",
  "south" : __DIR__"road1",
]));
  set("outdoors", "/d/city2");
  setup();
  replace_program(ROOM);
}
