// Room: /u/swordman/yangzhou/jiedao3.c

inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
���ž��Ǻ��ţ������ţ������ţ������ţ������������ֳ�
��ͤ�ţ�ÿ��������������ˮ�Բ�ʱ��������������˿�̰�֮��,
�������֣�������֮Ȥ��
LONG);

  set("outdoors", "/u/swordman");
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/shusheng" : 2,
]));
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 3 */
  "northeast" : __DIR__"jiedao4",
  "east" : __DIR__"baita",
  "southeast" : __DIR__"jiedao2",
]));

  setup();
}
