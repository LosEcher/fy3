// Room: /d/new/tianxia/danger0
inherit ROOM;

void create()
{
  set ("short", "ʯ����");
  set ("long", @LONG
����ͨ�����ۻ���.խ�������ܲ������,��������ʮ����.�ƺ���
Ȼ����,Ȼ���������಻�ϵĸ���ʯ��ȴ������,��������.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "enter" : __DIR__"room0",
  "northdown" : __DIR__"incave5",
]));
  setup();
}
