// Room: /d/huanggon/wchangan1
inherit ROOM;

void create()
{
  set ("short", "��������");
  set ("long", @LONG
��������������������Ľֵ�,��Ϊ��������,���ߵ��̺ܶ�,������
��,���˲���,�ֵ����ϱ��Ǽҿ�ջ,���������˶ൽ�˴�Ͷ��.����������
��,ͨ��������.
LONG);

  set("outdoors", "/d/huanggon");
  set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"xitiemen",
  "south" : __DIR__"jingdukezhan",
  "east" : __DIR__"wchangan",
]));
  setup();
  replace_program(ROOM);
}
