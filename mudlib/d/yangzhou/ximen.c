// Room: /u/swordman/yangzhou/ximen
inherit ROOM;

void create ()
{
  set ("short", "��������");
  set ("long", @LONG
������һ���Ľٷ˱Ƚ϶࣬�ٸ����ڽ˷ˣ�����һ�����Ŷ�������
LONG);

  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
  "/d/quanzhou/npc/bing" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"xijie2",
]));
  set("outdoors", "/u/swordman");

  setup();
}
