// Room: /u/swordman/yangzhou/beijie1.c

inherit ROOM;

void create ()
{
  set ("short", "�����");
  set ("long", @LONG
�����·�൱�Ŀ����ݺü�ƥ�����У������ĵ�·ͨ�򱱷���
�����ǳ��е�һ����ݡ�
LONG);

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/shangren" : 1,
]));
  set("exits", ([ /* sizeof() == 3 */
  "east" : __DIR__"wuguan",
  "north" : __DIR__"beijie2",
  "south" : __DIR__"beijie",
]));
  set("outdoors", "/u/swordman");

  setup();
}
