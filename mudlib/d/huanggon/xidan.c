// Room: /d/huanggon/xidan
inherit ROOM;

void create()
{
  set ("short", "����");
  set ("long", @LONG
�����Ǿ�����,ֻ��Щ�ִ߽����С��ҡ�Ż����Ĵ���,�����ľ���
�Ҷ�������,�����߾��Ǹ߸ߵ�ǽ��.���߼�ҩ��,������ǰ�ҵ�ҩ��«һ
�λε�,������������.
LONG);

  set("outdoors", "/d/huanggon");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"tongyaopu",
  "north" : __DIR__"ndajie3",
  "south" : __DIR__"xidan2",
]));
  setup();
  replace_program(ROOM);
}
