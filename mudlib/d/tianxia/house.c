// Room: /d/tianxia/house
inherit ROOM;

void create()
{
  set ("short", "��ϰ��");
  set ("long", @LONG
����ר�Ź�ѵ�����ڵĽ�ϰ��ס����������ס�����ܽ�ϰ����������
�þ�ϸľ�Ͻ�����ɣ�����ȥͦ��������ǰ���������Ϻõ����κ���
���ţ����滹�м䷿�䡣
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"house2",
  "south" : __DIR__"gardon2",
]));
  setup();
}
