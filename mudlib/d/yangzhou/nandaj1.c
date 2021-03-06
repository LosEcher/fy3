// Room: /u/swordman/yangzhou/nandaj1.c

inherit ROOM;

void create ()
{
  set ("short", "南大街");
  set ("long", @LONG
南大街乃是城里的繁华地段，一到晚上，一派灯红酒绿，尤为热闹。
笑声、歌声、琴声、箫声，汇成一片送入了你的耳朵，你不禁心猿意马�
很想就此停步享受一番。北边是一个热闹的广场。东边是一家店铺，墙
上写着一个大大的“当”字，仔细倾听可以听到压低的讨价还价的声音�
西边则是一片喧嚣，夹杂着“一五一十”的数钱声，原来那是方圆千里
之内最大的一家赌场。 
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/nanhai.c" : 1,
]));
  set("exits", ([ /* sizeof() == 4 */
  "east" : __DIR__"dangpu",
  "west" : __DIR__"duchang.c",
  "north" : __DIR__"guangchang",
  "south" : __DIR__"nandaj2",
]));
  set("outdoors", "/u/swordman");
  set("light_up", 1);

  setup();
}
