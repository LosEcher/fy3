// Room: /u/swordman/yangzhou/damingshi.c

inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
�����Ǵ������£�����ʯ�ڿ��ţ�������һ�ۡ������������ƣ�
ľ�����������ڹ��ӵ��ţ�ׯ����Ĭ�����������˾ɹݣ��򶫾���
��������������ǰ��������ΰ�ġ����۱����
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/zhikeseng" : 1,
]));
  set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"xiling",
  "north" : __DIR__"damingshi1",
  "south" : __DIR__"jiedao4",
]));
  set("light_up", 1);

  setup();
}
