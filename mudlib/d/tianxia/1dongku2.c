// Room: /d/tianxia/1dongku2
inherit ROOM;

void create()
{
  set ("short", "������");
  set ("long", @LONG
һ���ߵ������ľ����Χ£���������ˣ������Ŷ���СǮ��һ�ߵ���
���˼����վ�ƿ�����ѹ�ͷ���ͼ������Ӻ��������Աߵ�ľ���ϡ���ľ��
��͸����һ����������������ʯ��.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"1dongku",
]));
  setup();
  replace_program(ROOM);
}
