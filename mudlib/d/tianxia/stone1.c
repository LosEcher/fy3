// Room: /d/new/tianxia/stone1
inherit ROOM;

void create()
{
  set ("short", "ʯ��·");
  set ("long", @LONG
һ��ƽ������ʯ��·��һֱͨ����ɽ���µ�һ�����ڣ����������
������ӳ��ʹ�˵�ƽ����������
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"outcave",
  "north" : __DIR__"1guan2",
]));
  set("outdoors", "/d/new");
  setup();
}
