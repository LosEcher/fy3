// Room: /d/kaifeng/shanlu1
inherit ROOM;

void create ()
{
  set ("short", "ɽ·");
  set ("long", @LONG
����ɽ·ֱͨ��ɽ���ɴ�ǰס��ɽ���㡢����Ŀ������ﲻ����
LONG);

  set("outdoors", "/d/kaifeng");
  set("exits", ([ /* sizeof() == 2 */
  "eastdown" : __DIR__"jiaowai",
  "westdown" : __DIR__"shanlu2",
]));

  setup();
}
