// Room: /d/huanggon/wchangan
inherit ROOM;

void create()
{
  set ("short", "��������");
  set ("long", @LONG
��������������������Ľֵ�,��Ϊ��������,���ߵ��̺ܶ�,������
��,���˲���,�ֵ��ı�����ʿ������,ȴ�Ǿ��п������ĸ���,��ȥ����
����,����ɳ�������.
LONG);

  set("outdoors", "/d/huanggon");
  set("exits", ([ /* sizeof() == 3 */
  "north" : __DIR__"kangwangfu",
  "west" : __DIR__"wchangan1",
  "east" : __DIR__"xidan2",
]));
  setup();
  replace_program(ROOM);
}
