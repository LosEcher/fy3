// Room: /u/cyj/room/gengwu
inherit ROOM;

void create()
{
  set ("short", "����");
  set ("long", @LONG
 ����һ���������۵�С�ݣ�ס��һ���������ͷ������ܼ�ª�����˼����ر�
��������Ʒ�⣬�����������۵Ķ�����
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "northwest" : __DIR__"changjie.c",
]));
  set("outdoors", "/u/cyj/room");
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/gengfu.c" : 1,
]));
  setup();
}
