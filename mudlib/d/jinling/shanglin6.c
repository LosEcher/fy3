// Room: /u/cyj/room/shanglin
inherit ROOM;

void create()
{
  set ("short", "���ֵ�");
  set ("long", @LONG
�������Ǿ�����⣬������������������Է��
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"shanglin5.c",
  "west" : __DIR__"chalu.c",
]));
  set("outdoors", "/u/cyj/room");
  setup();
}
