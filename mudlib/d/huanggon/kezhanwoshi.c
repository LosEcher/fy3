// Room: /d/huanggon/kezhanwoshi
inherit ROOM;

void create()
{
  set ("short", "��ջ����");
  set ("long", @LONG
���Ǿ�����ջ�ڵ�һ����ͨ����,�����˶�,���䲻��,��ֻ�ܺͱ���
��һ����.������ֻһ�Ŵ���,һ��ľ��,һ�Ű���.ǽ�����ж���Щ��ë��
��,����������,���Ը���Щ����.
LONG);

set("sleep_room",1);
set("hotel",1);
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"jingdukezhan",
]));
  setup();
  replace_program(ROOM);
}
