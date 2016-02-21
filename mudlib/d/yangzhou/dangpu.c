// Room: /u/swordman/yangzhou/dangpu
inherit ROOM;

void create ()
{
  set ("short", "刘记当铺");
  set ("long", @LONG
这是一家以买卖公平著称的当铺，一个五尺高的柜台挡在你的面前，
柜台上摆着一个牌子(paizi)，柜台后坐着当铺老板，一双精明的眼睛上
上下下打量着你。 
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/liu.c" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"nandaj1",
]));
  set("item_desc", ([ /* sizeof() == 1 */
  "paizi" : "公平交易,童叟无欺。
",
]));

  setup();
}
