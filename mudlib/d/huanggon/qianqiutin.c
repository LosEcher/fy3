// Room: /d/huanggon/qianqiutin
inherit ROOM;

void create()
{
  set ("short", "ǧ��ͤ");
  set ("long", @LONG
�����ڼ�ɽ֮�ϵ�һ��Сͤ,ͨ�����ɫ,������һֻ���׺�,���
����.ͤ�аڷŰ���ʯ����,����һ��,������δ����.��ȥ��,�ǹ����
�̵��հ���.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"qingandian",
]));
  set("outdoors", "/d/huanggon");
  setup();
  replace_program(ROOM);
}
