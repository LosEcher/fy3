// Room: /d/new/tianxia/incave2
inherit ROOM;

void create()
{
  set ("short", "���붴��");
  set ("long", @LONG
��ǰ�ں�����,������Щʲô.���ߴ�����ˮ������,�ƺ��Ա�����
����.�ڶ���������һ�߹���.
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "northeast" : __DIR__"incave1",
]));
  setup();
}
