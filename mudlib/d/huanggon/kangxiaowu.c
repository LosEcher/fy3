// Room: /d/huanggon/kangxiaowu
inherit ROOM;

void create()
{
  set ("short", "����");
  set ("long", @LONG
�������ŷ�,�����˼Ҷ����з���,����С���й���һ����������,
����ǰ�����͵�,�������Ǹ������,һ�߻��и�ľ��,һ�������˵ľ�
��̯�ڵ��ӱ�,������һ���ķ�ש.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"xiaogardon1",
]));
  setup();
  replace_program(ROOM);
}
