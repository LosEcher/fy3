// Room: /d/mingjiao/road1
inherit ROOM;

void create()
{
  set ("short", "ɽ·");
  set ("long", @LONG
������Ⱥɽ�����е�һ������ɽ·��һֱͨ��ɽ�����
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "southup":__DIR__"road3",
  "north":__DIR__"road1",
]));
  set("outdoors", "/d/mingjiao");
  setup();
  replace_program(ROOM);
}
