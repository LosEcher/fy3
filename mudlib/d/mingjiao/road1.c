// Room: /d/mingjiao/road1
inherit ROOM;

void create()
{
  set ("short", "ɽ·");
  set ("long", @LONG
������Ⱥɽ�����е�һ������ɽ·��һֱͨ��ɽ�����
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"road2",
  "north" : __DIR__"shanjiao",
]));
  set("outdoors", "/d/mingjiao");
  setup();
  replace_program(ROOM);
}
