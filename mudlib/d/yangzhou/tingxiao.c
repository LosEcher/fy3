// Room: /u/swordman/yangzhou/tingxiao
inherit ROOM;

void create ()
{
  set ("short", "����԰");
  set ("long", @LONG
������·�ߵ�һ��С�Ƶ꣬�򿿽���Ұ���ƿ�Ҳ���Ǻܶ࣬��
����͵���ϰ����Ǯ�����Ҳ���ܾ��񡣵���һ�����ơ������ƣ��
�׵׺��֣��ǳ���Ŀ��
LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/txlaoban" : 1,
]));
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"jiedao4",
]));
  set("light_up", 1);

  setup();
}
