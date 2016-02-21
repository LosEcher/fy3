// Room: /u/swordman/yangzhou/ddajie1.c

inherit ROOM;

void create ()
{
  set ("short", "�����");
  set ("long", @LONG
�����ڶ�����ϣ����ż�ʵ����ʯ����档�����Ƕ����ţ����������� 
�ǹٱ���ߺ���������������ʵĶ�����������һ�𡣱�����һ�����ֺŵ�ҩ
�̣� �ϱ��Ǵ����̣�����������������Զ���������� 
LONG);

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/wulai" : 2,
]));
  set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"dongmen",
  "west" : __DIR__"ddajie",
  "north" : __DIR__"yaopu",
  "south" : __DIR__"tiepu",
]));
  set("outdoors", "/u/swordman");

  setup();
}
