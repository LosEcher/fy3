// Room: /d/tianxia/1road2
inherit ROOM;

void create()
{
  set ("short", "С·");
  set ("long", @LONG
һ������ʯС�������ڸ�С������֦��Ʈ�����Ҷ����һ�㡣����
ʱ�ܼ������ɺԵ�Ѫ�����ӱ��洫�������ҽУ����Ϸ������ͨ
�����ֽ̳���
LONG);

  set("outdoors", "/d/tianxia");
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"1road3",
  "southeast" : __DIR__"1road",
]));
  setup();
}
