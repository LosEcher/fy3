// Room: /d/xxy/zoudao2.c

inherit ROOM;

void create ()
{
  set ("short", "�ߵ�");
  set ("long", @LONG
һ���������ߵ�,�����ǻ���,��������ٺ�,�Ǹ�����ֵĻ�ľ,����
���˵�����,�������ϸ�۲�,���ܿ�����඾���ڻ�ľ����Ϣ.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/wushi.c" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"zoudao3",
  "south" : __DIR__"zoudao1",
]));
  set("outdoors", "/d/xxy");

  setup();
}
