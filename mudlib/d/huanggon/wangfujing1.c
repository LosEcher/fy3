// Room: /d/huanggon/wangfujing1
inherit ROOM;

void create()
{
  set ("short", "������");
  set ("long", @LONG
�������ĵ����ھ������,Ҳ�����������ĵط�,ȫ�����ص��̷�
���ѻ���Ū���˵ؽ���,�ֵ����ߵ�����һ����һ��,�ŵ����������.��
������������Ľֵ�,���Ƕ�������.
LONG);

  set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"echangan",
  "north" : __DIR__"wangfujing2",
  "south" : __DIR__"wangfujing",
]));
  set("outdoors", "/d/huanggon");
  setup();
  replace_program(ROOM);
}
