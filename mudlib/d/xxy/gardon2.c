// Room: /d/xxy/gardon2 
inherit ROOM; 
 
void create ()
{
  set ("short", "��԰");
  set ("long", @LONG
���ǻ�԰�е�һ�����ʯ��·,�������Ļ�ľ�д���.Զ��������¶����
��һ��,�Ǿ������¥.
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/wushi.c" : 1,
]));
  set("outdoors", "/d/xxy");
  set("item_desc", ([ /* sizeof() == 1 */
  "n" : "",
]));
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"zoulang5",
  "south" : __DIR__"gardon3",
]));

  setup();
}
