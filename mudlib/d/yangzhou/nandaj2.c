// Room: /u/swordman/yangzhou/nandaj2.c

inherit ROOM;

void create ()
{
  set ("short", "�ϴ��");
  set ("long", @LONG
���������ݳǵ�һ������ϣ������������У������������ؽֱ�
���Ǹ�����̼ҡ����̺�С������������������·�˲��ϣ�����ʱ��
�η����У��������Ե������ε����������������ǳ��е������ˡ���
����һ�ҹ˿��ڶ�Ĳ�ݣ����̾�����ʿ��������̸��˵�ء�
LONG);

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/langzhong" : 1,
]));
  set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"jiulou",
  "west" : __DIR__"chaguan",
  "north" : __DIR__"nandaj1",
  "south" : __DIR__"nandaj3",
]));
  set("outdoors", "/u/swordman");

  setup();
}
