// Room: /d/room/qiandong
inherit ROOM;

void create()
{
  set ("short", "ǰ��");
  set ("long", @LONG
�ıڵ���ʯ�����ֵ��Ľ��,��˵�����ǧ�������������,ͷ��
��һ��СԲ��,����©��������������һ��Ͷ�ڵ����һ��̫��ͼ��,��
�о��������������,�����������.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"cooking",
  "north" : __DIR__"dongzhong1",
  "south" : __DIR__"dongzhong",
]));
  setup();
}
