// Room: /d/new/tianxia/incave4
inherit ROOM;

void create()
{
  set ("short", "���붴��");
  set ("long", @LONG
����ɽ�ڸ������಻֪����ާ��ֲ��.һ������ͷ�������������
��,Ť������.����ʪºº��,��֪������ˮ.�ϱ��е�̨��һֱ����,��
���һ��ʯ������˵��º�.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "southdown" : __DIR__"incave5",
  "north" : __DIR__"bridge1",
]));
  setup();
}
