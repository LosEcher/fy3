// Room: /u/cyj/room/jiulou1.c
inherit ROOM;

void create()
{
  set ("short", "����¥��¥");
  set ("long", @LONG
�����Ǿ���¥�Ķ�¥���������Ŵ�����һ�����ӣ���������Ķ��ߺȱ߹۾���
��ɶҪ�󾡹ܸ����õ�˵��
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"jiulou.c",
]));
  set("outdoors", "/u/cyj/room");
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/paotang.c" : 1,
]));
  set("no_magic", 1);
  set("no_fight", 1);
  setup();
}
