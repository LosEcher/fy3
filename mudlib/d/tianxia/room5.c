// Room: /d/new/tianxia/room5.c

inherit ROOM;

void create ()
{
  set ("short", "ʯ��");
  set ("long", @LONG
һ�����ķ�����ʯ��,�ıߵ�ʯ�ڴ�ĥ�ù⻬�ޱ�.���й�Ӱ����,��֪��
�Ǵ���͸������.�춥ʯ���ϲ�֪˭����ָ����һ����:[�������,������Ե].
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/snake.c" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"danger5",
]));

  setup();
}
