// Room: /d/kaifeng/zhulin
inherit ROOM;

void create()
{
  set ("short", "������");
  set ("long", @LONG
һ��������ͷ�����̵�������б����,�����ɫ�Ĺ��͸����Ҷ��
��������,�����,ˢˢ����������Զȥ,�����ֵ��м䱻�˿���
��һƬ�յ�,������һ��Сé��.
LONG);

  set("outdoors", "/d/kaifeng");
  set("exits", ([ /* sizeof() == 2 */
  "in" : __DIR__"zhulin1",
  "west":__DIR__"fanta",
]));
  setup();
  replace_program(ROOM);
}
