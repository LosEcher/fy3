// Room: /d/zhongzhou/mingwotang.c
inherit ROOM;

void create()
{
  set ("short", "������");
  set ("long", @LONG
���ƿ��ſڵ��޲����ӣ��پ�һ��������������������
��������ζ��ζ��֬��ζ����Լ�����������ӵ��������ſ�����
��ǽ��һ�߸ߵĹ�̨�����ſ�������վ�ż������ʹ󺺡�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : "/u/cyj/room/hutong2.c",
  "north" : "/u/cyj/room/duchang.c",
]));
  set("light_up", 1);
  setup();
}
