// Room: /d/huanggon/yanghutong1
inherit ROOM;

void create()
{
  set ("short", "������ͬ");
  set ("long", @LONG
������ͬ����������С��ͬ,���϶���ʯ��·,��������,�����
�����ƾ�,���Ӻܰ�С,Ҫ���ŵĻ�һ��Ҫ����ͷ����.��ͬ�򱱾͵���
��.������������ŵ�լ��.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"muwangfu",
  "southeast" : __DIR__"yanghutong",
]));
  set("outdoors", "/d/huanggon");
  setup();
  replace_program(ROOM);
}
