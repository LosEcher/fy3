// Room: /d/mingjiao/road1
inherit ROOM;

void create()
{
  set ("short", "ɽ·");
  set ("long", @LONG
������Ⱥɽ�����е�һ������ɽ·��һֱͨ��ɽ�����
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "southdown":"/d/lingjiu/shanjiao",
  "northdown":__DIR__"road2",
]));
  set("outdoors", "/d/mingjiao");
  setup();
  replace_program(ROOM);
}
