// Room: /d/tianxia/1road
inherit ROOM;

void create()
{
  set ("short", "С·");
  set ("long", @LONG
����ʯ�̾͵�С·�����ߵ��Ӳݺܾ�û�������ˣ���������һ����
Ҷ�����ߵ���֦��ס��С·���Ͽա���ϸ��ʱ�����ϻ��ܼ������
Ѫ������ȥ�����ֽ̳���
LONG);

  set("outdoors", "/d/tianxia");
  set("exits", ([ /* sizeof() == 2 */
  "northwest" : __DIR__"1road2",
  "east" : __DIR__"jiaochang",
]));
  setup();
}
