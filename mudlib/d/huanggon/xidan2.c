// Room: /d/huanggon/xidan2
inherit ROOM;

void create()
{
  set ("short", "����");
  set ("long", @LONG
�����Ǿ�����,ֻ��Щ�ִ߽����С��ҡ�Ż����Ĵ���,�����ľ���
�Ҷ�������,�����߾��Ǹ߸ߵ�ǽ��.��������������Ľֵ�,�Ǿ�������
������,��������ͦ��.
LONG);

  set("outdoors", "/d/huanggon");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"wchangan",
  "north" : __DIR__"xidan",
  "south" : __DIR__"xidan1",
]));
  setup();
  replace_program(ROOM);
}
